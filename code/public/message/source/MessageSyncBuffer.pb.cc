// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageSyncBuffer.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MessageSyncBuffer.pb.h"

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

const ::google::protobuf::Descriptor* SyncBuffer_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SyncBuffer_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_MessageSyncBuffer_2eproto() {
  protobuf_AddDesc_MessageSyncBuffer_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "MessageSyncBuffer.proto");
  GOOGLE_CHECK(file != NULL);
  SyncBuffer_descriptor_ = file->message_type(0);
  static const int SyncBuffer_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SyncBuffer, pid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SyncBuffer, opttype_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SyncBuffer, buffid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SyncBuffer, actions_),
  };
  SyncBuffer_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      SyncBuffer_descriptor_,
      SyncBuffer::default_instance_,
      SyncBuffer_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SyncBuffer, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SyncBuffer, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(SyncBuffer));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_MessageSyncBuffer_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    SyncBuffer_descriptor_, &SyncBuffer::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_MessageSyncBuffer_2eproto() {
  delete SyncBuffer::default_instance_;
  delete SyncBuffer_reflection_;
}

void protobuf_AddDesc_MessageSyncBuffer_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\027MessageSyncBuffer.proto\022\007Message\"K\n\nSy"
    "ncBuffer\022\013\n\003pid\030\001 \001(\003\022\017\n\007opttype\030\002 \001(\005\022\016"
    "\n\006buffid\030\003 \003(\005\022\017\n\007actions\030\004 \003(\005", 111);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MessageSyncBuffer.proto", &protobuf_RegisterTypes);
  SyncBuffer::default_instance_ = new SyncBuffer();
  SyncBuffer::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MessageSyncBuffer_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MessageSyncBuffer_2eproto {
  StaticDescriptorInitializer_MessageSyncBuffer_2eproto() {
    protobuf_AddDesc_MessageSyncBuffer_2eproto();
  }
} static_descriptor_initializer_MessageSyncBuffer_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int SyncBuffer::kPidFieldNumber;
const int SyncBuffer::kOpttypeFieldNumber;
const int SyncBuffer::kBuffidFieldNumber;
const int SyncBuffer::kActionsFieldNumber;
#endif  // !_MSC_VER

SyncBuffer::SyncBuffer()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void SyncBuffer::InitAsDefaultInstance() {
}

SyncBuffer::SyncBuffer(const SyncBuffer& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void SyncBuffer::SharedCtor() {
  _cached_size_ = 0;
  pid_ = GOOGLE_LONGLONG(0);
  opttype_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SyncBuffer::~SyncBuffer() {
  SharedDtor();
}

void SyncBuffer::SharedDtor() {
  if (this != default_instance_) {
  }
}

void SyncBuffer::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SyncBuffer::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SyncBuffer_descriptor_;
}

const SyncBuffer& SyncBuffer::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MessageSyncBuffer_2eproto();
  return *default_instance_;
}

SyncBuffer* SyncBuffer::default_instance_ = NULL;

SyncBuffer* SyncBuffer::New() const {
  return new SyncBuffer;
}

void SyncBuffer::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    pid_ = GOOGLE_LONGLONG(0);
    opttype_ = 0;
  }
  buffid_.Clear();
  actions_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool SyncBuffer::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 pid = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &pid_)));
          set_has_pid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_opttype;
        break;
      }

      // optional int32 opttype = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_opttype:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &opttype_)));
          set_has_opttype();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_buffid;
        break;
      }

      // repeated int32 buffid = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_buffid:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 24, input, this->mutable_buffid())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_buffid())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_buffid;
        if (input->ExpectTag(32)) goto parse_actions;
        break;
      }

      // repeated int32 actions = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_actions:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 32, input, this->mutable_actions())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_actions())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_actions;
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

void SyncBuffer::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int64 pid = 1;
  if (has_pid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->pid(), output);
  }

  // optional int32 opttype = 2;
  if (has_opttype()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->opttype(), output);
  }

  // repeated int32 buffid = 3;
  for (int i = 0; i < this->buffid_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(
      3, this->buffid(i), output);
  }

  // repeated int32 actions = 4;
  for (int i = 0; i < this->actions_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(
      4, this->actions(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* SyncBuffer::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int64 pid = 1;
  if (has_pid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->pid(), target);
  }

  // optional int32 opttype = 2;
  if (has_opttype()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->opttype(), target);
  }

  // repeated int32 buffid = 3;
  for (int i = 0; i < this->buffid_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32ToArray(3, this->buffid(i), target);
  }

  // repeated int32 actions = 4;
  for (int i = 0; i < this->actions_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32ToArray(4, this->actions(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int SyncBuffer::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int64 pid = 1;
    if (has_pid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->pid());
    }

    // optional int32 opttype = 2;
    if (has_opttype()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->opttype());
    }

  }
  // repeated int32 buffid = 3;
  {
    int data_size = 0;
    for (int i = 0; i < this->buffid_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->buffid(i));
    }
    total_size += 1 * this->buffid_size() + data_size;
  }

  // repeated int32 actions = 4;
  {
    int data_size = 0;
    for (int i = 0; i < this->actions_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->actions(i));
    }
    total_size += 1 * this->actions_size() + data_size;
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

void SyncBuffer::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const SyncBuffer* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const SyncBuffer*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void SyncBuffer::MergeFrom(const SyncBuffer& from) {
  GOOGLE_CHECK_NE(&from, this);
  buffid_.MergeFrom(from.buffid_);
  actions_.MergeFrom(from.actions_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_pid()) {
      set_pid(from.pid());
    }
    if (from.has_opttype()) {
      set_opttype(from.opttype());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void SyncBuffer::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SyncBuffer::CopyFrom(const SyncBuffer& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SyncBuffer::IsInitialized() const {

  return true;
}

void SyncBuffer::Swap(SyncBuffer* other) {
  if (other != this) {
    std::swap(pid_, other->pid_);
    std::swap(opttype_, other->opttype_);
    buffid_.Swap(&other->buffid_);
    actions_.Swap(&other->actions_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata SyncBuffer::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SyncBuffer_descriptor_;
  metadata.reflection = SyncBuffer_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Message

// @@protoc_insertion_point(global_scope)