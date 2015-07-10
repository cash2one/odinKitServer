// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageNotifySignInUnit.proto

#ifndef PROTOBUF_MessageNotifySignInUnit_2eproto__INCLUDED
#define PROTOBUF_MessageNotifySignInUnit_2eproto__INCLUDED

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
void  protobuf_AddDesc_MessageNotifySignInUnit_2eproto();
void protobuf_AssignDesc_MessageNotifySignInUnit_2eproto();
void protobuf_ShutdownFile_MessageNotifySignInUnit_2eproto();

class SyncSignInAttr;

// ===================================================================

class SyncSignInAttr : public ::google::protobuf::Message {
 public:
  SyncSignInAttr();
  virtual ~SyncSignInAttr();

  SyncSignInAttr(const SyncSignInAttr& from);

  inline SyncSignInAttr& operator=(const SyncSignInAttr& from) {
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
  static const SyncSignInAttr& default_instance();

  void Swap(SyncSignInAttr* other);

  // implements Message ----------------------------------------------

  SyncSignInAttr* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SyncSignInAttr& from);
  void MergeFrom(const SyncSignInAttr& from);
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

  // repeated bool bsign = 1;
  inline int bsign_size() const;
  inline void clear_bsign();
  static const int kBsignFieldNumber = 1;
  inline bool bsign(int index) const;
  inline void set_bsign(int index, bool value);
  inline void add_bsign(bool value);
  inline const ::google::protobuf::RepeatedField< bool >&
      bsign() const;
  inline ::google::protobuf::RepeatedField< bool >*
      mutable_bsign();

  // optional int32 badagecnt = 2;
  inline bool has_badagecnt() const;
  inline void clear_badagecnt();
  static const int kBadagecntFieldNumber = 2;
  inline ::google::protobuf::int32 badagecnt() const;
  inline void set_badagecnt(::google::protobuf::int32 value);

  // optional int32 getdays = 3;
  inline bool has_getdays() const;
  inline void clear_getdays();
  static const int kGetdaysFieldNumber = 3;
  inline ::google::protobuf::int32 getdays() const;
  inline void set_getdays(::google::protobuf::int32 value);

  // optional int32 continuedays = 4;
  inline bool has_continuedays() const;
  inline void clear_continuedays();
  static const int kContinuedaysFieldNumber = 4;
  inline ::google::protobuf::int32 continuedays() const;
  inline void set_continuedays(::google::protobuf::int32 value);

  // optional int32 totaldays = 5;
  inline bool has_totaldays() const;
  inline void clear_totaldays();
  static const int kTotaldaysFieldNumber = 5;
  inline ::google::protobuf::int32 totaldays() const;
  inline void set_totaldays(::google::protobuf::int32 value);

  // optional uint64 lastsign = 6;
  inline bool has_lastsign() const;
  inline void clear_lastsign();
  static const int kLastsignFieldNumber = 6;
  inline ::google::protobuf::uint64 lastsign() const;
  inline void set_lastsign(::google::protobuf::uint64 value);

  // optional bool bshare = 7;
  inline bool has_bshare() const;
  inline void clear_bshare();
  static const int kBshareFieldNumber = 7;
  inline bool bshare() const;
  inline void set_bshare(bool value);

  // optional int32 startind = 8;
  inline bool has_startind() const;
  inline void clear_startind();
  static const int kStartindFieldNumber = 8;
  inline ::google::protobuf::int32 startind() const;
  inline void set_startind(::google::protobuf::int32 value);

  // optional int32 flushtimes = 9;
  inline bool has_flushtimes() const;
  inline void clear_flushtimes();
  static const int kFlushtimesFieldNumber = 9;
  inline ::google::protobuf::int32 flushtimes() const;
  inline void set_flushtimes(::google::protobuf::int32 value);

  // repeated bool bexchg = 10;
  inline int bexchg_size() const;
  inline void clear_bexchg();
  static const int kBexchgFieldNumber = 10;
  inline bool bexchg(int index) const;
  inline void set_bexchg(int index, bool value);
  inline void add_bexchg(bool value);
  inline const ::google::protobuf::RepeatedField< bool >&
      bexchg() const;
  inline ::google::protobuf::RepeatedField< bool >*
      mutable_bexchg();

  // optional bool bcost = 11;
  inline bool has_bcost() const;
  inline void clear_bcost();
  static const int kBcostFieldNumber = 11;
  inline bool bcost() const;
  inline void set_bcost(bool value);

