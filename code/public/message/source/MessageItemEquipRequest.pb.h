// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageItemEquipRequest.proto

#ifndef PROTOBUF_MessageItemEquipRequest_2eproto__INCLUDED
#define PROTOBUF_MessageItemEquipRequest_2eproto__INCLUDED

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
void  protobuf_AddDesc_MessageItemEquipRequest_2eproto();
void protobuf_AssignDesc_MessageItemEquipRequest_2eproto();
void protobuf_ShutdownFile_MessageItemEquipRequest_2eproto();

class ItemEquipRequest;

// ===================================================================

class ItemEquipRequest : public ::google::protobuf::Message {
 public:
  ItemEquipRequest();
  virtual ~ItemEquipRequest();

  ItemEquipRequest(const ItemEquipRequest& from);

  inline ItemEquipRequest& operator=(const ItemEquipRequest& from) {
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
  static const ItemEquipRequest& default_instance();

  void Swap(ItemEquipRequest* other);

  // implements Message ----------------------------------------------

  ItemEquipRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ItemEquipRequest& from);
  void MergeFrom(const ItemEquipRequest& from);
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

  // optional int64 itemid = 1;
  inline bool has_itemid() const;
  inline void clear_itemid();
  static const int kItemidFieldNumber = 1;
  inline ::google::protobuf::int64 itemid() const;
  inline void set_itemid(::google::protobuf::int64 value);

  // optional int64 roleid = 2;
  inline bool has_roleid() const;
  inline void clear_roleid();
  static const int kRoleidFieldNumber = 2;
  inline ::google::protobuf::int64 roleid() const;
  inline void set_roleid(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:Message.ItemEquipRequest)
 private:
  inline void set_has_itemid();
  inline void clear_has_itemid();
  inline void set_has_roleid();
  inline void clear_has_roleid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int64 itemid_;
  ::google::protobuf::int64 roleid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_MessageItemEquipRequest_2eproto();
  friend void protobuf_AssignDesc_MessageItemEquipRequest_2eproto();
  friend void protobuf_ShutdownFile_MessageItemEquipRequest_2eproto();

  void InitAsDefaultInstance();
  static ItemEquipRequest* default_instance_;
};
// ===================================================================


// ===================================================================

// ItemEquipRequest

// optional int64 itemid = 1;
inline bool ItemEquipRequest::has_itemid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ItemEquipRequest::set_has_itemid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ItemEquipRequest::clear_has_itemid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ItemEquipRequest::clear_itemid() {
  itemid_ = GOOGLE_LONGLONG(0);
  clear_has_itemid();
}
inline ::google::protobuf::int64 ItemEquipRequest::itemid() const {
  return itemid_;
}
inline void ItemEquipRequest::set_itemid(::google::protobuf::int64 value) {
  set_has_itemid();
  itemid_ = value;
}

// optional int64 roleid = 2;
inline bool ItemEquipRequest::has_roleid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ItemEquipRequest::set_has_roleid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ItemEquipRequest::clear_has_roleid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ItemEquipRequest::clear_roleid() {
  roleid_ = GOOGLE_LONGLONG(0);
  clear_has_roleid();
}
inline ::google::protobuf::int64 ItemEquipRequest::roleid() const {
  return roleid_;
}
inline void ItemEquipRequest::set_roleid(::google::protobuf::int64 value) {
  set_has_roleid();
  roleid_ = value;
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

#endif  // PROTOBUF_MessageItemEquipRequest_2eproto__INCLUDED