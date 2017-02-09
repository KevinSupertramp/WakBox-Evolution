#include "Cryptography/CryptographyMgr.h"
#include "Server/WorldSession.h"
#include "Utils/Util.h"

void WorldSession::HandleClientVersion(WorldPacket& packet)
{
    quint8 version, change;
    quint16 revision;
    QString build;

    packet >> version;
    packet >> revision;
    packet >> change;
    build =  packet.ReadString();

    qDebug() << "BUILD: " << build;

    QString clientVersion = QString(QString::number(version) + "." + QString::number(revision) + "." + QString::number(change));
    SendClientVersionResult(clientVersion, sAuthConfig->GetString("AcceptClientVersion"));
}

void WorldSession::SendClientVersionResult(QString clientVersion, QString expectedVersion)
{
    QStringList version = expectedVersion.split(".");

    WorldPacket data(SMSG_CLIENT_VERSION_RESULT);
    data << (quint8)(clientVersion == expectedVersion);
    data << (quint8)version.at(0).toUShort();
    data << (quint16)version.at(1).toUShort();
    data << (quint8)version.at(2).toUShort();
    data.WriteString("-1");
    SendPacket(data);
}

void WorldSession::HandlePublicKeyRequest(WorldPacket& /*packet*/)
{
    QByteArray publicKey = sCryptographyMgr->GetPublicKey();

    WorldPacket data(SMSG_PUBLIC_KEY_RESULT);
    data << quint64(0x8000000000000000); // Salt
    data.WriteRawBytes(publicKey);
    SendPacket(data);
}

void WorldSession::HandleClientAuthToken(WorldPacket& packet)
{
    quint32 tokenLength;
    packet >> tokenLength;

    QString token = packet.ReadString((quint8) tokenLength);
    QSqlQuery result = sAuthDatabase->Query(SELECT_ACCOUNT_BY_TOKEN, QVariantList() << token);

    WorldPacket data(SMSG_CLIENT_AUTH_RESULT);

    if (!result.first())
    {
        data << (quint8) LOGIN_RESULT_ERROR_INVALID_LOGIN;
        SendPacket(data);

        return;
    }

    m_accountInfos.id               = result.value("account_id").toULongLong();
    m_accountInfos.username         = result.value("username").toString();
    m_accountInfos.pseudo           = result.value("pseudo").toString();
    m_accountInfos.gmLevel          = result.value("gm_level").toUInt();
    m_accountInfos.subscriptionTime = result.value("subscription_time").toUInt();

    data << (quint8) LOGIN_RESULT_SUCCESS;

    // if ban (=> ban check per realm?)
    // int banDuration in minutes

    data.StartBlock<quint16>();
    {
        // block number
        data << quint8(1);
        {
            data << quint8(0);      // block id
            data << quint32(6);     // block start

            data << quint8(0);      // block id

            data << quint64(result.value("account_id").toULongLong());
            data << quint32(101); // m_subscriptionLevel
            data << quint32(0); // antiAddictionLevel
            data << quint8(0); // m_additionalSlot
            data << quint64(m_accountInfos.subscriptionTime);

            // Hero subscription (hero system?)
            data << quint32(1); // m_heroSubscription count
                data << quint32(0); // unkInt
                data << quint64(0); // unkLong (heroId?)

            // Admin rights => TODO
            for (quint8 i = 1; i <= MAX_ADMIN_RIGHT + 5; ++i)
                data << quint32(0);

            data.WriteString(m_accountInfos.pseudo);

            data << (quint32) COMMUNITY_FR; // m_accountCommunity => TODO Community in accounts table

            // Account data (flags) TODO
            data << quint16(0); // flagCount
        }
    }
    data.EndBlock<quint16>();

    SendPacket(data);

    SendWorldSelectResult(true);

    // Send SMSG_FREE_COMPANION_BREED_ID - Opcode 2078
    WorldPacket data2(SMSG_FREE_COMPANION_BREED_ID);
    data2 << quint16(3075);
    SendPacket(data2);

    SendClientCalendarSync();
    SendSystemConfiguration();
    SendAdditionalSlotsUpdate();

    SendCompanionList();

    // Send 5256 - Unserialize EquipmentInventory??
    WorldPacket data3(5256);
    data3.WriteRawBytes(Utils::FromHexString("00 00 00 69 0A 17 08 B4 80 80 A8 C7 DE D7 30 10 94 73 18 01 A2 03 06 0A 04 50 00 58 00 0A 0E 08 87 81 80 A8 C7 DE D7 30 10 97 73 18 01 0A 0E 08 86 84 80 A0 C7 DE D7 30 10 99 73 18 01 0A 0E 08 C6 82 80 A0 C7 DE D7 30 10 95 73 18 01 0A 0E 08 CD 81 80 B0 C7 DE D7 30 10 98 73 18 01 0A 0E 08 C8 82 80 A0 C7 DE D7 30 10 96 73 18 01"));
    SendPacket(data3);

    WorldPacket data4(5255);
    data4.WriteRawBytes(Utils::FromHexString("00 00 00 1C 0A 1A 0A 12 98 03 00 A2 03 00 A8 03 FF FF FF FF FF FF FF FF FF 01 10 D1 A3 9D 82 10"));
    SendPacket(data4);

    // Characters list
    SendCharactersList();
}

// TODO ! An other token for reconnect????
void WorldSession::HandleAuthTokenRequest(WorldPacket& packet)
{
    quint64 address;
    quint16 languageLength;

    packet >> address;
    packet >> languageLength;
    QString language = packet.ReadString(languageLength);

    // Hardcoded token for now
    QString token = "74aed5af0c8551977d418cee34fa394bfd398565ba7b018d74c59999449ca";
    qDebug() << "Received token : " << token;

    WorldPacket data(MSG_AUTH_TOKEN);
    data.WriteString(token, STRING_SIZE_4);
    SendPacket(data);
}