  // @@protoc_insertion_point(class_scope:Message.SyncSignInAttr)
 private:
  inline void set_has_badagecnt();
  inline void clear_has_badagecnt();
  inline void set_has_getdays();
  inline void clear_has_getdays();
  inline void set_has_continuedays();
  inline void clear_has_continuedays();
  inline void set_has_totaldays();
  inline void clear_has_totaldays();
  inline void set_has_lastsign();
  inline void clear_has_lastsign();
  inline void set_has_bshare();
  inline void clear_has_bshare();
  inline void set_has_startind();
  inline void clear_has_startind();
  inline void set_has_flushtimes();
  inline void clear_has_flushtimes();
  inline void set_has_bcost();
  inline void clear_has_bcost();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedField< bool > bsign_;
  ::google::protobuf::int32 badagecnt_;
  ::google::protobuf::int32 getdays_;
  ::google::protobuf::int32 continuedays_;
  ::google::protobuf::int32 totaldays_;
  ::google::protobuf::uint64 lastsign_;
  ::google::protobuf::int32 startind_;
  ::google::protobuf::int32 flushtimes_;
  ::google::protobuf::RepeatedField< bool > bexchg_;
  bool bshare_;
  bool bcost_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(11 + 31) / 32];

  friend void  protobuf_AddDesc_MessageNotifySignInUnit_2eproto();
  friend void protobuf_AssignDesc_MessageNotifySignInUnit_2eproto();
  friend void protobuf_ShutdownFile_MessageNotifySignInUnit_2eproto();

  void InitAsDefaultInstance();
  static SyncSignInAttr* default_instance_;
};
// ===================================================================


// ===================================================================

// SyncSignInAttr

// repeated bool bsign = 1;
inline int SyncSignInAttr::bsign_size() const {
  return bsign_.size();
}
inline void SyncSignInAttr::clear_bsign() {
  bsign_.Clear();
}
inline bool SyncSignInAttr::bsign(int index) const {
  return bsign_.Get(index);
}
inline void SyncSignInAttr::set_bsign(int index, bool value) {
  bsign_.Set(index, value);
}
inline void SyncSignInAttr::add_bsign(bool value) {
  bsign_.Add(value);
}
inline const ::google::protobuf::RepeatedField< bool >&
SyncSignInAttr::bsign() const {
  return bsign_;
}
inline ::google::protobuf::RepeatedField< bool >*
SyncSignInAttr::mutable_bsign() {
  return &bsign_;
}

// optional int32 badagecnt = 2;
inline bool SyncSignInAttr::has_badagecnt() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SyncSignInAttr::set_has_badagecnt() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SyncSignInAttr::clear_has_badagecnt() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SyncSignInAttr::clear_badagecnt() {
  badagecnt_ = 0;
  clear_has_badagecnt();
}
inline ::google::protobuf::int32 SyncSignInAttr::badagecnt() const {
  return badagecnt_;
}
inline void SyncSignInAttr::set_badagecnt(::google::protobuf::int32 value) {
  set_has_badagecnt();
  badagecnt_ = value;
}

// optional int32 getdays = 3;
inline bool SyncSignInAttr::has_getdays() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SyncSignInAttr::set_has_getdays() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SyncSignInAttr::clear_has_getdays() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SyncSignInAttr::clear_getdays() {
  getdays_ = 0;
  clear_has_getdays();
}
inline ::google::protobuf::int32 SyncSignInAttr::getdays() const {
  return getdays_;
}
inline void SyncSignInAttr::set_getdays(::google::protobuf::int32 value) {
  set_has_getdays();
  getdays_ = value;
}

// optional int32 continuedays = 4;
inline bool SyncSignInAttr::has_continuedays() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void SyncSignInAttr::set_has_continuedays() {
  _has_bits_[0] |= 0x00000008u;
}
inline void SyncSignInAttr::clear_has_continuedays() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void SyncSignInAttr::clear_continuedays() {
  continuedays_ = 0;
  clear_has_continuedays();
}
inline ::google::protobuf::int32 SyncSignInAttr::continuedays() const {
  return continuedays_;
}
inline void SyncSignInAttr::set_continuedays(::google::protobuf::int32 value) {
  set_has_continuedays();
  continuedays_ = value;
}

