// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageFormatDebutRequest.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MessageFormatDebutRequest.pb.h"

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

const ::google::protobuf::Descriptor* FormatDebutRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  FormatDebutRequest_reflection_ = NULL;
const ::google::protobuf::Descriptor* FormatDebutRequest_Debut_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  FormatDebutRequest_Debut_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_MessageFormatDebutRequest_2eproto() {
  protobuf_AddDesc_MessageFormatDebutRequest_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "MessageFormatDebutRequest.proto");
  GOOGLE_CHECK(file != NULL);
  FormatDebutRequest_descriptor_ = file->message_type(0);
  static const int FormatDebutRequest_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FormatDebutRequest, format_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FormatDebutRequest, debut_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FormatDebutRequest, helperpos_),
  };
  FormatDebutRequest_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      FormatDebutRequest_descriptor_,
      FormatDebutRequest::default_instance_,
      FormatDebutRequest_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FormatDebutRequest, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FormatDebutRequest, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(FormatDebutRequest));
  FormatDebutRequest_Debut_descriptor_ = FormatDebutRequest_descriptor_->nested_type(0);
  static const int FormatDebutRequest_Debut_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FormatDebutRequest_Debut, hero_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FormatDebutRequest_Debut, posi_),
  };
  FormatDebutRequest_Debut_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      FormatDebutRequest_Debut_descriptor_,
      FormatDebutRequest_Debut::default_instance_,
      FormatDebutRequest_Debut_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FormatDebutRequest_Debut, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FormatDebutRequest_Debut, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(FormatDebutRequest_Debut));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_MessageFormatDebutRequest_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    FormatDebutRequest_descriptor_, &FormatDebutRequest::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    FormatDebutRequest_Debut_descriptor_, &FormatDebutRequest_Debut::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_MessageFormatDebutRequest_2eproto() {
  delete FormatDebutRequest::default_instance_;
  delete FormatDebutRequest_reflection_;
  delete FormatDebutRequest_Debut::default_instance_;
  delete FormatDebutRequest_Debut_reflection_;
}

void protobuf_AddDesc_MessageFormatDebutRequest_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\037MessageFormatDebutRequest.proto\022\007Messa"
    "ge\"\216\001\n\022FormatDebutRequest\022\016\n\006format\030\001 \001("
    "\005\0220\n\005debut\030\002 \003(\0132!.Message.FormatDebutRe"
    "quest.Debut\022\021\n\thelperpos\030\003 \001(\005\032#\n\005Debut\022"
    "\014\n\004hero\030\001 \001(\003\022\014\n\004posi\030\002 \001(\005", 187);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MessageFormatDebutRequest.proto", &protobuf_RegisterTypes);
  FormatDebutRequest::default_instance_ = new FormatDebutRequest();
  FormatDebutRequest_Debut::default_instance_ = new FormatDebutRequest_Debut();
  FormatDebutRequest::default_instance_->InitAsDefaultInstance();
  FormatDebutRequest_Debut::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MessageFormatDebutRequest_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MessageFormatDebutRequest_2eproto {
  StaticDescriptorInitializer_MessageFormatDebutRequest_2eproto() {
    protobuf_AddDesc_MessageFormatDebutRequest_2eproto();
  }
} static_descriptor_initializer_MessageFormatDebutRequest_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int FormatDebutRequest_Debut::kHeroFieldNumber;
const int FormatDebutRequest_Debut::kPosiFieldNumber;
#endif  // !_MSC_VER

FormatDebutRequest_Debut::FormatDebutRequest_Debut()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void FormatDebutRequest_Debut::InitAsDefaultInstance() {
}

FormatDebutRequest_Debut::FormatDebutRequest_Debut(const FormatDebutRequest_Debut& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void FormatDebutRequest_Debut::SharedCtor() {
  _cached_size_ = 0;
  hero_ = GOOGLE_LONGLONG(0);
  posi_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

FormatDebutRequest_Debut::~FormatDebutRequest_Debut() {
  SharedDtor();
}

void FormatDebutRequest_Debut::SharedDtor() {
  if (this != default_instance_) {
  }
}

void FormatDebutRequest_Debut::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* FormatDebutRequest_Debut::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return FormatDebutRequest_Debut_descriptor_;
}

const FormatDebutRequest_Debut& FormatDebutRequest_Debut::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MessageFormatDebutRequest_2eproto();
  return *default_instance_;
}

FormatDebutRequest_Debut* FormatDebutRequest_Debut::default_instance_ = NULL;

FormatDebutRequest_Debut* FormatDebutRequest_Debut::New() const {
  return new FormatDebutRequest_Debut;
}

void FormatDebutRequest_Debut::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    hero_ = GOOGLE_LONGLONG(0);
    posi_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool FormatDebutRequest_Debut::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 hero = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &hero_)));
          set_has_hero();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_posi;
        break;
      }

      // optional int32 posi = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_posi:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &posi_)));
          set_has_posi();
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

