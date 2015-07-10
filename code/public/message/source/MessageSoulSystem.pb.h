// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageSoulSystem.proto

#ifndef PROTOBUF_MessageSoulSystem_2eproto__INCLUDED
#define PROTOBUF_MessageSoulSystem_2eproto__INCLUDED

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
void  protobuf_AddDesc_MessageSoulSystem_2eproto();
void protobuf_AssignDesc_MessageSoulSystem_2eproto();
void protobuf_ShutdownFile_MessageSoulSystem_2eproto();

class SoulSystem;

// ===================================================================

class SoulSystem : public ::google::protobuf::Message {
 public:
  SoulSystem();
  virtual ~SoulSystem();

  SoulSystem(const SoulSystem& from);

  inline SoulSystem& operator=(const SoulSystem& from) {
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
  static const SoulSystem& default_instance();

  void Swap(SoulSystem* other);

  // implements Message ----------------------------------------------

  SoulSystem* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SoulSystem& from);
  void MergeFrom(const SoulSystem& from);
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

  // optional int64 hunjingidone = 2;
  inline bool has_hunjingidone() const;
  inline void clear_hunjingidone();
  static const int kHunjingidoneFieldNumber = 2;
  inline ::google::protobuf::int64 hunjingidone() const;
  inline void set_hunjingidone(::google::protobuf::int64 value);

  // optional int64 hunjingidtwo = 3;
  inline bool has_hunjingidtwo() const;
  inline void clear_hunjingidtwo();
  static const int kHunjingidtwoFieldNumber = 3;
  inline ::google::protobuf::int64 hunjingidtwo() const;
  inline void set_hunjingidtwo(::google::protobuf::int64 value);

  // optional int64 newitemid = 4;
  inline bool has_newitemid() const;
  inline void clear_newitemid();
  static const int kNewitemidFieldNumber = 4;
  inline ::google::protobuf::int64 newitemid() const;
  inline void set_newitemid(::google::protobuf::int64 value);

  // optional int32 gradelevel = 5;
  inline bool has_gradelevel() const;
  inline void clear_gradelevel();
  static const int kGradelevelFieldNumber = 5;
  inline ::google::protobuf::int32 gradelevel() const;
  inline void set_gradelevel(::google::protobuf::int32 value);

  // optional int32 flag = 6;
  inline bool has_flag() const;
  inline void clear_flag();
  static const int kFlagFieldNumber = 6;
  inline ::google::protobuf::int32 flag() const;
  inline void set_flag(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:Message.SoulSystem)
 private:
  inline void set_has_command();
  inline void clear_has_command();
  inline void set_has_hunjingidone();
  inline void clear_has_hunjingidone();
  inline void set_has_hunjingidtwo();
  inline void clear_has_hunjingidtwo();
  inline void set_has_newitemid();
  inline void clear_has_newitemid();
  inline void set_has_gradelevel();
  inline void clear_has_gradelevel();
  inline void set_has_flag();
  inline void clear_has_flag();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int64 hunjingidone_;
  ::google::protobuf::int64 hunjingidtwo_;
  ::google::protobuf::int32 command_;
  ::google::protobuf::int32 gradelevel_;
  ::google::protobuf::int64 newitemid_;
  ::google::protobuf::int32 flag_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(6 + 31) / 32];

  friend void  protobuf_AddDesc_MessageSoulSystem_2eproto();
  friend void protobuf_AssignDesc_MessageSoulSystem_2eproto();
  friend void protobuf_ShutdownFile_MessageSoulSystem_2eproto();

  void InitAsDefaultInstance();
  static SoulSystem* default_instance_;
};
// ===================================================================


// ===================================================================

// SoulSystem

// optional int32 command = 1;
inline bool SoulSystem::has_command() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SoulSystem::set_has_command() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SoulSystem::clear_has_command() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SoulSystem::clear_command() {
  command_ = 0;
  clear_has_command();
}
inline ::google::protobuf::int32 SoulSystem::command() const {
  return command_;
}
inline void SoulSystem::set_command(::google::protobuf::int32 value) {
  set_has_command();
  command_ = value;
}

// optional int64 hunjingidone = 2;
inline bool SoulSystem::has_hunjingidone() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SoulSystem::set_has_hunjingidone() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SoulSystem::clear_has_hunjingidone() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SoulSystem::clear_hunjingidone() {
  hunjingidone_ = GOOGLE_LONGLONG(0);
  clear_has_hunjingidone();
}
inline ::google::protobuf::int64 SoulSystem::hunjingidone() const {
  return hunjingidone_;
}
inline void SoulSystem::set_hunjingidone(::google::protobuf::int64 value) {
  set_has_hunjingidone();
  hunjingidone_ = value;
}

// optional int64 hunjingidtwo = 3;
inline bool SoulSystem::has_hunjingidtwo() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SoulSystem::set_has_hunjingidtwo() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SoulSystem::clear_has_hunjingidtwo() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SoulSystem::clear_hunjingidtwo() {
  hunjingidtwo_ = GOOGLE_LONGLONG(0);
  clear_has_hunjingidtwo();
}
inline ::google::protobuf::int64 SoulSystem::hunjingidtwo() const {
  return hunjingidtwo_;
}
inline void SoulSystem::set_hunjingidtwo(::google::protobuf::int64 value) {
  set_has_hunjingidtwo();
  hunjingidtwo_ = value;
}

// optional int64 newitemid = 4;
inline bool SoulSystem::has_newitemid() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void SoulSystem::set_has_newitemid() {
  _has_bits_[0] |= 0x00000008u;
}
inline void SoulSystem::clear_has_newitemid() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void SoulSystem::clear_newitemid() {
  newitemid_ = GOOGLE_LONGLONG(0);
  clear_has_newitemid();
}
inline ::google::protobuf::int64 SoulSystem::newitemid() const {
  return newitemid_;
}
inline void SoulSystem::set_newitemid(::google::protobuf::int64 value) {
  set_has_newitemid();
  newitemid_ = value;
}

// optional int32 gradelevel = 5;
inline bool SoulSystem::has_gradelevel() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void SoulSystem::set_has_gradelevel() {
  _has_bits_[0] |= 0x00000010u;
}
inline void SoulSystem::clear_has_gradelevel() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void SoulSystem::clear_gradelevel() {
  gradelevel_ = 0;
  clear_has_gradelevel();
}
inline ::google::protobuf::int32 SoulSystem::gradelevel() const {
  return gradelevel_;
}
inline void SoulSystem::set_gradelevel(::google::protobuf::int32 value) {
  set_has_gradelevel();
  gradelevel_ = value;
}

// optional int32 flag = 6;
inline bool SoulSystem::has_flag() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void SoulSystem::set_has_flag() {
  _has_bits_[0] |= 0x00000020u;
}
inline void SoulSystem::clear_has_flag() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void SoulSystem::clear_flag() {
  flag_ = 0;
  clear_has_flag();
}
inline ::google::protobuf::int32 SoulSystem::flag() const {
  return flag_;
}
inline void SoulSystem::set_flag(::google::protobuf::int32 value) {
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

#endif  // PROTOBUF_MessageSoulSystem_2eproto__INCLUDED