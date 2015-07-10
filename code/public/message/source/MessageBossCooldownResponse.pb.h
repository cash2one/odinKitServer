// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageBossCooldownResponse.proto

#ifndef PROTOBUF_MessageBossCooldownResponse_2eproto__INCLUDED
#define PROTOBUF_MessageBossCooldownResponse_2eproto__INCLUDED

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
void  protobuf_AddDesc_MessageBossCooldownResponse_2eproto();
void protobuf_AssignDesc_MessageBossCooldownResponse_2eproto();
void protobuf_ShutdownFile_MessageBossCooldownResponse_2eproto();

class BossCooldownResponse;

// ===================================================================

class BossCooldownResponse : public ::google::protobuf::Message {
 public:
  BossCooldownResponse();
  virtual ~BossCooldownResponse();

  BossCooldownResponse(const BossCooldownResponse& from);

  inline BossCooldownResponse& operator=(const BossCooldownResponse& from) {
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
  static const BossCooldownResponse& default_instance();

  void Swap(BossCooldownResponse* other);

  // implements Message ----------------------------------------------

  BossCooldownResponse* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const BossCooldownResponse& from);
  void MergeFrom(const BossCooldownResponse& from);
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

  // optional bool result = 1;
  inline bool has_result() const;
  inline void clear_result();
  static const int kResultFieldNumber = 1;
  inline bool result() const;
  inline void set_result(bool value);

  // @@protoc_insertion_point(class_scope:Message.BossCooldownResponse)
 private:
  inline void set_has_result();
  inline void clear_has_result();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  bool result_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_MessageBossCooldownResponse_2eproto();
  friend void protobuf_AssignDesc_MessageBossCooldownResponse_2eproto();
  friend void protobuf_ShutdownFile_MessageBossCooldownResponse_2eproto();

  void InitAsDefaultInstance();
  static BossCooldownResponse* default_instance_;
};
// ===================================================================


// ===================================================================

// BossCooldownResponse

// optional bool result = 1;
inline bool BossCooldownResponse::has_result() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void BossCooldownResponse::set_has_result() {
  _has_bits_[0] |= 0x00000001u;
}
inline void BossCooldownResponse::clear_has_result() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void BossCooldownResponse::clear_result() {
  result_ = false;
  clear_has_result();
}
inline bool BossCooldownResponse::result() const {
  return result_;
}
inline void BossCooldownResponse::set_result(bool value) {
  set_has_result();
  result_ = value;
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

#endif  // PROTOBUF_MessageBossCooldownResponse_2eproto__INCLUDED