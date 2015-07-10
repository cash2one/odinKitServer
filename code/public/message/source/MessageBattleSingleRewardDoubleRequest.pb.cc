// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageBattleSingleRewardDoubleRequest.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MessageBattleSingleRewardDoubleRequest.pb.h"

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

const ::google::protobuf::Descriptor* BattleSingleRewardDoubleRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  BattleSingleRewardDoubleRequest_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_MessageBattleSingleRewardDoubleRequest_2eproto() {
  protobuf_AddDesc_MessageBattleSingleRewardDoubleRequest_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "MessageBattleSingleRewardDoubleRequest.proto");
  GOOGLE_CHECK(file != NULL);
  BattleSingleRewardDoubleRequest_descriptor_ = file->message_type(0);
  static const int BattleSingleRewardDoubleRequest_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BattleSingleRewardDoubleRequest, playerid_),
  };
  BattleSingleRewardDoubleRequest_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      BattleSingleRewardDoubleRequest_descriptor_,
      BattleSingleRewardDoubleRequest::default_instance_,
      BattleSingleRewardDoubleRequest_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BattleSingleRewardDoubleRequest, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BattleSingleRewardDoubleRequest, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(BattleSingleRewardDoubleRequest));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_MessageBattleSingleRewardDoubleRequest_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    BattleSingleRewardDoubleRequest_descriptor_, &BattleSingleRewardDoubleRequest::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_MessageBattleSingleRewardDoubleRequest_2eproto() {
  delete BattleSingleRewardDoubleRequest::default_instance_;
  delete BattleSingleRewardDoubleRequest_reflection_;
}

void protobuf_AddDesc_MessageBattleSingleRewardDoubleRequest_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n,MessageBattleSingleRewardDoubleRequest"
    ".proto\022\007Message\"3\n\037BattleSingleRewardDou"
    "bleRequest\022\020\n\010playerid\030\001 \001(\003", 108);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MessageBattleSingleRewardDoubleRequest.proto", &protobuf_RegisterTypes);
  BattleSingleRewardDoubleRequest::default_instance_ = new BattleSingleRewardDoubleRequest();
  BattleSingleRewardDoubleRequest::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MessageBattleSingleRewardDoubleRequest_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MessageBattleSingleRewardDoubleRequest_2eproto {
  StaticDescriptorInitializer_MessageBattleSingleRewardDoubleRequest_2eproto() {
    protobuf_AddDesc_MessageBattleSingleRewardDoubleRequest_2eproto();
  }
} static_descriptor_initializer_MessageBattleSingleRewardDoubleRequest_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int BattleSingleRewardDoubleRequest::kPlayeridFieldNumber;
#endif  // !_MSC_VER

BattleSingleRewardDoubleRequest::BattleSingleRewardDoubleRequest()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void BattleSingleRewardDoubleRequest::InitAsDefaultInstance() {
}

BattleSingleRewardDoubleRequest::BattleSingleRewardDoubleRequest(const BattleSingleRewardDoubleRequest& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void BattleSingleRewardDoubleRequest::SharedCtor() {
  _cached_size_ = 0;
  playerid_ = GOOGLE_LONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BattleSingleRewardDoubleRequest::~BattleSingleRewardDoubleRequest() {
  SharedDtor();
}

void BattleSingleRewardDoubleRequest::SharedDtor() {
  if (this != default_instance_) {
  }
}

void BattleSingleRewardDoubleRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BattleSingleRewardDoubleRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BattleSingleRewardDoubleRequest_descriptor_;
}

const BattleSingleRewardDoubleRequest& BattleSingleRewardDoubleRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MessageBattleSingleRewardDoubleRequest_2eproto();
  return *default_instance_;
}

BattleSingleRewardDoubleRequest* BattleSingleRewardDoubleRequest::default_instance_ = NULL;

BattleSingleRewardDoubleRequest* BattleSingleRewardDoubleRequest::New() const {
  return new BattleSingleRewardDoubleRequest;
}

void BattleSingleRewardDoubleRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    playerid_ = GOOGLE_LONGLONG(0);
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool BattleSingleRewardDoubleRequest::MergePartialFromCodedStream(
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

void BattleSingleRewardDoubleRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int64 playerid = 1;
  if (has_playerid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->playerid(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* BattleSingleRewardDoubleRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int64 playerid = 1;
  if (has_playerid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->playerid(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int BattleSingleRewardDoubleRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int64 playerid = 1;
    if (has_playerid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->playerid());
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

void BattleSingleRewardDoubleRequest::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const BattleSingleRewardDoubleRequest* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const BattleSingleRewardDoubleRequest*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void BattleSingleRewardDoubleRequest::MergeFrom(const BattleSingleRewardDoubleRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_playerid()) {
      set_playerid(from.playerid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void BattleSingleRewardDoubleRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BattleSingleRewardDoubleRequest::CopyFrom(const BattleSingleRewardDoubleRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BattleSingleRewardDoubleRequest::IsInitialized() const {

  return true;
}

void BattleSingleRewardDoubleRequest::Swap(BattleSingleRewardDoubleRequest* other) {
  if (other != this) {
    std::swap(playerid_, other->playerid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata BattleSingleRewardDoubleRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = BattleSingleRewardDoubleRequest_descriptor_;
  metadata.reflection = BattleSingleRewardDoubleRequest_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Message

// @@protoc_insertion_point(global_scope)