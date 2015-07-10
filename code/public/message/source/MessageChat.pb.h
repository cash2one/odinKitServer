// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageChat.proto

#ifndef PROTOBUF_MessageChat_2eproto__INCLUDED
#define PROTOBUF_MessageChat_2eproto__INCLUDED

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
void  protobuf_AddDesc_MessageChat_2eproto();
void protobuf_AssignDesc_MessageChat_2eproto();
void protobuf_ShutdownFile_MessageChat_2eproto();

class ChatRequest;
class ChatResponse;
class ChatNotify;

// ===================================================================

class ChatRequest : public ::google::protobuf::Message {
 public:
  ChatRequest();
  virtual ~ChatRequest();

  ChatRequest(const ChatRequest& from);

  inline ChatRequest& operator=(const ChatRequest& from) {
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
  static const ChatRequest& default_instance();

  void Swap(ChatRequest* other);

  // implements Message ----------------------------------------------

  ChatRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ChatRequest& from);
  void MergeFrom(const ChatRequest& from);
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

  // optional int64 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int64 id() const;
  inline void set_id(::google::protobuf::int64 value);

  // optional string message = 2;
  inline bool has_message() const;
  inline void clear_message();
  static const int kMessageFieldNumber = 2;
  inline const ::std::string& message() const;
  inline void set_message(const ::std::string& value);
  inline void set_message(const char* value);
  inline void set_message(const char* value, size_t size);
  inline ::std::string* mutable_message();
  inline ::std::string* release_message();
  inline void set_allocated_message(::std::string* message);

  // optional int64 target = 3;
  inline bool has_target() const;
  inline void clear_target();
  static const int kTargetFieldNumber = 3;
  inline ::google::protobuf::int64 target() const;
  inline void set_target(::google::protobuf::int64 value);

  // optional string targetName = 4;
  inline bool has_targetname() const;
  inline void clear_targetname();
  static const int kTargetNameFieldNumber = 4;
  inline const ::std::string& targetname() const;
  inline void set_targetname(const ::std::string& value);
  inline void set_targetname(const char* value);
  inline void set_targetname(const char* value, size_t size);
  inline ::std::string* mutable_targetname();
  inline ::std::string* release_targetname();
  inline void set_allocated_targetname(::std::string* targetname);

  // @@protoc_insertion_point(class_scope:Message.ChatRequest)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_message();
  inline void clear_has_message();
  inline void set_has_target();
  inline void clear_has_target();
  inline void set_has_targetname();
  inline void clear_has_targetname();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int64 id_;
  ::std::string* message_;
  ::google::protobuf::int64 target_;
  ::std::string* targetname_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_MessageChat_2eproto();
  friend void protobuf_AssignDesc_MessageChat_2eproto();
  friend void protobuf_ShutdownFile_MessageChat_2eproto();

  void InitAsDefaultInstance();
  static ChatRequest* default_instance_;
};
// -------------------------------------------------------------------

class ChatResponse : public ::google::protobuf::Message {
 public:
  ChatResponse();
  virtual ~ChatResponse();

  ChatResponse(const ChatResponse& from);

  inline ChatResponse& operator=(const ChatResponse& from) {
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
  static const ChatResponse& default_instance();

  void Swap(ChatResponse* other);

  // implements Message ----------------------------------------------

  ChatResponse* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ChatResponse& from);
  void MergeFrom(const ChatResponse& from);
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

  // optional int32 result = 1;
  inline bool has_result() const;
  inline void clear_result();
  static const int kResultFieldNumber = 1;
  inline ::google::protobuf::int32 result() const;
  inline void set_result(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:Message.ChatResponse)
 private:
  inline void set_has_result();
  inline void clear_has_result();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 result_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_MessageChat_2eproto();
  friend void protobuf_AssignDesc_MessageChat_2eproto();
  friend void protobuf_ShutdownFile_MessageChat_2eproto();

  void InitAsDefaultInstance();
  static ChatResponse* default_instance_;
};
// -------------------------------------------------------------------

class ChatNotify : public ::google::protobuf::Message {
 public:
  ChatNotify();
  virtual ~ChatNotify();

