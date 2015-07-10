// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageBossRewardRanking.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MessageBossRewardRanking.pb.h"

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

const ::google::protobuf::Descriptor* BossRewardRanking_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  BossRewardRanking_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_MessageBossRewardRanking_2eproto() {
  protobuf_AddDesc_MessageBossRewardRanking_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "MessageBossRewardRanking.proto");
  GOOGLE_CHECK(file != NULL);
  BossRewardRanking_descriptor_ = file->message_type(0);
  static const int BossRewardRanking_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BossRewardRanking, merit_),
  };
  BossRewardRanking_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      BossRewardRanking_descriptor_,
      BossRewardRanking::default_instance_,
      BossRewardRanking_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BossRewardRanking, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BossRewardRanking, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(BossRewardRanking));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_MessageBossRewardRanking_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    BossRewardRanking_descriptor_, &BossRewardRanking::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_MessageBossRewardRanking_2eproto() {
  delete BossRewardRanking::default_instance_;
  delete BossRewardRanking_reflection_;
}

void protobuf_AddDesc_MessageBossRewardRanking_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\036MessageBossRewardRanking.proto\022\007Messag"
    "e\"\"\n\021BossRewardRanking\022\r\n\005merit\030\001 \001(\005", 77);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MessageBossRewardRanking.proto", &protobuf_RegisterTypes);
  BossRewardRanking::default_instance_ = new BossRewardRanking();
  BossRewardRanking::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MessageBossRewardRanking_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MessageBossRewardRanking_2eproto {
  StaticDescriptorInitializer_MessageBossRewardRanking_2eproto() {
    protobuf_AddDesc_MessageBossRewardRanking_2eproto();
  }
} static_descriptor_initializer_MessageBossRewardRanking_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int BossRewardRanking::kMeritFieldNumber;
#endif  // !_MSC_VER

BossRewardRanking::BossRewardRanking()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void BossRewardRanking::InitAsDefaultInstance() {
}

BossRewardRanking::BossRewardRanking(const BossRewardRanking& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void BossRewardRanking::SharedCtor() {
  _cached_size_ = 0;
  merit_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BossRewardRanking::~BossRewardRanking() {
  SharedDtor();
}

void BossRewardRanking::SharedDtor() {
  if (this != default_instance_) {
  }
}

void BossRewardRanking::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BossRewardRanking::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BossRewardRanking_descriptor_;
}

const BossRewardRanking& BossRewardRanking::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MessageBossRewardRanking_2eproto();
  return *default_instance_;
}

BossRewardRanking* BossRewardRanking::default_instance_ = NULL;

BossRewardRanking* BossRewardRanking::New() const {
  return new BossRewardRanking;
}

void BossRewardRanking::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    merit_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool BossRewardRanking::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 merit = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &merit_)));
          set_has_merit();
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

void BossRewardRanking::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 merit = 1;
  if (has_merit()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->merit(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* BossRewardRanking::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 merit = 1;
  if (has_merit()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->merit(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int BossRewardRanking::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 merit = 1;
    if (has_merit()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->merit());
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

void BossRewardRanking::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const BossRewardRanking* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const BossRewardRanking*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void BossRewardRanking::MergeFrom(const BossRewardRanking& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_merit()) {
      set_merit(from.merit());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void BossRewardRanking::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BossRewardRanking::CopyFrom(const BossRewardRanking& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BossRewardRanking::IsInitialized() const {

  return true;
}

void BossRewardRanking::Swap(BossRewardRanking* other) {
  if (other != this) {
    std::swap(merit_, other->merit_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata BossRewardRanking::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = BossRewardRanking_descriptor_;
  metadata.reflection = BossRewardRanking_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Message

// @@protoc_insertion_point(global_scope)