// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageFormatDebutRequest.proto

#ifndef PROTOBUF_MessageFormatDebutRequest_2eproto__INCLUDED
#define PROTOBUF_MessageFormatDebutRequest_2eproto__INCLUDED

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
void  protobuf_AddDesc_MessageFormatDebutRequest_2eproto();
void protobuf_AssignDesc_MessageFormatDebutRequest_2eproto();
void protobuf_ShutdownFile_MessageFormatDebutRequest_2eproto();

class FormatDebutRequest;
class FormatDebutRequest_Debut;

// ===================================================================

class FormatDebutRequest_Debut : public ::google::protobuf::Message {
 public:
  FormatDebutRequest_Debut();
  virtual ~FormatDebutRequest_Debut();

  FormatDebutRequest_Debut(const FormatDebutRequest_Debut& from);

  inline FormatDebutRequest_Debut& operator=(const FormatDebutRequest_Debut& from) {
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
  static const FormatDebutRequest_Debut& default_instance();

  void Swap(FormatDebutRequest_Debut* other);

  // implements Message ----------------------------------------------

  FormatDebutRequest_Debut* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const FormatDebutRequest_Debut& from);
  void MergeFrom(const FormatDebutRequest_Debut& from);
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

  // optional int64 hero = 1;
  inline bool has_hero() const;
  inline void clear_hero();
  static const int kHeroFieldNumber = 1;
  inline ::google::protobuf::int64 hero() const;
  inline void set_hero(::google::protobuf::int64 value);

  // optional int32 posi = 2;
  inline bool has_posi() const;
  inline void clear_posi();
  static const int kPosiFieldNumber = 2;
  inline ::google::protobuf::int32 posi() const;
  inline void set_posi(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:Message.FormatDebutRequest.Debut)
 private:
  inline void set_has_hero();
  inline void clear_has_hero();
  inline void set_has_posi();
  inline void clear_has_posi();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int64 hero_;
  ::google::protobuf::int32 posi_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_MessageFormatDebutRequest_2eproto();
  friend void protobuf_AssignDesc_MessageFormatDebutRequest_2eproto();
  friend void protobuf_ShutdownFile_MessageFormatDebutRequest_2eproto();

  void InitAsDefaultInstance();
  static FormatDebutRequest_Debut* default_instance_;
};
// -------------------------------------------------------------------

class FormatDebutRequest : public ::google::protobuf::Message {
 public:
  FormatDebutRequest();
  virtual ~FormatDebutRequest();

  FormatDebutRequest(const FormatDebutRequest& from);

  inline FormatDebutRequest& operator=(const FormatDebutRequest& from) {
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
  static const FormatDebutRequest& default_instance();

  void Swap(FormatDebutRequest* other);

  // implements Message ----------------------------------------------

  FormatDebutRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const FormatDebutRequest& from);
  void MergeFrom(const FormatDebutRequest& from);
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

  typedef FormatDebutRequest_Debut Debut;

  // accessors -------------------------------------------------------

  // optional int32 format = 1;
  inline bool has_format() const;
  inline void clear_format();
  static const int kFormatFieldNumber = 1;
  inline ::google::protobuf::int32 format() const;
  inline void set_format(::google::protobuf::int32 value);

  // repeated .Message.FormatDebutRequest.Debut debut = 2;
  inline int debut_size() const;
  inline void clear_debut();
  static const int kDebutFieldNumber = 2;
  inline const ::Message::FormatDebutRequest_Debut& debut(int index) const;
  inline ::Message::FormatDebutRequest_Debut* mutable_debut(int index);
  inline ::Message::FormatDebutRequest_Debut* add_debut();
  inline const ::google::protobuf::RepeatedPtrField< ::Message::FormatDebutRequest_Debut >&
      debut() const;
  inline ::google::protobuf::RepeatedPtrField< ::Message::FormatDebutRequest_Debut >*
      mutable_debut();