  ChatNotify(const ChatNotify& from);

  inline ChatNotify& operator=(const ChatNotify& from) {
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
  static const ChatNotify& default_instance();

  void Swap(ChatNotify* other);

  // implements Message ----------------------------------------------

  ChatNotify* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ChatNotify& from);
  void MergeFrom(const ChatNotify& from);
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

  // optional int64 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int64 id() const;
  inline void set_id(::google::protobuf::int64 value);

  // optional string message = 2;
  inline bool has_message() const;
  inline void clear_message();
  static const int kMessageFieldNumber = 2;
  inline const ::std::string& message() const;
  inline void set_message(const ::std::string& value);
  inline void set_message(const char* value);
  inline void set_message(const char* value, size_t size);
  inline ::std::string* mutable_message();
  inline ::std::string* release_message();
  inline void set_allocated_message(::std::string* message);

  // optional string name = 3;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 3;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // optional int32 vip_level = 4;
  inline bool has_vip_level() const;
  inline void clear_vip_level();
  static const int kVipLevelFieldNumber = 4;
  inline ::google::protobuf::int32 vip_level() const;
  inline void set_vip_level(::google::protobuf::int32 value);

  // optional string camp = 5;
  inline bool has_camp() const;
  inline void clear_camp();
  static const int kCampFieldNumber = 5;
  inline const ::std::string& camp() const;
  inline void set_camp(const ::std::string& value);
  inline void set_camp(const char* value);
  inline void set_camp(const char* value, size_t size);
  inline ::std::string* mutable_camp();
  inline ::std::string* release_camp();
  inline void set_allocated_camp(::std::string* camp);

  // optional string knights = 6;
  inline bool has_knights() const;
  inline void clear_knights();
  static const int kKnightsFieldNumber = 6;
  inline const ::std::string& knights() const;
  inline void set_knights(const ::std::string& value);
  inline void set_knights(const char* value);
  inline void set_knights(const char* value, size_t size);
  inline ::std::string* mutable_knights();
  inline ::std::string* release_knights();
  inline void set_allocated_knights(::std::string* knights);

  // optional int64 targetID = 7;
  inline bool has_targetid() const;
  inline void clear_targetid();
  static const int kTargetIDFieldNumber = 7;
  inline ::google::protobuf::int64 targetid() const;
  inline void set_targetid(::google::protobuf::int64 value);

  // optional string targetName = 8;
  inline bool has_targetname() const;
  inline void clear_targetname();
  static const int kTargetNameFieldNumber = 8;
  inline const ::std::string& targetname() const;
  inline void set_targetname(const ::std::string& value);
  inline void set_targetname(const char* value);
  inline void set_targetname(const char* value, size_t size);
  inline ::std::string* mutable_targetname();
  inline ::std::string* release_targetname();
  inline void set_allocated_targetname(::std::string* targetname);

  // @@protoc_insertion_point(class_scope:Message.ChatNotify)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_message();
  inline void clear_has_message();
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_vip_level();
  inline void clear_has_vip_level();
  inline void set_has_camp();
  inline void clear_has_camp();
  inline void set_has_knights();
  inline void clear_has_knights();
  inline void set_has_targetid();
  inline void clear_has_targetid();
  inline void set_has_targetname();
  inline void clear_has_targetname();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int64 id_;
  ::std::string* message_;
  ::std::string* name_;
  ::std::string* camp_;
  ::std::string* knights_;
  ::google::protobuf::int64 targetid_;
  ::std::string* targetname_;
  ::google::protobuf::int32 vip_level_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(8 + 31) / 32];

  friend void  protobuf_AddDesc_MessageChat_2eproto();
  friend void protobuf_AssignDesc_MessageChat_2eproto();
  friend void protobuf_ShutdownFile_MessageChat_2eproto();

  void InitAsDefaultInstance();
  static ChatNotify* default_instance_;
};
// ===================================================================


// ===================================================================

// ChatRequest

// optional int64 id = 1;
inline bool ChatRequest::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ChatRequest::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ChatRequest::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ChatRequest::clear_id() {
  id_ = GOOGLE_LONGLONG(0);
  clear_has_id();
}
inline ::google::protobuf::int64 ChatRequest::id() const {
  return id_;
}
inline void ChatRequest::set_id(::google::protobuf::int64 value) {
  set_has_id();
  id_ = value;
}

