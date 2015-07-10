// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageSignExchangeRespond.proto

#ifndef PROTOBUF_MessageSignExchangeRespond_2eproto__INCLUDED
#define PROTOBUF_MessageSignExchangeRespond_2eproto__INCLUDED

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
void  protobuf_AddDesc_MessageSignExchangeRespond_2eproto();
void protobuf_AssignDesc_MessageSignExchangeRespond_2eproto();
void protobuf_ShutdownFile_MessageSignExchangeRespond_2eproto();

class SignExchgRespond;
class SignExchgRespond_ItemExchg;

// ===================================================================

class SignExchgRespond_ItemExchg : public ::google::protobuf::Message {
 public:
  SignExchgRespond_ItemExchg();
  virtual ~SignExchgRespond_ItemExchg();

  SignExchgRespond_ItemExchg(const SignExchgRespond_ItemExchg& from);

  inline SignExchgRespond_ItemExchg& operator=(const SignExchgRespond_ItemExchg& from) {
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
  static const SignExchgRespond_ItemExchg& default_instance();

  void Swap(SignExchgRespond_ItemExchg* other);

  // implements Message ----------------------------------------------

  SignExchgRespond_ItemExchg* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SignExchgRespond_ItemExchg& from);
  void MergeFrom(const SignExchgRespond_ItemExchg& from);
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

  // optional int32 tempid = 1;
  inline bool has_tempid() const;
  inline void clear_tempid();
  static const int kTempidFieldNumber = 1;
  inline ::google::protobuf::int32 tempid() const;
  inline void set_tempid(::google::protobuf::int32 value);

  // optional int32 badage = 2;
  inline bool has_badage() const;
  inline void clear_badage();
  static const int kBadageFieldNumber = 2;
  inline ::google::protobuf::int32 badage() const;
  inline void set_badage(::google::protobuf::int32 value);

  // optional int32 knistate = 3;
  inline bool has_knistate() const;
  inline void clear_knistate();
  static const int kKnistateFieldNumber = 3;
  inline ::google::protobuf::int32 knistate() const;
  inline void set_knistate(::google::protobuf::int32 value);

  // optional bool bexchg = 4;
  inline bool has_bexchg() const;
  inline void clear_bexchg();
  static const int kBexchgFieldNumber = 4;
  inline bool bexchg() const;
  inline void set_bexchg(bool value);

  // @@protoc_insertion_point(class_scope:Message.SignExchgRespond.ItemExchg)
 private:
  inline void set_has_tempid();
  inline void clear_has_tempid();
  inline void set_has_badage();
  inline void clear_has_badage();
  inline void set_has_knistate();
  inline void clear_has_knistate();
  inline void set_has_bexchg();
  inline void clear_has_bexchg();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 tempid_;
  ::google::protobuf::int32 badage_;
  ::google::protobuf::int32 knistate_;
  bool bexchg_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_MessageSignExchangeRespond_2eproto();
  friend void protobuf_AssignDesc_MessageSignExchangeRespond_2eproto();
  friend void protobuf_ShutdownFile_MessageSignExchangeRespond_2eproto();

  void InitAsDefaultInstance();
  static SignExchgRespond_ItemExchg* default_instance_;
};
// -------------------------------------------------------------------

class SignExchgRespond : public ::google::protobuf::Message {
 public:
  SignExchgRespond();
  virtual ~SignExchgRespond();

  SignExchgRespond(const SignExchgRespond& from);

  inline SignExchgRespond& operator=(const SignExchgRespond& from) {
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
  static const SignExchgRespond& default_instance();

  void Swap(SignExchgRespond* other);

  // implements Message ----------------------------------------------

  SignExchgRespond* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SignExchgRespond& from);
  void MergeFrom(const SignExchgRespond& from);
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

  typedef SignExchgRespond_ItemExchg ItemExchg;

  // accessors -------------------------------------------------------

