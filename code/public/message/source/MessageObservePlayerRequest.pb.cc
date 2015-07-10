// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageObservePlayerRequest.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MessageObservePlayerRequest.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace Message {

namespace {

const ::google::protobuf::Descriptor* ObservePlayerRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ObservePlayerRequest_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_MessageObservePlayerRequest_2eproto() {
  protobuf_AddDesc_MessageObservePlayerRequest_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "MessageObservePlayerRequest.proto");
  GOOGLE_CHECK(file != NULL);
  ObservePlayerRequest_descriptor_ = file->message_type(0);
  static const int ObservePlayerRequest_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ObservePlayerRequest, playerid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ObservePlayerRequest, playername_),
  };
  ObservePlayerRequest_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ObservePlayerRequest_descriptor_,
      ObservePlayerRequest::default_instance_,
      ObservePlayerRequest_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ObservePlayerRequest, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ObservePlayerRequest, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ObservePlayerRequest));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_MessageObservePlayerRequest_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ObservePlayerRequest_descriptor_, &ObservePlayerRequest::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_MessageObservePlayerRequest_2eproto() {
  delete ObservePlayerRequest::default_instance_;
  delete ObservePlayerRequest_reflection_;
}

void protobuf_AddDesc_MessageObservePlayerRequest_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n!MessageObservePlayerRequest.proto\022\007Mes"
    "sage\"<\n\024ObservePlayerRequest\022\020\n\010playerid"
    "\030\001 \001(\003\022\022\n\nplayername\030\002 \001(\t", 106);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MessageObservePlayerRequest.proto", &protobuf_RegisterTypes);
  ObservePlayerRequest::default_instance_ = new ObservePlayerRequest();
  ObservePlayerRequest::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MessageObservePlayerRequest_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MessageObservePlayerRequest_2eproto {
  StaticDescriptorInitializer_MessageObservePlayerRequest_2eproto() {
    protobuf_AddDesc_MessageObservePlayerRequest_2eproto();
  }
} static_descriptor_initializer_MessageObservePlayerRequest_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int ObservePlayerRequest::kPlayeridFieldNumber;
const int ObservePlayerRequest::kPlayernameFieldNumber;
#endif  // !_MSC_VER

ObservePlayerRequest::ObservePlayerRequest()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void ObservePlayerRequest::InitAsDefaultInstance() {
}

ObservePlayerRequest::ObservePlayerRequest(const ObservePlayerRequest& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void ObservePlayerRequest::SharedCtor() {
  _cached_size_ = 0;
  playerid_ = GOOGLE_LONGLONG(0);
  playername_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ObservePlayerRequest::~ObservePlayerRequest() {
  SharedDtor();
}

void ObservePlayerRequest::SharedDtor() {
  if (playername_ != &::google::protobuf::internal::kEmptyString) {
    delete playername_;
  }
  if (this != default_instance_) {
  }
}

void ObservePlayerRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ObservePlayerRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ObservePlayerRequest_descriptor_;
}

const ObservePlayerRequest& ObservePlayerRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MessageObservePlayerRequest_2eproto();
  return *default_instance_;
}

ObservePlayerRequest* ObservePlayerRequest::default_instance_ = NULL;

ObservePlayerRequest* ObservePlayerRequest::New() const {
  return new ObservePlayerRequest;
}

void ObservePlayerRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    playerid_ = GOOGLE_LONGLONG(0);
    if (has_playername()) {
      if (playername_ != &::google::protobuf::internal::kEmptyString) {
        playername_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ObservePlayerRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 playerid = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &playerid_)));
          set_has_playerid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_playername;
        break;
      }

      // optional string playername = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_playername:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_playername()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->playername().data(), this->playername().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void ObservePlayerRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int64 playerid = 1;
  if (has_playerid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->playerid(), output);
  }

  // optional string playername = 2;
  if (has_playername()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->playername().data(), this->playername().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->playername(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* ObservePlayerRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int64 playerid = 1;
  if (has_playerid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->playerid(), target);
  }

  // optional string playername = 2;
  if (has_playername()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->playername().data(), this->playername().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->playername(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int ObservePlayerRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int64 playerid = 1;
    if (has_playerid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->playerid());
    }

    // optional string playername = 2;
    if (has_playername()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->playername());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ObservePlayerRequest::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ObservePlayerRequest* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ObservePlayerRequest*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ObservePlayerRequest::MergeFrom(const ObservePlayerRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_playerid()) {
      set_playerid(from.playerid());
    }
    if (from.has_playername()) {
      set_playername(from.playername());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ObservePlayerRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ObservePlayerRequest::CopyFrom(const ObservePlayerRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ObservePlayerRequest::IsInitialized() const {

  return true;
}

void ObservePlayerRequest::Swap(ObservePlayerRequest* other) {
  if (other != this) {
    std::swap(playerid_, other->playerid_);
    std::swap(playername_, other->playername_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ObservePlayerRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ObservePlayerRequest_descriptor_;
  metadata.reflection = ObservePlayerRequest_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Message

// @@protoc_insertion_point(global_scope)