// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageFightAward.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MessageFightAward.pb.h"

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

const ::google::protobuf::Descriptor* FightAward_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  FightAward_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_MessageFightAward_2eproto() {
  protobuf_AddDesc_MessageFightAward_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "MessageFightAward.proto");
  GOOGLE_CHECK(file != NULL);
  FightAward_descriptor_ = file->message_type(0);
  static const int FightAward_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FightAward, silver_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FightAward, exp_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FightAward, totalsilver_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FightAward, totalexp_),
  };
  FightAward_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      FightAward_descriptor_,
      FightAward::default_instance_,
      FightAward_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FightAward, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FightAward, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(FightAward));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_MessageFightAward_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    FightAward_descriptor_, &FightAward::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_MessageFightAward_2eproto() {
  delete FightAward::default_instance_;
  delete FightAward_reflection_;
}

void protobuf_AddDesc_MessageFightAward_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\027MessageFightAward.proto\022\007Message\"P\n\nFi"
    "ghtAward\022\016\n\006silver\030\001 \001(\005\022\013\n\003exp\030\002 \001(\005\022\023\n"
    "\013totalsilver\030\003 \001(\005\022\020\n\010totalexp\030\004 \001(\005", 116);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MessageFightAward.proto", &protobuf_RegisterTypes);
  FightAward::default_instance_ = new FightAward();
  FightAward::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MessageFightAward_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MessageFightAward_2eproto {
  StaticDescriptorInitializer_MessageFightAward_2eproto() {
    protobuf_AddDesc_MessageFightAward_2eproto();
  }
} static_descriptor_initializer_MessageFightAward_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int FightAward::kSilverFieldNumber;
const int FightAward::kExpFieldNumber;
const int FightAward::kTotalsilverFieldNumber;
const int FightAward::kTotalexpFieldNumber;
#endif  // !_MSC_VER

FightAward::FightAward()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void FightAward::InitAsDefaultInstance() {
}

FightAward::FightAward(const FightAward& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void FightAward::SharedCtor() {
  _cached_size_ = 0;
  silver_ = 0;
  exp_ = 0;
  totalsilver_ = 0;
  totalexp_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

FightAward::~FightAward() {
  SharedDtor();
}

void FightAward::SharedDtor() {
  if (this != default_instance_) {
  }
}

void FightAward::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* FightAward::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return FightAward_descriptor_;
}

const FightAward& FightAward::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MessageFightAward_2eproto();
  return *default_instance_;
}

FightAward* FightAward::default_instance_ = NULL;

FightAward* FightAward::New() const {
  return new FightAward;
}

void FightAward::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    silver_ = 0;
    exp_ = 0;
    totalsilver_ = 0;
    totalexp_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool FightAward::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 silver = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &silver_)));
          set_has_silver();
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
        if (input->ExpectTag(24)) goto parse_totalsilver;
        break;
      }

      // optional int32 totalsilver = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_totalsilver:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &totalsilver_)));
          set_has_totalsilver();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_totalexp;
        break;
      }

      // optional int32 totalexp = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_totalexp:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &totalexp_)));
          set_has_totalexp();
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

void FightAward::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 silver = 1;
  if (has_silver()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->silver(), output);
  }

  // optional int32 exp = 2;
  if (has_exp()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->exp(), output);
  }

  // optional int32 totalsilver = 3;
  if (has_totalsilver()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->totalsilver(), output);
  }

  // optional int32 totalexp = 4;
  if (has_totalexp()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->totalexp(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* FightAward::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 silver = 1;
  if (has_silver()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->silver(), target);
  }

  // optional int32 exp = 2;
  if (has_exp()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->exp(), target);
  }

  // optional int32 totalsilver = 3;
  if (has_totalsilver()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->totalsilver(), target);
  }

  // optional int32 totalexp = 4;
  if (has_totalexp()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->totalexp(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int FightAward::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 silver = 1;
    if (has_silver()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->silver());
    }

    // optional int32 exp = 2;
    if (has_exp()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->exp());
    }

    // optional int32 totalsilver = 3;
    if (has_totalsilver()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->totalsilver());
    }

    // optional int32 totalexp = 4;
    if (has_totalexp()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->totalexp());
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

void FightAward::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const FightAward* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const FightAward*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void FightAward::MergeFrom(const FightAward& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_silver()) {
      set_silver(from.silver());
    }
    if (from.has_exp()) {
      set_exp(from.exp());
    }
    if (from.has_totalsilver()) {
      set_totalsilver(from.totalsilver());
    }
    if (from.has_totalexp()) {
      set_totalexp(from.totalexp());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void FightAward::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FightAward::CopyFrom(const FightAward& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FightAward::IsInitialized() const {

  return true;
}

void FightAward::Swap(FightAward* other) {
  if (other != this) {
    std::swap(silver_, other->silver_);
    std::swap(exp_, other->exp_);
    std::swap(totalsilver_, other->totalsilver_);
    std::swap(totalexp_, other->totalexp_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata FightAward::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = FightAward_descriptor_;
  metadata.reflection = FightAward_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Message

// @@protoc_insertion_point(global_scope)