  // optional int32 helperpos = 3;
  inline bool has_helperpos() const;
  inline void clear_helperpos();
  static const int kHelperposFieldNumber = 3;
  inline ::google::protobuf::int32 helperpos() const;
  inline void set_helperpos(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:Message.FormatDebutRequest)
 private:
  inline void set_has_format();
  inline void clear_has_format();
  inline void set_has_helperpos();
  inline void clear_has_helperpos();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::Message::FormatDebutRequest_Debut > debut_;
  ::google::protobuf::int32 format_;
  ::google::protobuf::int32 helperpos_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_MessageFormatDebutRequest_2eproto();
  friend void protobuf_AssignDesc_MessageFormatDebutRequest_2eproto();
  friend void protobuf_ShutdownFile_MessageFormatDebutRequest_2eproto();

  void InitAsDefaultInstance();
  static FormatDebutRequest* default_instance_;
};
// ===================================================================


// ===================================================================

// FormatDebutRequest_Debut

// optional int64 hero = 1;
inline bool FormatDebutRequest_Debut::has_hero() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void FormatDebutRequest_Debut::set_has_hero() {
  _has_bits_[0] |= 0x00000001u;
}
inline void FormatDebutRequest_Debut::clear_has_hero() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void FormatDebutRequest_Debut::clear_hero() {
  hero_ = GOOGLE_LONGLONG(0);
  clear_has_hero();
}
inline ::google::protobuf::int64 FormatDebutRequest_Debut::hero() const {
  return hero_;
}
inline void FormatDebutRequest_Debut::set_hero(::google::protobuf::int64 value) {
  set_has_hero();
  hero_ = value;
}

// optional int32 posi = 2;
inline bool FormatDebutRequest_Debut::has_posi() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void FormatDebutRequest_Debut::set_has_posi() {
  _has_bits_[0] |= 0x00000002u;
}
inline void FormatDebutRequest_Debut::clear_has_posi() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void FormatDebutRequest_Debut::clear_posi() {
  posi_ = 0;
  clear_has_posi();
}
inline ::google::protobuf::int32 FormatDebutRequest_Debut::posi() const {
  return posi_;
}
inline void FormatDebutRequest_Debut::set_posi(::google::protobuf::int32 value) {
  set_has_posi();
  posi_ = value;
}

// -------------------------------------------------------------------

// FormatDebutRequest

// optional int32 format = 1;
inline bool FormatDebutRequest::has_format() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void FormatDebutRequest::set_has_format() {
  _has_bits_[0] |= 0x00000001u;
}
inline void FormatDebutRequest::clear_has_format() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void FormatDebutRequest::clear_format() {
  format_ = 0;
  clear_has_format();
}
inline ::google::protobuf::int32 FormatDebutRequest::format() const {
  return format_;
}
inline void FormatDebutRequest::set_format(::google::protobuf::int32 value) {
  set_has_format();
  format_ = value;
}

// repeated .Message.FormatDebutRequest.Debut debut = 2;
inline int FormatDebutRequest::debut_size() const {
  return debut_.size();
}
inline void FormatDebutRequest::clear_debut() {
  debut_.Clear();
}
inline const ::Message::FormatDebutRequest_Debut& FormatDebutRequest::debut(int index) const {
  return debut_.Get(index);
}
inline ::Message::FormatDebutRequest_Debut* FormatDebutRequest::mutable_debut(int index) {
  return debut_.Mutable(index);
}
inline ::Message::FormatDebutRequest_Debut* FormatDebutRequest::add_debut() {
  return debut_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::Message::FormatDebutRequest_Debut >&
FormatDebutRequest::debut() const {
  return debut_;
}
inline ::google::protobuf::RepeatedPtrField< ::Message::FormatDebutRequest_Debut >*
FormatDebutRequest::mutable_debut() {
  return &debut_;
}

// optional int32 helperpos = 3;
inline bool FormatDebutRequest::has_helperpos() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void FormatDebutRequest::set_has_helperpos() {
  _has_bits_[0] |= 0x00000004u;
}
inline void FormatDebutRequest::clear_has_helperpos() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void FormatDebutRequest::clear_helperpos() {
  helperpos_ = 0;
  clear_has_helperpos();
}
inline ::google::protobuf::int32 FormatDebutRequest::helperpos() const {
  return helperpos_;
}
inline void FormatDebutRequest::set_helperpos(::google::protobuf::int32 value) {
  set_has_helperpos();
  helperpos_ = value;
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

#endif  // PROTOBUF_MessageFormatDebutRequest_2eproto__INCLUDED