  // optional int32 freecount = 1;
  inline bool has_freecount() const;
  inline void clear_freecount();
  static const int kFreecountFieldNumber = 1;
  inline ::google::protobuf::int32 freecount() const;
  inline void set_freecount(::google::protobuf::int32 value);

  // optional int32 flushcount = 2;
  inline bool has_flushcount() const;
  inline void clear_flushcount();
  static const int kFlushcountFieldNumber = 2;
  inline ::google::protobuf::int32 flushcount() const;
  inline void set_flushcount(::google::protobuf::int32 value);

  // repeated .Message.SignExchgRespond.ItemExchg itemexchg = 3;
  inline int itemexchg_size() const;
  inline void clear_itemexchg();
  static const int kItemexchgFieldNumber = 3;
  inline const ::Message::SignExchgRespond_ItemExchg& itemexchg(int index) const;
  inline ::Message::SignExchgRespond_ItemExchg* mutable_itemexchg(int index);
  inline ::Message::SignExchgRespond_ItemExchg* add_itemexchg();
  inline const ::google::protobuf::RepeatedPtrField< ::Message::SignExchgRespond_ItemExchg >&
      itemexchg() const;
  inline ::google::protobuf::RepeatedPtrField< ::Message::SignExchgRespond_ItemExchg >*
      mutable_itemexchg();

  // optional int32 flushcost = 4;
  inline bool has_flushcost() const;
  inline void clear_flushcost();
  static const int kFlushcostFieldNumber = 4;
  inline ::google::protobuf::int32 flushcost() const;
  inline void set_flushcost(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:Message.SignExchgRespond)
 private:
  inline void set_has_freecount();
  inline void clear_has_freecount();
  inline void set_has_flushcount();
  inline void clear_has_flushcount();
  inline void set_has_flushcost();
  inline void clear_has_flushcost();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 freecount_;
  ::google::protobuf::int32 flushcount_;
  ::google::protobuf::RepeatedPtrField< ::Message::SignExchgRespond_ItemExchg > itemexchg_;
  ::google::protobuf::int32 flushcost_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_MessageSignExchangeRespond_2eproto();
  friend void protobuf_AssignDesc_MessageSignExchangeRespond_2eproto();
  friend void protobuf_ShutdownFile_MessageSignExchangeRespond_2eproto();

  void InitAsDefaultInstance();
  static SignExchgRespond* default_instance_;
};
// ===================================================================


// ===================================================================

// SignExchgRespond_ItemExchg

// optional int32 tempid = 1;
inline bool SignExchgRespond_ItemExchg::has_tempid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SignExchgRespond_ItemExchg::set_has_tempid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SignExchgRespond_ItemExchg::clear_has_tempid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SignExchgRespond_ItemExchg::clear_tempid() {
  tempid_ = 0;
  clear_has_tempid();
}
inline ::google::protobuf::int32 SignExchgRespond_ItemExchg::tempid() const {
  return tempid_;
}
inline void SignExchgRespond_ItemExchg::set_tempid(::google::protobuf::int32 value) {
  set_has_tempid();
  tempid_ = value;
}

// optional int32 badage = 2;
inline bool SignExchgRespond_ItemExchg::has_badage() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SignExchgRespond_ItemExchg::set_has_badage() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SignExchgRespond_ItemExchg::clear_has_badage() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SignExchgRespond_ItemExchg::clear_badage() {
  badage_ = 0;
  clear_has_badage();
}
inline ::google::protobuf::int32 SignExchgRespond_ItemExchg::badage() const {
  return badage_;
}
inline void SignExchgRespond_ItemExchg::set_badage(::google::protobuf::int32 value) {
  set_has_badage();
  badage_ = value;
}