// optional string message = 2;
inline bool ChatRequest::has_message() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ChatRequest::set_has_message() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ChatRequest::clear_has_message() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ChatRequest::clear_message() {
  if (message_ != &::google::protobuf::internal::kEmptyString) {
    message_->clear();
  }
  clear_has_message();
}
inline const ::std::string& ChatRequest::message() const {
  return *message_;
}
inline void ChatRequest::set_message(const ::std::string& value) {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  message_->assign(value);
}
inline void ChatRequest::set_message(const char* value) {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  message_->assign(value);
}
inline void ChatRequest::set_message(const char* value, size_t size) {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  message_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ChatRequest::mutable_message() {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  return message_;
}
inline ::std::string* ChatRequest::release_message() {
  clear_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = message_;
    message_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void ChatRequest::set_allocated_message(::std::string* message) {
  if (message_ != &::google::protobuf::internal::kEmptyString) {
    delete message_;
  }
  if (message) {
    set_has_message();
    message_ = message;
  } else {
    clear_has_message();
    message_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int64 target = 3;
inline bool ChatRequest::has_target() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ChatRequest::set_has_target() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ChatRequest::clear_has_target() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ChatRequest::clear_target() {
  target_ = GOOGLE_LONGLONG(0);
  clear_has_target();
}
inline ::google::protobuf::int64 ChatRequest::target() const {
  return target_;
}
inline void ChatRequest::set_target(::google::protobuf::int64 value) {
  set_has_target();
  target_ = value;
}

// optional string targetName = 4;
inline bool ChatRequest::has_targetname() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ChatRequest::set_has_targetname() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ChatRequest::clear_has_targetname() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ChatRequest::clear_targetname() {
  if (targetname_ != &::google::protobuf::internal::kEmptyString) {
    targetname_->clear();
  }
  clear_has_targetname();
}
inline const ::std::string& ChatRequest::targetname() const {
  return *targetname_;
}
inline void ChatRequest::set_targetname(const ::std::string& value) {
  set_has_targetname();
  if (targetname_ == &::google::protobuf::internal::kEmptyString) {
    targetname_ = new ::std::string;
  }
  targetname_->assign(value);
}
inline void ChatRequest::set_targetname(const char* value) {
  set_has_targetname();
  if (targetname_ == &::google::protobuf::internal::kEmptyString) {
    targetname_ = new ::std::string;
  }
  targetname_->assign(value);
}
inline void ChatRequest::set_targetname(const char* value, size_t size) {
  set_has_targetname();
  if (targetname_ == &::google::protobuf::internal::kEmptyString) {
    targetname_ = new ::std::string;
  }
  targetname_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ChatRequest::mutable_targetname() {
  set_has_targetname();
  if (targetname_ == &::google::protobuf::internal::kEmptyString) {
    targetname_ = new ::std::string;
  }
  return targetname_;
}
inline ::std::string* ChatRequest::release_targetname() {
  clear_has_targetname();
  if (targetname_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = targetname_;
    targetname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void ChatRequest::set_allocated_targetname(::std::string* targetname) {
  if (targetname_ != &::google::protobuf::internal::kEmptyString) {
    delete targetname_;
  }
  if (targetname) {
    set_has_targetname();
    targetname_ = targetname;
  } else {
    clear_has_targetname();
    targetname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// -------------------------------------------------------------------

// ChatResponse

// optional int32 result = 1;
inline bool ChatResponse::has_result() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ChatResponse::set_has_result() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ChatResponse::clear_has_result() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ChatResponse::clear_result() {
  result_ = 0;
  clear_has_result();
}
inline ::google::protobuf::int32 ChatResponse::result() const {
  return result_;
}
inline void ChatResponse::set_result(::google::protobuf::int32 value) {
  set_has_result();
  result_ = value;
}

// -------------------------------------------------------------------

// ChatNotify

// optional int64 id = 1;
inline bool ChatNotify::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ChatNotify::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ChatNotify::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ChatNotify::clear_id() {
  id_ = GOOGLE_LONGLONG(0);
  clear_has_id();
}
inline ::google::protobuf::int64 ChatNotify::id() const {
  return id_;
}
inline void ChatNotify::set_id(::google::protobuf::int64 value) {
  set_has_id();
  id_ = value;
}

// optional string message = 2;
inline bool ChatNotify::has_message() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ChatNotify::set_has_message() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ChatNotify::clear_has_message() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ChatNotify::clear_message() {
  if (message_ != &::google::protobuf::internal::kEmptyString) {
    message_->clear();
  }
  clear_has_message();
}
inline const ::std::string& ChatNotify::message() const {
  return *message_;
}
inline void ChatNotify::set_message(const ::std::string& value) {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  message_->assign(value);
}
inline void ChatNotify::set_message(const char* value) {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  message_->assign(value);
}
inline void ChatNotify::set_message(const char* value, size_t size) {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  message_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ChatNotify::mutable_message() {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  return message_;
}
inline ::std::string* ChatNotify::release_message() {
  clear_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = message_;
    message_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void ChatNotify::set_allocated_message(::std::string* message) {
  if (message_ != &::google::protobuf::internal::kEmptyString) {
    delete message_;
  }
  if (message) {
    set_has_message();
    message_ = message;
  } else {
    clear_has_message();
    message_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string name = 3;
inline bool ChatNotify::has_name() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ChatNotify::set_has_name() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ChatNotify::clear_has_name() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ChatNotify::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& ChatNotify::name() const {
  return *name_;
}
inline void ChatNotify::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void ChatNotify::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void ChatNotify::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ChatNotify::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* ChatNotify::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void ChatNotify::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int32 vip_level = 4;
inline bool ChatNotify::has_vip_level() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ChatNotify::set_has_vip_level() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ChatNotify::clear_has_vip_level() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ChatNotify::clear_vip_level() {
  vip_level_ = 0;
  clear_has_vip_level();
}
inline ::google::protobuf::int32 ChatNotify::vip_level() const {
  return vip_level_;
}
inline void ChatNotify::set_vip_level(::google::protobuf::int32 value) {
  set_has_vip_level();
  vip_level_ = value;
}

// optional string camp = 5;
inline bool ChatNotify::has_camp() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void ChatNotify::set_has_camp() {
  _has_bits_[0] |= 0x00000010u;
}
inline void ChatNotify::clear_has_camp() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void ChatNotify::clear_camp() {
  if (camp_ != &::google::protobuf::internal::kEmptyString) {
    camp_->clear();
  }
  clear_has_camp();
}
inline const ::std::string& ChatNotify::camp() const {
  return *camp_;
}
inline void ChatNotify::set_camp(const ::std::string& value) {
  set_has_camp();
  if (camp_ == &::google::protobuf::internal::kEmptyString) {
    camp_ = new ::std::string;
  }
  camp_->assign(value);
}
inline void ChatNotify::set_camp(const char* value) {
  set_has_camp();
  if (camp_ == &::google::protobuf::internal::kEmptyString) {
    camp_ = new ::std::string;
  }
  camp_->assign(value);
}
inline void ChatNotify::set_camp(const char* value, size_t size) {
  set_has_camp();
  if (camp_ == &::google::protobuf::internal::kEmptyString) {
    camp_ = new ::std::string;
  }
  camp_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ChatNotify::mutable_camp() {
  set_has_camp();
  if (camp_ == &::google::protobuf::internal::kEmptyString) {
    camp_ = new ::std::string;
  }
  return camp_;
}
inline ::std::string* ChatNotify::release_camp() {
  clear_has_camp();
  if (camp_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = camp_;
    camp_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void ChatNotify::set_allocated_camp(::std::string* camp) {
  if (camp_ != &::google::protobuf::internal::kEmptyString) {
    delete camp_;
  }
  if (camp) {
    set_has_camp();
    camp_ = camp;
  } else {
    clear_has_camp();
    camp_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string knights = 6;
inline bool ChatNotify::has_knights() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void ChatNotify::set_has_knights() {
  _has_bits_[0] |= 0x00000020u;
}
inline void ChatNotify::clear_has_knights() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void ChatNotify::clear_knights() {
  if (knights_ != &::google::protobuf::internal::kEmptyString) {
    knights_->clear();
  }
  clear_has_knights();
}
inline const ::std::string& ChatNotify::knights() const {
  return *knights_;
}
inline void ChatNotify::set_knights(const ::std::string& value) {
  set_has_knights();
  if (knights_ == &::google::protobuf::internal::kEmptyString) {
    knights_ = new ::std::string;
  }
  knights_->assign(value);
}
inline void ChatNotify::set_knights(const char* value) {
  set_has_knights();
  if (knights_ == &::google::protobuf::internal::kEmptyString) {
    knights_ = new ::std::string;
  }
  knights_->assign(value);
}
inline void ChatNotify::set_knights(const char* value, size_t size) {
  set_has_knights();
  if (knights_ == &::google::protobuf::internal::kEmptyString) {
    knights_ = new ::std::string;
  }
  knights_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ChatNotify::mutable_knights() {
  set_has_knights();
  if (knights_ == &::google::protobuf::internal::kEmptyString) {
    knights_ = new ::std::string;
  }
  return knights_;
}
inline ::std::string* ChatNotify::release_knights() {
  clear_has_knights();
  if (knights_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = knights_;
    knights_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void ChatNotify::set_allocated_knights(::std::string* knights) {
  if (knights_ != &::google::protobuf::internal::kEmptyString) {
    delete knights_;
  }
  if (knights) {
    set_has_knights();
    knights_ = knights;
  } else {
    clear_has_knights();
    knights_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int64 targetID = 7;
inline bool ChatNotify::has_targetid() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void ChatNotify::set_has_targetid() {
  _has_bits_[0] |= 0x00000040u;
}
inline void ChatNotify::clear_has_targetid() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void ChatNotify::clear_targetid() {
  targetid_ = GOOGLE_LONGLONG(0);
  clear_has_targetid();
}
inline ::google::protobuf::int64 ChatNotify::targetid() const {
  return targetid_;
}
inline void ChatNotify::set_targetid(::google::protobuf::int64 value) {
  set_has_targetid();
  targetid_ = value;
}

// optional string targetName = 8;
inline bool ChatNotify::has_targetname() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void ChatNotify::set_has_targetname() {
  _has_bits_[0] |= 0x00000080u;
}
inline void ChatNotify::clear_has_targetname() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void ChatNotify::clear_targetname() {
  if (targetname_ != &::google::protobuf::internal::kEmptyString) {
    targetname_->clear();
  }
  clear_has_targetname();
}
inline const ::std::string& ChatNotify::targetname() const {
  return *targetname_;
}
inline void ChatNotify::set_targetname(const ::std::string& value) {
  set_has_targetname();
  if (targetname_ == &::google::protobuf::internal::kEmptyString) {
    targetname_ = new ::std::string;
  }
  targetname_->assign(value);
}
inline void ChatNotify::set_targetname(const char* value) {
  set_has_targetname();
  if (targetname_ == &::google::protobuf::internal::kEmptyString) {
    targetname_ = new ::std::string;
  }
  targetname_->assign(value);
}
inline void ChatNotify::set_targetname(const char* value, size_t size) {
  set_has_targetname();
  if (targetname_ == &::google::protobuf::internal::kEmptyString) {
    targetname_ = new ::std::string;
  }
  targetname_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ChatNotify::mutable_targetname() {
  set_has_targetname();
  if (targetname_ == &::google::protobuf::internal::kEmptyString) {
    targetname_ = new ::std::string;
  }
  return targetname_;
}
inline ::std::string* ChatNotify::release_targetname() {
  clear_has_targetname();
  if (targetname_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = targetname_;
    targetname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void ChatNotify::set_allocated_targetname(::std::string* targetname) {
  if (targetname_ != &::google::protobuf::internal::kEmptyString) {
    delete targetname_;
  }
  if (targetname) {
    set_has_targetname();
    targetname_ = targetname;
  } else {
    clear_has_targetname();
    targetname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
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

#endif  // PROTOBUF_MessageChat_2eproto__INCLUDED