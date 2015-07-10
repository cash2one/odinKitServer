// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageRewardDirectNotify.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MessageRewardDirectNotify.pb.h"

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

const ::google::protobuf::Descriptor* RewardDirectNotify_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RewardDirectNotify_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_MessageRewardDirectNotify_2eproto() {
  protobuf_AddDesc_MessageRewardDirectNotify_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "MessageRewardDirectNotify.proto");
  GOOGLE_CHECK(file != NULL);
  RewardDirectNotify_descriptor_ = file->message_type(0);
  static const int RewardDirectNotify_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RewardDirectNotify, score_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RewardDirectNotify, exp_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RewardDirectNotify, sliver_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RewardDirectNotify, credit_),
  };
  RewardDirectNotify_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RewardDirectNotify_descriptor_,
      RewardDirectNotify::default_instance_,
      RewardDirectNotify_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RewardDirectNotify, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RewardDirectNotify, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RewardDirectNotify));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_MessageRewardDirectNotify_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RewardDirectNotify_descriptor_, &RewardDirectNotify::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_MessageRewardDirectNotify_2eproto() {
  delete RewardDirectNotify::default_instance_;
  delete RewardDirectNotify_reflection_;
}

void protobuf_AddDesc_MessageRewardDirectNotify_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\037MessageRewardDirectNotify.proto\022\007Messa"
    "ge\"P\n\022RewardDirectNotify\022\r\n\005score\030\001 \001(\005\022"
    "\013\n\003exp\030\002 \001(\005\022\016\n\006sliver\030\003 \001(\005\022\016\n\006credit\030\004"
    " \001(\005", 124);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MessageRewardDirectNotify.proto", &protobuf_RegisterTypes);
  RewardDirectNotify::default_instance_ = new RewardDirectNotify();
  RewardDirectNotify::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MessageRewardDirectNotify_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MessageRewardDirectNotify_2eproto {
  StaticDescriptorInitializer_MessageRewardDirectNotify_2eproto() {
    protobuf_AddDesc_MessageRewardDirectNotify_2eproto();
  }
} static_descriptor_initializer_MessageRewardDirectNotify_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int RewardDirectNotify::kScoreFieldNumber;
const int RewardDirectNotify::kExpFieldNumber;
const int RewardDirectNotify::kSliverFieldNumber;
const int RewardDirectNotify::kCreditFieldNumber;
#endif  // !_MSC_VER

RewardDirectNotify::RewardDirectNotify()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void RewardDirectNotify::InitAsDefaultInstance() {
}

RewardDirectNotify::RewardDirectNotify(const RewardDirectNotify& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void RewardDirectNotify::SharedCtor() {
  _cached_size_ = 0;
  score_ = 0;
  exp_ = 0;
  sliver_ = 0;
  credit_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RewardDirectNotify::~RewardDirectNotify() {
  SharedDtor();
}

void RewardDirectNotify::SharedDtor() {
  if (this != default_instance_) {
  }
}

void RewardDirectNotify::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RewardDirectNotify::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RewardDirectNotify_descriptor_;
}

const RewardDirectNotify& RewardDirectNotify::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MessageRewardDirectNotify_2eproto();
  return *default_instance_;
}

RewardDirectNotify* RewardDirectNotify::default_instance_ = NULL;

RewardDirectNotify* RewardDirectNotify::New() const {
  return new RewardDirectNotify;
}

void RewardDirectNotify::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    score_ = 0;
    exp_ = 0;
    sliver_ = 0;
    credit_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RewardDirectNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 score = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &score_)));
          set_has_score();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_exp;
        break;
      }

      // optional int32 exp = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_exp:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &exp_)));
          set_has_exp();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_sliver;
        break;
      }

      // optional int32 sliver = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_sliver:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &sliver_)));
          set_has_sliver();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_credit;
        break;
      }

      // optional int32 credit = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_credit:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &credit_)));
          set_has_credit();
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

void RewardDirectNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 score = 1;
  if (has_score()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->score(), output);
  }

  // optional int32 exp = 2;
  if (has_exp()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->exp(), output);
  }

  // optional int32 sliver = 3;
  if (has_sliver()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->sliver(), output);
  }

  // optional int32 credit = 4;
  if (has_credit()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->credit(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RewardDirectNotify::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 score = 1;
  if (has_score()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->score(), target);
  }

  // optional int32 exp = 2;
  if (has_exp()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->exp(), target);
  }

  // optional int32 sliver = 3;
  if (has_sliver()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->sliver(), target);
  }

  // optional int32 credit = 4;
  if (has_credit()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->credit(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RewardDirectNotify::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 score = 1;
    if (has_score()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->score());
    }

    // optional int32 exp = 2;
    if (has_exp()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->exp());
    }

    // optional int32 sliver = 3;
    if (has_sliver()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->sliver());
    }

    // optional int32 credit = 4;
    if (has_credit()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->credit());
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

void RewardDirectNotify::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RewardDirectNotify* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RewardDirectNotify*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RewardDirectNotify::MergeFrom(const RewardDirectNotify& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_score()) {
      set_score(from.score());
    }
    if (from.has_exp()) {
      set_exp(from.exp());
    }
    if (from.has_sliver()) {
      set_sliver(from.sliver());
    }
    if (from.has_credit()) {
      set_credit(from.credit());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RewardDirectNotify::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RewardDirectNotify::CopyFrom(const RewardDirectNotify& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RewardDirectNotify::IsInitialized() const {

  return true;
}

void RewardDirectNotify::Swap(RewardDirectNotify* other) {
  if (other != this) {
    std::swap(score_, other->score_);
    std::swap(exp_, other->exp_);
    std::swap(sliver_, other->sliver_);
    std::swap(credit_, other->credit_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RewardDirectNotify::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RewardDirectNotify_descriptor_;
  metadata.reflection = RewardDirectNotify_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Message

// @@protoc_insertion_point(global_scope)