// optional int32 knistate = 3;
inline bool SignExchgRespond_ItemExchg::has_knistate() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SignExchgRespond_ItemExchg::set_has_knistate() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SignExchgRespond_ItemExchg::clear_has_knistate() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SignExchgRespond_ItemExchg::clear_knistate() {
  knistate_ = 0;
  clear_has_knistate();
}
inline ::google::protobuf::int32 SignExchgRespond_ItemExchg::knistate() const {
  return knistate_;
}
inline void SignExchgRespond_ItemExchg::set_knistate(::google::protobuf::int32 value) {
  set_has_knistate();
  knistate_ = value;
}

// optional bool bexchg = 4;
inline bool SignExchgRespond_ItemExchg::has_bexchg() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void SignExchgRespond_ItemExchg::set_has_bexchg() {
  _has_bits_[0] |= 0x00000008u;
}
inline void SignExchgRespond_ItemExchg::clear_has_bexchg() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void SignExchgRespond_ItemExchg::clear_bexchg() {
  bexchg_ = false;
  clear_has_bexchg();
}
inline bool SignExchgRespond_ItemExchg::bexchg() const {
  return bexchg_;
}
inline void SignExchgRespond_ItemExchg::set_bexchg(bool value) {
  set_has_bexchg();
  bexchg_ = value;
}

// -------------------------------------------------------------------

// SignExchgRespond

// optional int32 freecount = 1;
inline bool SignExchgRespond::has_freecount() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SignExchgRespond::set_has_freecount() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SignExchgRespond::clear_has_freecount() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SignExchgRespond::clear_freecount() {
  freecount_ = 0;
  clear_has_freecount();
}
inline ::google::protobuf::int32 SignExchgRespond::freecount() const {
  return freecount_;
}
inline void SignExchgRespond::set_freecount(::google::protobuf::int32 value) {
  set_has_freecount();
  freecount_ = value;
}

// optional int32 flushcount = 2;
inline bool SignExchgRespond::has_flushcount() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SignExchgRespond::set_has_flushcount() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SignExchgRespond::clear_has_flushcount() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SignExchgRespond::clear_flushcount() {
  flushcount_ = 0;
  clear_has_flushcount();
}
inline ::google::protobuf::int32 SignExchgRespond::flushcount() const {
  return flushcount_;
}
inline void SignExchgRespond::set_flushcount(::google::protobuf::int32 value) {
  set_has_flushcount();
  flushcount_ = value;
}

// repeated .Message.SignExchgRespond.ItemExchg itemexchg = 3;
inline int SignExchgRespond::itemexchg_size() const {
  return itemexchg_.size();
}
inline void SignExchgRespond::clear_itemexchg() {
  itemexchg_.Clear();
}
inline const ::Message::SignExchgRespond_ItemExchg& SignExchgRespond::itemexchg(int index) const {
  return itemexchg_.Get(index);
}
inline ::Message::SignExchgRespond_ItemExchg* SignExchgRespond::mutable_itemexchg(int index) {
  return itemexchg_.Mutable(index);
}
inline ::Message::SignExchgRespond_ItemExchg* SignExchgRespond::add_itemexchg() {
  return itemexchg_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::Message::SignExchgRespond_ItemExchg >&
SignExchgRespond::itemexchg() const {
  return itemexchg_;
}
inline ::google::protobuf::RepeatedPtrField< ::Message::SignExchgRespond_ItemExchg >*
SignExchgRespond::mutable_itemexchg() {
  return &itemexchg_;
}

// optional int32 flushcost = 4;
inline bool SignExchgRespond::has_flushcost() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void SignExchgRespond::set_has_flushcost() {
  _has_bits_[0] |= 0x00000008u;
}
inline void SignExchgRespond::clear_has_flushcost() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void SignExchgRespond::clear_flushcost() {
  flushcost_ = 0;
  clear_has_flushcost();
}
inline ::google::protobuf::int32 SignExchgRespond::flushcost() const {
  return flushcost_;
}
inline void SignExchgRespond::set_flushcost(::google::protobuf::int32 value) {
  set_has_flushcost();
  flushcost_ = value;
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

#endif  // PROTOBUF_MessageSignExchangeRespond_2eproto__INCLUDED