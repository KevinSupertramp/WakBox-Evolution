#ifndef BINARYDATA_DECORATIONINTERACTIVEELEMENTPARAMSTORAGE_H
#define BINARYDATA_DECORATIONINTERACTIVEELEMENTPARAMSTORAGE_H

#include "BinaryData/BinaryDataStorage.h"

template<class T>
class DecorationInteractiveElementParamStorage : public BinaryDataStorage<T>
{
public:
    DecorationInteractiveElementParamStorage() { }

    void Load()
    {
        qint32 size = this->m_rows.size();

        for (qint32 i = 0; i < size; ++i)
        {
            Row row = this->m_rows[i];
            this->_reader->SetBufferPosition(row.offset);

            DecorationInteractiveElementParamBinaryData entry;

            entry.m_id = this->_reader->ReadInt();
            entry.m_havreGemTypes = this->_reader->ReadIntArray();

            this->m_entries[entry.m_id] = entry;
        }

        qDebug() << ">> Loaded " << this->m_entries.size() << " entries for DecorationInteractiveElementParamStorage";
    }
};

#endif // BINARYDATA_DECORATIONINTERACTIVEELEMENTPARAMSTORAGE_H