// optional int32 totaldays = 5;
inline bool SyncSignInAttr::has_totaldays() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void SyncSignInAttr::set_has_totaldays() {
  _has_bits_[0] |= 0x00000010u;
}
inline void SyncSignInAttr::clear_has_totaldays() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void SyncSignInAttr::clear_totaldays() {
  totaldays_ = 0;
  clear_has_totaldays();
}
inline ::google::protobuf::int32 SyncSignInAttr::totaldays() const {
  return totaldays_;
}
inline void SyncSignInAttr::set_totaldays(::google::protobuf::int32 value) {
  set_has_totaldays();
  totaldays_ = value;
}

// optional uint64 lastsign = 6;
inline bool SyncSignInAttr::has_lastsign() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void SyncSignInAttr::set_has_lastsign() {
  _has_bits_[0] |= 0x00000020u;
}
inline void SyncSignInAttr::clear_has_lastsign() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void SyncSignInAttr::clear_lastsign() {
  lastsign_ = GOOGLE_ULONGLONG(0);
  clear_has_lastsign();
}
inline ::google::protobuf::uint64 SyncSignInAttr::lastsign() const {
  return lastsign_;
}
inline void SyncSignInAttr::set_lastsign(::google::protobuf::uint64 value) {
  set_has_lastsign();
  lastsign_ = value;
}

// optional bool bshare = 7;
inline bool SyncSignInAttr::has_bshare() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void SyncSignInAttr::set_has_bshare() {
  _has_bits_[0] |= 0x00000040u;
}
inline void SyncSignInAttr::clear_has_bshare() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void SyncSignInAttr::clear_bshare() {
  bshare_ = false;
  clear_has_bshare();
}
inline bool SyncSignInAttr::bshare() const {
  return bshare_;
}
inline void SyncSignInAttr::set_bshare(bool value) {
  set_has_bshare();
  bshare_ = value;
}

// optional int32 startind = 8;
inline bool SyncSignInAttr::has_startind() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void SyncSignInAttr::set_has_startind() {
  _has_bits_[0] |= 0x00000080u;
}
inline void SyncSignInAttr::clear_has_startind() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void SyncSignInAttr::clear_startind() {
  startind_ = 0;
  clear_has_startind();
}
inline ::google::protobuf::int32 SyncSignInAttr::startind() const {
  return startind_;
}
inline void SyncSignInAttr::set_startind(::google::protobuf::int32 value) {
  set_has_startind();
  startind_ = value;
}

// optional int32 flushtimes = 9;
inline bool SyncSignInAttr::has_flushtimes() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void SyncSignInAttr::set_has_flushtimes() {
  _has_bits_[0] |= 0x00000100u;
}
inline void SyncSignInAttr::clear_has_flushtimes() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void SyncSignInAttr::clear_flushtimes() {
  flushtimes_ = 0;
  clear_has_flushtimes();
}
inline ::google::protobuf::int32 SyncSignInAttr::flushtimes() const {
  return flushtimes_;
}
inline void SyncSignInAttr::set_flushtimes(::google::protobuf::int32 value) {
  set_has_flushtimes();
  flushtimes_ = value;
}

// repeated bool bexchg = 10;
inline int SyncSignInAttr::bexchg_size() const {
  return bexchg_.size();
}
inline void SyncSignInAttr::clear_bexchg() {
  bexchg_.Clear();
}
inline bool SyncSignInAttr::bexchg(int index) const {
  return bexchg_.Get(index);
}
inline void SyncSignInAttr::set_bexchg(int index, bool value) {
  bexchg_.Set(index, value);
}
inline void SyncSignInAttr::add_bexchg(bool value) {
  bexchg_.Add(value);
}
inline const ::google::protobuf::RepeatedField< bool >&
SyncSignInAttr::bexchg() const {
  return bexchg_;
}
inline ::google::protobuf::RepeatedField< bool >*
SyncSignInAttr::mutable_bexchg() {
  return &bexchg_;
}

// optional bool bcost = 11;
inline bool SyncSignInAttr::has_bcost() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void SyncSignInAttr::set_has_bcost() {
  _has_bits_[0] |= 0x00000400u;
}
inline void SyncSignInAttr::clear_has_bcost() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void SyncSignInAttr::clear_bcost() {
  bcost_ = false;
  clear_has_bcost();
}
inline bool SyncSignInAttr::bcost() const {
  return bcost_;
}
inline void SyncSignInAttr::set_bcost(bool value) {
  set_has_bcost();
  bcost_ = value;
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

#endif  // PROTOBUF_MessageNotifySignInUnit_2eproto__INCLUDED