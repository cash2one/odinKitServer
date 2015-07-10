// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageUnloadAllSoul.proto

#ifndef PROTOBUF_MessageUnloadAllSoul_2eproto__INCLUDED
#define PROTOBUF_MessageUnloadAllSoul_2eproto__INCLUDED

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
void  protobuf_AddDesc_MessageUnloadAllSoul_2eproto();
void protobuf_AssignDesc_MessageUnloadAllSoul_2eproto();
void protobuf_ShutdownFile_MessageUnloadAllSoul_2eproto();

class MessageUnloadAllSoul;

// ===================================================================

class MessageUnloadAllSoul : public ::google::protobuf::Message {
 public:
  MessageUnloadAllSoul();
  virtual ~MessageUnloadAllSoul();

  MessageUnloadAllSoul(const MessageUnloadAllSoul& from);

  inline MessageUnloadAllSoul& operator=(const MessageUnloadAllSoul& from) {
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
  static const MessageUnloadAllSoul& default_instance();

  void Swap(MessageUnloadAllSoul* other);

  // implements Message ----------------------------------------------

  MessageUnloadAllSoul* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MessageUnloadAllSoul& from);
  void MergeFrom(const MessageUnloadAllSoul& from);
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

  // optional int64 roleId = 1;
  inline bool has_roleid() const;
  inline void clear_roleid();
  static const int kRoleIdFieldNumber = 1;
  inline ::google::protobuf::int64 roleid() const;
  inline void set_roleid(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:Message.MessageUnloadAllSoul)
 private:
  inline void set_has_roleid();
  inline void clear_has_roleid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int64 roleid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_MessageUnloadAllSoul_2eproto();
  friend void protobuf_AssignDesc_MessageUnloadAllSoul_2eproto();
  friend void protobuf_ShutdownFile_MessageUnloadAllSoul_2eproto();

  void InitAsDefaultInstance();
  static MessageUnloadAllSoul* default_instance_;
};
// ===================================================================


// ===================================================================

// MessageUnloadAllSoul

// optional int64 roleId = 1;
inline bool MessageUnloadAllSoul::has_roleid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MessageUnloadAllSoul::set_has_roleid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MessageUnloadAllSoul::clear_has_roleid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MessageUnloadAllSoul::clear_roleid() {
  roleid_ = GOOGLE_LONGLONG(0);
  clear_has_roleid();
}
inline ::google::protobuf::int64 MessageUnloadAllSoul::roleid() const {
  return roleid_;
}
inline void MessageUnloadAllSoul::set_roleid(::google::protobuf::int64 value) {
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

#endif  // PROTOBUF_MessageUnloadAllSoul_2eproto__INCLUDED