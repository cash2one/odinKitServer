// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageUserHeartResponse.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MessageUserHeartResponse.pb.h"

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

const ::google::protobuf::Descriptor* UserHeartResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  UserHeartResponse_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_MessageUserHeartResponse_2eproto() {
  protobuf_AddDesc_MessageUserHeartResponse_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "MessageUserHeartResponse.proto");
  GOOGLE_CHECK(file != NULL);
  UserHeartResponse_descriptor_ = file->message_type(0);
  static const int UserHeartResponse_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserHeartResponse, stime_),
  };
  UserHeartResponse_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      UserHeartResponse_descriptor_,
      UserHeartResponse::default_instance_,
      UserHeartResponse_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserHeartResponse, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserHeartResponse, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(UserHeartResponse));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_MessageUserHeartResponse_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    UserHeartResponse_descriptor_, &UserHeartResponse::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_MessageUserHeartResponse_2eproto() {
  delete UserHeartResponse::default_instance_;
  delete UserHeartResponse_reflection_;
}

void protobuf_AddDesc_MessageUserHeartResponse_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\036MessageUserHeartResponse.proto\022\007Messag"
    "e\"\"\n\021UserHeartResponse\022\r\n\005stime\030\001 \001(\003", 77);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MessageUserHeartResponse.proto", &protobuf_RegisterTypes);
  UserHeartResponse::default_instance_ = new UserHeartResponse();
  UserHeartResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MessageUserHeartResponse_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MessageUserHeartResponse_2eproto {
  StaticDescriptorInitializer_MessageUserHeartResponse_2eproto() {
    protobuf_AddDesc_MessageUserHeartResponse_2eproto();
  }
} static_descriptor_initializer_MessageUserHeartResponse_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int UserHeartResponse::kStimeFieldNumber;
#endif  // !_MSC_VER

UserHeartResponse::UserHeartResponse()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void UserHeartResponse::InitAsDefaultInstance() {
}

UserHeartResponse::UserHeartResponse(const UserHeartResponse& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void UserHeartResponse::SharedCtor() {
  _cached_size_ = 0;
  stime_ = GOOGLE_LONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

UserHeartResponse::~UserHeartResponse() {
  SharedDtor();
}

void UserHeartResponse::SharedDtor() {
  if (this != default_instance_) {
  }
}

void UserHeartResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* UserHeartResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return UserHeartResponse_descriptor_;
}

const UserHeartResponse& UserHeartResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MessageUserHeartResponse_2eproto();
  return *default_instance_;
}

UserHeartResponse* UserHeartResponse::default_instance_ = NULL;

UserHeartResponse* UserHeartResponse::New() const {
  return new UserHeartResponse;
}

void UserHeartResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    stime_ = GOOGLE_LONGLONG(0);
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool UserHeartResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 stime = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &stime_)));
          set_has_stime();
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

void UserHeartResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int64 stime = 1;
  if (has_stime()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->stime(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* UserHeartResponse::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int64 stime = 1;
  if (has_stime()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->stime(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int UserHeartResponse::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int64 stime = 1;
    if (has_stime()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->stime());
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

void UserHeartResponse::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const UserHeartResponse* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const UserHeartResponse*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void UserHeartResponse::MergeFrom(const UserHeartResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_stime()) {
      set_stime(from.stime());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void UserHeartResponse::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void UserHeartResponse::CopyFrom(const UserHeartResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UserHeartResponse::IsInitialized() const {

  return true;
}

void UserHeartResponse::Swap(UserHeartResponse* other) {
  if (other != this) {
    std::swap(stime_, other->stime_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata UserHeartResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = UserHeartResponse_descriptor_;
  metadata.reflection = UserHeartResponse_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Message

// @@protoc_insertion_point(global_scope)