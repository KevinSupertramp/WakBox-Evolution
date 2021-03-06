// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dungeon.proto

#ifndef PROTOBUF_dungeon_2eproto__INCLUDED
#define PROTOBUF_dungeon_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3002000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3002000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
namespace WakfuProto {
class ProtoDungeon;
class ProtoDungeonDefaultTypeInternal;
extern ProtoDungeonDefaultTypeInternal _ProtoDungeon_default_instance_;
class ProtoPartyInstanceInfo;
class ProtoPartyInstanceInfoDefaultTypeInternal;
extern ProtoPartyInstanceInfoDefaultTypeInternal _ProtoPartyInstanceInfo_default_instance_;
class ProtoPartyInstanceInfoEntry;
class ProtoPartyInstanceInfoEntryDefaultTypeInternal;
extern ProtoPartyInstanceInfoEntryDefaultTypeInternal _ProtoPartyInstanceInfoEntry_default_instance_;
}  // namespace WakfuProto

namespace WakfuProto {

namespace protobuf_dungeon_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_dungeon_2eproto

// ===================================================================

class ProtoDungeon : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:WakfuProto.ProtoDungeon) */ {
 public:
  ProtoDungeon();
  virtual ~ProtoDungeon();

  ProtoDungeon(const ProtoDungeon& from);

