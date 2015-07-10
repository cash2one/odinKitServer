// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageItemSystem.proto

#ifndef PROTOBUF_MessageItemSystem_2eproto__INCLUDED
#define PROTOBUF_MessageItemSystem_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace Message {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_MessageItemSystem_2eproto();
void protobuf_AssignDesc_MessageItemSystem_2eproto();
void protobuf_ShutdownFile_MessageItemSystem_2eproto();

class ItemSystem;

// ===================================================================

class ItemSystem : public ::google::protobuf::Message {
 public:
  ItemSystem();
  virtual ~ItemSystem();

  ItemSystem(const ItemSystem& from);

  inline ItemSystem& operator=(const ItemSystem& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ItemSystem& default_instance();

  void Swap(ItemSystem* other);

  // implements Message ----------------------------------------------

  ItemSystem* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ItemSystem& from);
  void MergeFrom(const ItemSystem& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 command = 1;
  inline bool has_command() const;
  inline void clear_command();
  static const int kCommandFieldNumber = 1;
  inline ::google::protobuf::int32 command() const;
  inline void set_command(::google::protobuf::int32 value);

  // optional int64 roleid = 2;
  inline bool has_roleid() const;
  inline void clear_roleid();
  static const int kRoleidFieldNumber = 2;
  inline ::google::protobuf::int64 roleid() const;
  inline void set_roleid(::google::protobuf::int64 value);

  // optional int64 equipid = 3;
  inline bool has_equipid() const;
  inline void clear_equipid();
  static const int kEquipidFieldNumber = 3;
  inline ::google::protobuf::int64 equipid() const;
  inline void set_equipid(::google::protobuf::int64 value);

  // optional int32 holeindex = 4;
  inline bool has_holeindex() const;
  inline void clear_holeindex();
  static const int kHoleindexFieldNumber = 4;
  inline ::google::protobuf::int32 holeindex() const;
  inline void set_holeindex(::google::protobuf::int32 value);

  // optional int32 equipposition = 5;
  inline bool has_equipposition() const;
  inline void clear_equipposition();
  static const int kEquippositionFieldNumber = 5;
  inline ::google::protobuf::int32 equipposition() const;
  inline void set_equipposition(::google::protobuf::int32 value);

  // optional int64 hunshiid = 6;
  inline bool has_hunshiid() const;
  inline void clear_hunshiid();
  static const int kHunshiidFieldNumber = 6;
  inline ::google::protobuf::int64 hunshiid() const;
  inline void set_hunshiid(::google::protobuf::int64 value);

  // optional int32 hunshitemplateid = 7;
  inline bool has_hunshitemplateid() const;
  inline void clear_hunshitemplateid();
  static const int kHunshitemplateidFieldNumber = 7;
  inline ::google::protobuf::int32 hunshitemplateid() const;
  inline void set_hunshitemplateid(::google::protobuf::int32 value);

  // optional int32 flag = 8;
  inline bool has_flag() const;
  inline void clear_flag();
  static const int kFlagFieldNumber = 8;
  inline ::google::protobuf::int32 flag() const;
  inline void set_flag(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:Message.ItemSystem)
 private:
  inline void set_has_command();
  inline void clear_has_command();
  inline void set_has_roleid();
  inline void clear_has_roleid();
  inline void set_has_equipid();
  inline void clear_has_equipid();
  inline void set_has_holeindex();
  inline void clear_has_holeindex();
  inline void set_has_equipposition();
  inline void clear_has_equipposition();
  inline void set_has_hunshiid();
  inline void clear_has_hunshiid();
  inline void set_has_hunshitemplateid();
  inline void clear_has_hunshitemplateid();
  inline void set_has_flag();
  inline void clear_has_flag();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int64 roleid_;
  ::google::protobuf::int32 command_;
  ::google::protobuf::int32 holeindex_;
  ::google::protobuf::int64 equipid_;
  ::google::protobuf::int64 hunshiid_;
  ::google::protobuf::int32 equipposition_;
  ::google::protobuf::int32 hunshitemplateid_;
  ::google::protobuf::int32 flag_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(8 + 31) / 32];

  friend void  protobuf_AddDesc_MessageItemSystem_2eproto();
  friend void protobuf_AssignDesc_MessageItemSystem_2eproto();
  friend void protobuf_ShutdownFile_MessageItemSystem_2eproto();

  void InitAsDefaultInstance();
  static ItemSystem* default_instance_;
};
// ===================================================================


// ===================================================================

// ItemSystem

