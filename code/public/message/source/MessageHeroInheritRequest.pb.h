// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageHeroInheritRequest.proto

#ifndef PROTOBUF_MessageHeroInheritRequest_2eproto__INCLUDED
#define PROTOBUF_MessageHeroInheritRequest_2eproto__INCLUDED

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
void  protobuf_AddDesc_MessageHeroInheritRequest_2eproto();
void protobuf_AssignDesc_MessageHeroInheritRequest_2eproto();
void protobuf_ShutdownFile_MessageHeroInheritRequest_2eproto();

class HeroInheritRequest;

// ===================================================================

class HeroInheritRequest : public ::google::protobuf::Message {
 public:
  HeroInheritRequest();
  virtual ~HeroInheritRequest();

  HeroInheritRequest(const HeroInheritRequest& from);

  inline HeroInheritRequest& operator=(const HeroInheritRequest& from) {
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
  static const HeroInheritRequest& default_instance();

  void Swap(HeroInheritRequest* other);

  // implements Message ----------------------------------------------

  HeroInheritRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const HeroInheritRequest& from);
  void MergeFrom(const HeroInheritRequest& from);
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

  // optional int64 srchero = 1;
  inline bool has_srchero() const;
  inline void clear_srchero();
  static const int kSrcheroFieldNumber = 1;
  inline ::google::protobuf::int64 srchero() const;
  inline void set_srchero(::google::protobuf::int64 value);

  // optional int64 deshero = 2;
  inline bool has_deshero() const;
  inline void clear_deshero();
  static const int kDesheroFieldNumber = 2;
  inline ::google::protobuf::int64 deshero() const;
  inline void set_deshero(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:Message.HeroInheritRequest)
 private:
  inline void set_has_srchero();
  inline void clear_has_srchero();
  inline void set_has_deshero();
  inline void clear_has_deshero();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int64 srchero_;
  ::google::protobuf::int64 deshero_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_MessageHeroInheritRequest_2eproto();
  friend void protobuf_AssignDesc_MessageHeroInheritRequest_2eproto();
  friend void protobuf_ShutdownFile_MessageHeroInheritRequest_2eproto();

  void InitAsDefaultInstance();
  static HeroInheritRequest* default_instance_;
};
// ===================================================================


// ===================================================================

// HeroInheritRequest

// optional int64 srchero = 1;
inline bool HeroInheritRequest::has_srchero() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void HeroInheritRequest::set_has_srchero() {
  _has_bits_[0] |= 0x00000001u;
}
inline void HeroInheritRequest::clear_has_srchero() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void HeroInheritRequest::clear_srchero() {
  srchero_ = GOOGLE_LONGLONG(0);
  clear_has_srchero();
}
inline ::google::protobuf::int64 HeroInheritRequest::srchero() const {
  return srchero_;
}
inline void HeroInheritRequest::set_srchero(::google::protobuf::int64 value) {
  set_has_srchero();
  srchero_ = value;
}

// optional int64 deshero = 2;
inline bool HeroInheritRequest::has_deshero() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void HeroInheritRequest::set_has_deshero() {
  _has_bits_[0] |= 0x00000002u;
}
inline void HeroInheritRequest::clear_has_deshero() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void HeroInheritRequest::clear_deshero() {
  deshero_ = GOOGLE_LONGLONG(0);
  clear_has_deshero();
}
inline ::google::protobuf::int64 HeroInheritRequest::deshero() const {
  return deshero_;
}
inline void HeroInheritRequest::set_deshero(::google::protobuf::int64 value) {
  set_has_deshero();
  deshero_ = value;
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

#endif  // PROTOBUF_MessageHeroInheritRequest_2eproto__INCLUDED