  inline ProtoDungeon& operator=(const ProtoDungeon& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ProtoDungeon& default_instance();

  static inline const ProtoDungeon* internal_default_instance() {
    return reinterpret_cast<const ProtoDungeon*>(
               &_ProtoDungeon_default_instance_);
  }

  void Swap(ProtoDungeon* other);

  // implements Message ----------------------------------------------

  inline ProtoDungeon* New() const PROTOBUF_FINAL { return New(NULL); }

  ProtoDungeon* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ProtoDungeon& from);
  void MergeFrom(const ProtoDungeon& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output)
      const PROTOBUF_FINAL {
    return InternalSerializeWithCachedSizesToArray(
        ::google::protobuf::io::CodedOutputStream::IsDefaultSerializationDeterministic(), output);
  }
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(ProtoDungeon* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated int64 allowedIds = 7;
  int allowedids_size() const;
  void clear_allowedids();
  static const int kAllowedIdsFieldNumber = 7;
  ::google::protobuf::int64 allowedids(int index) const;
  void set_allowedids(int index, ::google::protobuf::int64 value);
  void add_allowedids(::google::protobuf::int64 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int64 >&
      allowedids() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int64 >*
      mutable_allowedids();

  // required int32 maxLevel = 1;
  bool has_maxlevel() const;
  void clear_maxlevel();
  static const int kMaxLevelFieldNumber = 1;
  ::google::protobuf::int32 maxlevel() const;
  void set_maxlevel(::google::protobuf::int32 value);

  // required int32 difficultyLevel = 2;
  bool has_difficultylevel() const;
  void clear_difficultylevel();
  static const int kDifficultyLevelFieldNumber = 2;
  ::google::protobuf::int32 difficultylevel() const;
  void set_difficultylevel(::google::protobuf::int32 value);

  // required bool isDifficultyAvailable = 3;
  bool has_isdifficultyavailable() const;
  void clear_isdifficultyavailable();
  static const int kIsDifficultyAvailableFieldNumber = 3;
  bool isdifficultyavailable() const;
  void set_isdifficultyavailable(bool value);

  // required bool canIncreaseDifficulty = 4;
  bool has_canincreasedifficulty() const;
  void clear_canincreasedifficulty();
  static const int kCanIncreaseDifficultyFieldNumber = 4;
  bool canincreasedifficulty() const;
  void set_canincreasedifficulty(bool value);

  // required bool isfightInProgress = 5;
  bool has_isfightinprogress() const;
  void clear_isfightinprogress();
  static const int kIsfightInProgressFieldNumber = 5;
  bool isfightinprogress() const;
  void set_isfightinprogress(bool value);

  // required bool isCompetitiveCancelled = 6;
  bool has_iscompetitivecancelled() const;
  void clear_iscompetitivecancelled();
  static const int kIsCompetitiveCancelledFieldNumber = 6;
  bool iscompetitivecancelled() const;
  void set_iscompetitivecancelled(bool value);

  // @@protoc_insertion_point(class_scope:WakfuProto.ProtoDungeon)
 private:
  void set_has_maxlevel();
  void clear_has_maxlevel();
  void set_has_difficultylevel();
  void clear_has_difficultylevel();
  void set_has_isdifficultyavailable();
  void clear_has_isdifficultyavailable();
  void set_has_canincreasedifficulty();
  void clear_has_canincreasedifficulty();
  void set_has_isfightinprogress();
  void clear_has_isfightinprogress();
  void set_has_iscompetitivecancelled();
  void clear_has_iscompetitivecancelled();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int64 > allowedids_;
  ::google::protobuf::int32 maxlevel_;
  ::google::protobuf::int32 difficultylevel_;
  bool isdifficultyavailable_;
  bool canincreasedifficulty_;
  bool isfightinprogress_;
  bool iscompetitivecancelled_;
  friend struct  protobuf_dungeon_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ProtoPartyInstanceInfo : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:WakfuProto.ProtoPartyInstanceInfo) */ {
 public:
  ProtoPartyInstanceInfo();
  virtual ~ProtoPartyInstanceInfo();

  ProtoPartyInstanceInfo(const ProtoPartyInstanceInfo& from);

  inline ProtoPartyInstanceInfo& operator=(const ProtoPartyInstanceInfo& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ProtoPartyInstanceInfo& default_instance();

  static inline const ProtoPartyInstanceInfo* internal_default_instance() {
    return reinterpret_cast<const ProtoPartyInstanceInfo*>(
               &_ProtoPartyInstanceInfo_default_instance_);
  }

  void Swap(ProtoPartyInstanceInfo* other);

  // implements Message ----------------------------------------------

  inline ProtoPartyInstanceInfo* New() const PROTOBUF_FINAL { return New(NULL); }

  ProtoPartyInstanceInfo* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ProtoPartyInstanceInfo& from);
  void MergeFrom(const ProtoPartyInstanceInfo& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output)
      const PROTOBUF_FINAL {
    return InternalSerializeWithCachedSizesToArray(
        ::google::protobuf::io::CodedOutputStream::IsDefaultSerializationDeterministic(), output);
  }
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(ProtoPartyInstanceInfo* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .WakfuProto.ProtoPartyInstanceInfoEntry entry = 1;
  int entry_size() const;
  void clear_entry();
  static const int kEntryFieldNumber = 1;
  const ::WakfuProto::ProtoPartyInstanceInfoEntry& entry(int index) const;
  ::WakfuProto::ProtoPartyInstanceInfoEntry* mutable_entry(int index);
  ::WakfuProto::ProtoPartyInstanceInfoEntry* add_entry();
  ::google::protobuf::RepeatedPtrField< ::WakfuProto::ProtoPartyInstanceInfoEntry >*
      mutable_entry();
  const ::google::protobuf::RepeatedPtrField< ::WakfuProto::ProtoPartyInstanceInfoEntry >&
      entry() const;

  // @@protoc_insertion_point(class_scope:WakfuProto.ProtoPartyInstanceInfo)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::WakfuProto::ProtoPartyInstanceInfoEntry > entry_;
  friend struct  protobuf_dungeon_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ProtoPartyInstanceInfoEntry : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:WakfuProto.ProtoPartyInstanceInfoEntry) */ {
 public:
  ProtoPartyInstanceInfoEntry();
  virtual ~ProtoPartyInstanceInfoEntry();

  ProtoPartyInstanceInfoEntry(const ProtoPartyInstanceInfoEntry& from);

  inline ProtoPartyInstanceInfoEntry& operator=(const ProtoPartyInstanceInfoEntry& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ProtoPartyInstanceInfoEntry& default_instance();

  static inline const ProtoPartyInstanceInfoEntry* internal_default_instance() {
    return reinterpret_cast<const ProtoPartyInstanceInfoEntry*>(
               &_ProtoPartyInstanceInfoEntry_default_instance_);
  }

  void Swap(ProtoPartyInstanceInfoEntry* other);

  // implements Message ----------------------------------------------

  inline ProtoPartyInstanceInfoEntry* New() const PROTOBUF_FINAL { return New(NULL); }

  ProtoPartyInstanceInfoEntry* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ProtoPartyInstanceInfoEntry& from);
  void MergeFrom(const ProtoPartyInstanceInfoEntry& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output)
      const PROTOBUF_FINAL {
    return InternalSerializeWithCachedSizesToArray(
        ::google::protobuf::io::CodedOutputStream::IsDefaultSerializationDeterministic(), output);
  }
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(ProtoPartyInstanceInfoEntry* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required .WakfuProto.ProtoDungeon dungeonInfo = 2;
  bool has_dungeoninfo() const;
  void clear_dungeoninfo();
  static const int kDungeonInfoFieldNumber = 2;
  const ::WakfuProto::ProtoDungeon& dungeoninfo() const;
  ::WakfuProto::ProtoDungeon* mutable_dungeoninfo();
  ::WakfuProto::ProtoDungeon* release_dungeoninfo();
  void set_allocated_dungeoninfo(::WakfuProto::ProtoDungeon* dungeoninfo);

  // required int32 index = 1;
  bool has_index() const;
  void clear_index();
  static const int kIndexFieldNumber = 1;
  ::google::protobuf::int32 index() const;
  void set_index(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:WakfuProto.ProtoPartyInstanceInfoEntry)
 private:
  void set_has_index();
  void clear_has_index();
  void set_has_dungeoninfo();
  void clear_has_dungeoninfo();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::WakfuProto::ProtoDungeon* dungeoninfo_;
  ::google::protobuf::int32 index_;
  friend struct  protobuf_dungeon_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ProtoDungeon

// required int32 maxLevel = 1;
inline bool ProtoDungeon::has_maxlevel() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ProtoDungeon::set_has_maxlevel() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ProtoDungeon::clear_has_maxlevel() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ProtoDungeon::clear_maxlevel() {
  maxlevel_ = 0;
  clear_has_maxlevel();
}
inline ::google::protobuf::int32 ProtoDungeon::maxlevel() const {
  // @@protoc_insertion_point(field_get:WakfuProto.ProtoDungeon.maxLevel)
  return maxlevel_;
}
inline void ProtoDungeon::set_maxlevel(::google::protobuf::int32 value) {
  set_has_maxlevel();
  maxlevel_ = value;
  // @@protoc_insertion_point(field_set:WakfuProto.ProtoDungeon.maxLevel)
}

// required int32 difficultyLevel = 2;
inline bool ProtoDungeon::has_difficultylevel() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ProtoDungeon::set_has_difficultylevel() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ProtoDungeon::clear_has_difficultylevel() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ProtoDungeon::clear_difficultylevel() {
  difficultylevel_ = 0;
  clear_has_difficultylevel();
}
inline ::google::protobuf::int32 ProtoDungeon::difficultylevel() const {
  // @@protoc_insertion_point(field_get:WakfuProto.ProtoDungeon.difficultyLevel)
  return difficultylevel_;
}
inline void ProtoDungeon::set_difficultylevel(::google::protobuf::int32 value) {
  set_has_difficultylevel();
  difficultylevel_ = value;
  // @@protoc_insertion_point(field_set:WakfuProto.ProtoDungeon.difficultyLevel)
}

// required bool isDifficultyAvailable = 3;
inline bool ProtoDungeon::has_isdifficultyavailable() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ProtoDungeon::set_has_isdifficultyavailable() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ProtoDungeon::clear_has_isdifficultyavailable() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ProtoDungeon::clear_isdifficultyavailable() {
  isdifficultyavailable_ = false;
  clear_has_isdifficultyavailable();
}
inline bool ProtoDungeon::isdifficultyavailable() const {
  // @@protoc_insertion_point(field_get:WakfuProto.ProtoDungeon.isDifficultyAvailable)
  return isdifficultyavailable_;
}
inline void ProtoDungeon::set_isdifficultyavailable(bool value) {
  set_has_isdifficultyavailable();
  isdifficultyavailable_ = value;
  // @@protoc_insertion_point(field_set:WakfuProto.ProtoDungeon.isDifficultyAvailable)
}

// required bool canIncreaseDifficulty = 4;
inline bool ProtoDungeon::has_canincreasedifficulty() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ProtoDungeon::set_has_canincreasedifficulty() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ProtoDungeon::clear_has_canincreasedifficulty() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ProtoDungeon::clear_canincreasedifficulty() {
  canincreasedifficulty_ = false;
  clear_has_canincreasedifficulty();
}
inline bool ProtoDungeon::canincreasedifficulty() const {
  // @@protoc_insertion_point(field_get:WakfuProto.ProtoDungeon.canIncreaseDifficulty)
  return canincreasedifficulty_;
}
inline void ProtoDungeon::set_canincreasedifficulty(bool value) {
  set_has_canincreasedifficulty();
  canincreasedifficulty_ = value;
  // @@protoc_insertion_point(field_set:WakfuProto.ProtoDungeon.canIncreaseDifficulty)
}

// required bool isfightInProgress = 5;
inline bool ProtoDungeon::has_isfightinprogress() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void ProtoDungeon::set_has_isfightinprogress() {
  _has_bits_[0] |= 0x00000010u;
}
inline void ProtoDungeon::clear_has_isfightinprogress() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void ProtoDungeon::clear_isfightinprogress() {
  isfightinprogress_ = false;
  clear_has_isfightinprogress();
}
inline bool ProtoDungeon::isfightinprogress() const {
  // @@protoc_insertion_point(field_get:WakfuProto.ProtoDungeon.isfightInProgress)
  return isfightinprogress_;
}
inline void ProtoDungeon::set_isfightinprogress(bool value) {
  set_has_isfightinprogress();
  isfightinprogress_ = value;
  // @@protoc_insertion_point(field_set:WakfuProto.ProtoDungeon.isfightInProgress)
}

// required bool isCompetitiveCancelled = 6;
inline bool ProtoDungeon::has_iscompetitivecancelled() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void ProtoDungeon::set_has_iscompetitivecancelled() {
  _has_bits_[0] |= 0x00000020u;
}
inline void ProtoDungeon::clear_has_iscompetitivecancelled() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void ProtoDungeon::clear_iscompetitivecancelled() {
  iscompetitivecancelled_ = false;
  clear_has_iscompetitivecancelled();
}
inline bool ProtoDungeon::iscompetitivecancelled() const {
  // @@protoc_insertion_point(field_get:WakfuProto.ProtoDungeon.isCompetitiveCancelled)
  return iscompetitivecancelled_;
}
inline void ProtoDungeon::set_iscompetitivecancelled(bool value) {
  set_has_iscompetitivecancelled();
  iscompetitivecancelled_ = value;
  // @@protoc_insertion_point(field_set:WakfuProto.ProtoDungeon.isCompetitiveCancelled)
}

// repeated int64 allowedIds = 7;
inline int ProtoDungeon::allowedids_size() const {
  return allowedids_.size();
}
inline void ProtoDungeon::clear_allowedids() {
  allowedids_.Clear();
}
inline ::google::protobuf::int64 ProtoDungeon::allowedids(int index) const {
  // @@protoc_insertion_point(field_get:WakfuProto.ProtoDungeon.allowedIds)
  return allowedids_.Get(index);
}
inline void ProtoDungeon::set_allowedids(int index, ::google::protobuf::int64 value) {
  allowedids_.Set(index, value);
  // @@protoc_insertion_point(field_set:WakfuProto.ProtoDungeon.allowedIds)
}
inline void ProtoDungeon::add_allowedids(::google::protobuf::int64 value) {
  allowedids_.Add(value);
  // @@protoc_insertion_point(field_add:WakfuProto.ProtoDungeon.allowedIds)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int64 >&
ProtoDungeon::allowedids() const {
  // @@protoc_insertion_point(field_list:WakfuProto.ProtoDungeon.allowedIds)
  return allowedids_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int64 >*
ProtoDungeon::mutable_allowedids() {
  // @@protoc_insertion_point(field_mutable_list:WakfuProto.ProtoDungeon.allowedIds)
  return &allowedids_;
}

// -------------------------------------------------------------------

// ProtoPartyInstanceInfo

// repeated .WakfuProto.ProtoPartyInstanceInfoEntry entry = 1;
inline int ProtoPartyInstanceInfo::entry_size() const {
  return entry_.size();
}
inline void ProtoPartyInstanceInfo::clear_entry() {
  entry_.Clear();
}
inline const ::WakfuProto::ProtoPartyInstanceInfoEntry& ProtoPartyInstanceInfo::entry(int index) const {
  // @@protoc_insertion_point(field_get:WakfuProto.ProtoPartyInstanceInfo.entry)
  return entry_.Get(index);
}
inline ::WakfuProto::ProtoPartyInstanceInfoEntry* ProtoPartyInstanceInfo::mutable_entry(int index) {
  // @@protoc_insertion_point(field_mutable:WakfuProto.ProtoPartyInstanceInfo.entry)
  return entry_.Mutable(index);
}
inline ::WakfuProto::ProtoPartyInstanceInfoEntry* ProtoPartyInstanceInfo::add_entry() {
  // @@protoc_insertion_point(field_add:WakfuProto.ProtoPartyInstanceInfo.entry)
  return entry_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::WakfuProto::ProtoPartyInstanceInfoEntry >*
ProtoPartyInstanceInfo::mutable_entry() {
  // @@protoc_insertion_point(field_mutable_list:WakfuProto.ProtoPartyInstanceInfo.entry)
  return &entry_;
}
inline const ::google::protobuf::RepeatedPtrField< ::WakfuProto::ProtoPartyInstanceInfoEntry >&
ProtoPartyInstanceInfo::entry() const {
  // @@protoc_insertion_point(field_list:WakfuProto.ProtoPartyInstanceInfo.entry)
  return entry_;
}

// -------------------------------------------------------------------

// ProtoPartyInstanceInfoEntry

// required int32 index = 1;
inline bool ProtoPartyInstanceInfoEntry::has_index() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ProtoPartyInstanceInfoEntry::set_has_index() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ProtoPartyInstanceInfoEntry::clear_has_index() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ProtoPartyInstanceInfoEntry::clear_index() {
  index_ = 0;
  clear_has_index();
}
inline ::google::protobuf::int32 ProtoPartyInstanceInfoEntry::index() const {
  // @@protoc_insertion_point(field_get:WakfuProto.ProtoPartyInstanceInfoEntry.index)
  return index_;
}
inline void ProtoPartyInstanceInfoEntry::set_index(::google::protobuf::int32 value) {
  set_has_index();
  index_ = value;
  // @@protoc_insertion_point(field_set:WakfuProto.ProtoPartyInstanceInfoEntry.index)
}

// required .WakfuProto.ProtoDungeon dungeonInfo = 2;
inline bool ProtoPartyInstanceInfoEntry::has_dungeoninfo() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ProtoPartyInstanceInfoEntry::set_has_dungeoninfo() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ProtoPartyInstanceInfoEntry::clear_has_dungeoninfo() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ProtoPartyInstanceInfoEntry::clear_dungeoninfo() {
  if (dungeoninfo_ != NULL) dungeoninfo_->::WakfuProto::ProtoDungeon::Clear();
  clear_has_dungeoninfo();
}
inline const ::WakfuProto::ProtoDungeon& ProtoPartyInstanceInfoEntry::dungeoninfo() const {
  // @@protoc_insertion_point(field_get:WakfuProto.ProtoPartyInstanceInfoEntry.dungeonInfo)
  return dungeoninfo_ != NULL ? *dungeoninfo_
                         : *::WakfuProto::ProtoDungeon::internal_default_instance();
}
inline ::WakfuProto::ProtoDungeon* ProtoPartyInstanceInfoEntry::mutable_dungeoninfo() {
  set_has_dungeoninfo();
  if (dungeoninfo_ == NULL) {
    dungeoninfo_ = new ::WakfuProto::ProtoDungeon;
  }
  // @@protoc_insertion_point(field_mutable:WakfuProto.ProtoPartyInstanceInfoEntry.dungeonInfo)
  return dungeoninfo_;
}
inline ::WakfuProto::ProtoDungeon* ProtoPartyInstanceInfoEntry::release_dungeoninfo() {
  // @@protoc_insertion_point(field_release:WakfuProto.ProtoPartyInstanceInfoEntry.dungeonInfo)
  clear_has_dungeoninfo();
  ::WakfuProto::ProtoDungeon* temp = dungeoninfo_;
  dungeoninfo_ = NULL;
  return temp;
}
inline void ProtoPartyInstanceInfoEntry::set_allocated_dungeoninfo(::WakfuProto::ProtoDungeon* dungeoninfo) {
  delete dungeoninfo_;
  dungeoninfo_ = dungeoninfo;
  if (dungeoninfo) {
    set_has_dungeoninfo();
  } else {
    clear_has_dungeoninfo();
  }
  // @@protoc_insertion_point(field_set_allocated:WakfuProto.ProtoPartyInstanceInfoEntry.dungeonInfo)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace WakfuProto

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_dungeon_2eproto__INCLUDED