// optional int32 command = 1;
inline bool ItemSystem::has_command() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ItemSystem::set_has_command() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ItemSystem::clear_has_command() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ItemSystem::clear_command() {
  command_ = 0;
  clear_has_command();
}
inline ::google::protobuf::int32 ItemSystem::command() const {
  return command_;
}
inline void ItemSystem::set_command(::google::protobuf::int32 value) {
  set_has_command();
  command_ = value;
}

// optional int64 roleid = 2;
inline bool ItemSystem::has_roleid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ItemSystem::set_has_roleid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ItemSystem::clear_has_roleid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ItemSystem::clear_roleid() {
  roleid_ = GOOGLE_LONGLONG(0);
  clear_has_roleid();
}
inline ::google::protobuf::int64 ItemSystem::roleid() const {
  return roleid_;
}
inline void ItemSystem::set_roleid(::google::protobuf::int64 value) {
  set_has_roleid();
  roleid_ = value;
}

// optional int64 equipid = 3;
inline bool ItemSystem::has_equipid() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ItemSystem::set_has_equipid() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ItemSystem::clear_has_equipid() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ItemSystem::clear_equipid() {
  equipid_ = GOOGLE_LONGLONG(0);
  clear_has_equipid();
}
inline ::google::protobuf::int64 ItemSystem::equipid() const {
  return equipid_;
}
inline void ItemSystem::set_equipid(::google::protobuf::int64 value) {
  set_has_equipid();
  equipid_ = value;
}

// optional int32 holeindex = 4;
inline bool ItemSystem::has_holeindex() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ItemSystem::set_has_holeindex() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ItemSystem::clear_has_holeindex() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ItemSystem::clear_holeindex() {
  holeindex_ = 0;
  clear_has_holeindex();
}
inline ::google::protobuf::int32 ItemSystem::holeindex() const {
  return holeindex_;
}
inline void ItemSystem::set_holeindex(::google::protobuf::int32 value) {
  set_has_holeindex();
  holeindex_ = value;
}

// optional int32 equipposition = 5;
inline bool ItemSystem::has_equipposition() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void ItemSystem::set_has_equipposition() {
  _has_bits_[0] |= 0x00000010u;
}
inline void ItemSystem::clear_has_equipposition() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void ItemSystem::clear_equipposition() {
  equipposition_ = 0;
  clear_has_equipposition();
}
inline ::google::protobuf::int32 ItemSystem::equipposition() const {
  return equipposition_;
}
inline void ItemSystem::set_equipposition(::google::protobuf::int32 value) {
  set_has_equipposition();
  equipposition_ = value;
}

// optional int64 hunshiid = 6;
inline bool ItemSystem::has_hunshiid() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void ItemSystem::set_has_hunshiid() {
  _has_bits_[0] |= 0x00000020u;
}
inline void ItemSystem::clear_has_hunshiid() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void ItemSystem::clear_hunshiid() {
  hunshiid_ = GOOGLE_LONGLONG(0);
  clear_has_hunshiid();
}
inline ::google::protobuf::int64 ItemSystem::hunshiid() const {
  return hunshiid_;
}
inline void ItemSystem::set_hunshiid(::google::protobuf::int64 value) {
  set_has_hunshiid();
  hunshiid_ = value;
}

// optional int32 hunshitemplateid = 7;
inline bool ItemSystem::has_hunshitemplateid() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void ItemSystem::set_has_hunshitemplateid() {
  _has_bits_[0] |= 0x00000040u;
}
inline void ItemSystem::clear_has_hunshitemplateid() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void ItemSystem::clear_hunshitemplateid() {
  hunshitemplateid_ = 0;
  clear_has_hunshitemplateid();
}
inline ::google::protobuf::int32 ItemSystem::hunshitemplateid() const {
  return hunshitemplateid_;
}
inline void ItemSystem::set_hunshitemplateid(::google::protobuf::int32 value) {
  set_has_hunshitemplateid();
  hunshitemplateid_ = value;
}

// optional int32 flag = 8;
inline bool ItemSystem::has_flag() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void ItemSystem::set_has_flag() {
  _has_bits_[0] |= 0x00000080u;
}
inline void ItemSystem::clear_has_flag() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void ItemSystem::clear_flag() {
  flag_ = 0;
  clear_has_flag();
}
inline ::google::protobuf::int32 ItemSystem::flag() const {
  return flag_;
}
inline void ItemSystem::set_flag(::google::protobuf::int32 value) {
  set_has_flag();
  flag_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Message

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_MessageItemSystem_2eproto__INCLUDED