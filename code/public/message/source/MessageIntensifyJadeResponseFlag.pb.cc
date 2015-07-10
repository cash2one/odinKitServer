// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageIntensifyJadeResponseFlag.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MessageIntensifyJadeResponseFlag.pb.h"

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

const ::google::protobuf::Descriptor* IntensifyJadeResponseFlag_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  IntensifyJadeResponseFlag_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_MessageIntensifyJadeResponseFlag_2eproto() {
  protobuf_AddDesc_MessageIntensifyJadeResponseFlag_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "MessageIntensifyJadeResponseFlag.proto");
  GOOGLE_CHECK(file != NULL);
  IntensifyJadeResponseFlag_descriptor_ = file->message_type(0);
  static const int IntensifyJadeResponseFlag_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(IntensifyJadeResponseFlag, flag_),
  };
  IntensifyJadeResponseFlag_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      IntensifyJadeResponseFlag_descriptor_,
      IntensifyJadeResponseFlag::default_instance_,
      IntensifyJadeResponseFlag_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(IntensifyJadeResponseFlag, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(IntensifyJadeResponseFlag, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(IntensifyJadeResponseFlag));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_MessageIntensifyJadeResponseFlag_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    IntensifyJadeResponseFlag_descriptor_, &IntensifyJadeResponseFlag::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_MessageIntensifyJadeResponseFlag_2eproto() {
  delete IntensifyJadeResponseFlag::default_instance_;
  delete IntensifyJadeResponseFlag_reflection_;
}

void protobuf_AddDesc_MessageIntensifyJadeResponseFlag_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n&MessageIntensifyJadeResponseFlag.proto"
    "\022\007Message\")\n\031IntensifyJadeResponseFlag\022\014"
    "\n\004flag\030\001 \001(\005", 92);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MessageIntensifyJadeResponseFlag.proto", &protobuf_RegisterTypes);
  IntensifyJadeResponseFlag::default_instance_ = new IntensifyJadeResponseFlag();
  IntensifyJadeResponseFlag::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MessageIntensifyJadeResponseFlag_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MessageIntensifyJadeResponseFlag_2eproto {
  StaticDescriptorInitializer_MessageIntensifyJadeResponseFlag_2eproto() {
    protobuf_AddDesc_MessageIntensifyJadeResponseFlag_2eproto();
  }
} static_descriptor_initializer_MessageIntensifyJadeResponseFlag_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int IntensifyJadeResponseFlag::kFlagFieldNumber;
#endif  // !_MSC_VER

IntensifyJadeResponseFlag::IntensifyJadeResponseFlag()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void IntensifyJadeResponseFlag::InitAsDefaultInstance() {
}

IntensifyJadeResponseFlag::IntensifyJadeResponseFlag(const IntensifyJadeResponseFlag& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void IntensifyJadeResponseFlag::SharedCtor() {
  _cached_size_ = 0;
  flag_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

IntensifyJadeResponseFlag::~IntensifyJadeResponseFlag() {
  SharedDtor();
}

void IntensifyJadeResponseFlag::SharedDtor() {
  if (this != default_instance_) {
  }
}

void IntensifyJadeResponseFlag::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* IntensifyJadeResponseFlag::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return IntensifyJadeResponseFlag_descriptor_;
}

const IntensifyJadeResponseFlag& IntensifyJadeResponseFlag::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MessageIntensifyJadeResponseFlag_2eproto();
  return *default_instance_;
}

IntensifyJadeResponseFlag* IntensifyJadeResponseFlag::default_instance_ = NULL;

IntensifyJadeResponseFlag* IntensifyJadeResponseFlag::New() const {
  return new IntensifyJadeResponseFlag;
}

void IntensifyJadeResponseFlag::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    flag_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool IntensifyJadeResponseFlag::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 flag = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &flag_)));
          set_has_flag();
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

void IntensifyJadeResponseFlag::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 flag = 1;
  if (has_flag()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->flag(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* IntensifyJadeResponseFlag::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 flag = 1;
  if (has_flag()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->flag(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int IntensifyJadeResponseFlag::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 flag = 1;
    if (has_flag()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->flag());
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

void IntensifyJadeResponseFlag::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const IntensifyJadeResponseFlag* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const IntensifyJadeResponseFlag*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void IntensifyJadeResponseFlag::MergeFrom(const IntensifyJadeResponseFlag& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_flag()) {
      set_flag(from.flag());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void IntensifyJadeResponseFlag::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void IntensifyJadeResponseFlag::CopyFrom(const IntensifyJadeResponseFlag& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool IntensifyJadeResponseFlag::IsInitialized() const {

  return true;
}

void IntensifyJadeResponseFlag::Swap(IntensifyJadeResponseFlag* other) {
  if (other != this) {
    std::swap(flag_, other->flag_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata IntensifyJadeResponseFlag::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = IntensifyJadeResponseFlag_descriptor_;
  metadata.reflection = IntensifyJadeResponseFlag_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Message

// @@protoc_insertion_point(global_scope)