void FormatDebutRequest_Debut::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int64 hero = 1;
  if (has_hero()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->hero(), output);
  }

  // optional int32 posi = 2;
  if (has_posi()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->posi(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* FormatDebutRequest_Debut::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int64 hero = 1;
  if (has_hero()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->hero(), target);
  }

  // optional int32 posi = 2;
  if (has_posi()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->posi(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int FormatDebutRequest_Debut::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int64 hero = 1;
    if (has_hero()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->hero());
    }

    // optional int32 posi = 2;
    if (has_posi()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->posi());
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

void FormatDebutRequest_Debut::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const FormatDebutRequest_Debut* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const FormatDebutRequest_Debut*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void FormatDebutRequest_Debut::MergeFrom(const FormatDebutRequest_Debut& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_hero()) {
      set_hero(from.hero());
    }
    if (from.has_posi()) {
      set_posi(from.posi());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void FormatDebutRequest_Debut::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FormatDebutRequest_Debut::CopyFrom(const FormatDebutRequest_Debut& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FormatDebutRequest_Debut::IsInitialized() const {

  return true;
}

void FormatDebutRequest_Debut::Swap(FormatDebutRequest_Debut* other) {
  if (other != this) {
    std::swap(hero_, other->hero_);
    std::swap(posi_, other->posi_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata FormatDebutRequest_Debut::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = FormatDebutRequest_Debut_descriptor_;
  metadata.reflection = FormatDebutRequest_Debut_reflection_;
  return metadata;
}


// -------------------------------------------------------------------

#ifndef _MSC_VER
const int FormatDebutRequest::kFormatFieldNumber;
const int FormatDebutRequest::kDebutFieldNumber;
const int FormatDebutRequest::kHelperposFieldNumber;
#endif  // !_MSC_VER

FormatDebutRequest::FormatDebutRequest()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void FormatDebutRequest::InitAsDefaultInstance() {
}

FormatDebutRequest::FormatDebutRequest(const FormatDebutRequest& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void FormatDebutRequest::SharedCtor() {
  _cached_size_ = 0;
  format_ = 0;
  helperpos_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

FormatDebutRequest::~FormatDebutRequest() {
  SharedDtor();
}

void FormatDebutRequest::SharedDtor() {
  if (this != default_instance_) {
  }
}

void FormatDebutRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* FormatDebutRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return FormatDebutRequest_descriptor_;
}

const FormatDebutRequest& FormatDebutRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MessageFormatDebutRequest_2eproto();
  return *default_instance_;
}

FormatDebutRequest* FormatDebutRequest::default_instance_ = NULL;

FormatDebutRequest* FormatDebutRequest::New() const {
  return new FormatDebutRequest;
}

void FormatDebutRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    format_ = 0;
    helperpos_ = 0;
  }
  debut_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool FormatDebutRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 format = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &format_)));
          set_has_format();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_debut;
        break;
      }

      // repeated .Message.FormatDebutRequest.Debut debut = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_debut:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_debut()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_debut;
        if (input->ExpectTag(24)) goto parse_helperpos;
        break;
      }

      // optional int32 helperpos = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_helperpos:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &helperpos_)));
          set_has_helperpos();
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

void FormatDebutRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 format = 1;
  if (has_format()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->format(), output);
  }

  // repeated .Message.FormatDebutRequest.Debut debut = 2;
  for (int i = 0; i < this->debut_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->debut(i), output);
  }

  // optional int32 helperpos = 3;
  if (has_helperpos()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->helperpos(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* FormatDebutRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 format = 1;
  if (has_format()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->format(), target);
  }

  // repeated .Message.FormatDebutRequest.Debut debut = 2;
  for (int i = 0; i < this->debut_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->debut(i), target);
  }

  // optional int32 helperpos = 3;
  if (has_helperpos()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->helperpos(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int FormatDebutRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 format = 1;
    if (has_format()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->format());
    }

    // optional int32 helperpos = 3;
    if (has_helperpos()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->helperpos());
    }

  }
  // repeated .Message.FormatDebutRequest.Debut debut = 2;
  total_size += 1 * this->debut_size();
  for (int i = 0; i < this->debut_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->debut(i));
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

void FormatDebutRequest::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const FormatDebutRequest* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const FormatDebutRequest*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void FormatDebutRequest::MergeFrom(const FormatDebutRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  debut_.MergeFrom(from.debut_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_format()) {
      set_format(from.format());
    }
    if (from.has_helperpos()) {
      set_helperpos(from.helperpos());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void FormatDebutRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FormatDebutRequest::CopyFrom(const FormatDebutRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FormatDebutRequest::IsInitialized() const {

  return true;
}

void FormatDebutRequest::Swap(FormatDebutRequest* other) {
  if (other != this) {
    std::swap(format_, other->format_);
    debut_.Swap(&other->debut_);
    std::swap(helperpos_, other->helperpos_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata FormatDebutRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = FormatDebutRequest_descriptor_;
  metadata.reflection = FormatDebutRequest_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Message

// @@protoc_insertion_point(global_scope)