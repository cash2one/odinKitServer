// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageAttackMonsterRequest.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MessageAttackMonsterRequest.pb.h"

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

const ::google::protobuf::Descriptor* AttackMonsterRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  AttackMonsterRequest_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_MessageAttackMonsterRequest_2eproto() {
  protobuf_AddDesc_MessageAttackMonsterRequest_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "MessageAttackMonsterRequest.proto");
  GOOGLE_CHECK(file != NULL);
  AttackMonsterRequest_descriptor_ = file->message_type(0);
  static const int AttackMonsterRequest_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AttackMonsterRequest, scene_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AttackMonsterRequest, monster_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AttackMonsterRequest, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AttackMonsterRequest, engage_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AttackMonsterRequest, score_),
  };
  AttackMonsterRequest_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      AttackMonsterRequest_descriptor_,
      AttackMonsterRequest::default_instance_,
      AttackMonsterRequest_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AttackMonsterRequest, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AttackMonsterRequest, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(AttackMonsterRequest));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_MessageAttackMonsterRequest_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    AttackMonsterRequest_descriptor_, &AttackMonsterRequest::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_MessageAttackMonsterRequest_2eproto() {
  delete AttackMonsterRequest::default_instance_;
  delete AttackMonsterRequest_reflection_;
}

void protobuf_AddDesc_MessageAttackMonsterRequest_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n!MessageAttackMonsterRequest.proto\022\007Mes"
    "sage\"c\n\024AttackMonsterRequest\022\r\n\005scene\030\001 "
    "\001(\005\022\017\n\007monster\030\002 \001(\005\022\014\n\004type\030\003 \001(\005\022\016\n\006en"
    "gage\030\004 \001(\005\022\r\n\005score\030\005 \001(\005", 145);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MessageAttackMonsterRequest.proto", &protobuf_RegisterTypes);
  AttackMonsterRequest::default_instance_ = new AttackMonsterRequest();
  AttackMonsterRequest::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MessageAttackMonsterRequest_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MessageAttackMonsterRequest_2eproto {
  StaticDescriptorInitializer_MessageAttackMonsterRequest_2eproto() {
    protobuf_AddDesc_MessageAttackMonsterRequest_2eproto();
  }
} static_descriptor_initializer_MessageAttackMonsterRequest_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int AttackMonsterRequest::kSceneFieldNumber;
const int AttackMonsterRequest::kMonsterFieldNumber;
const int AttackMonsterRequest::kTypeFieldNumber;
const int AttackMonsterRequest::kEngageFieldNumber;
const int AttackMonsterRequest::kScoreFieldNumber;
#endif  // !_MSC_VER

AttackMonsterRequest::AttackMonsterRequest()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void AttackMonsterRequest::InitAsDefaultInstance() {
}

AttackMonsterRequest::AttackMonsterRequest(const AttackMonsterRequest& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void AttackMonsterRequest::SharedCtor() {
  _cached_size_ = 0;
  scene_ = 0;
  monster_ = 0;
  type_ = 0;
  engage_ = 0;
  score_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

AttackMonsterRequest::~AttackMonsterRequest() {
  SharedDtor();
}

void AttackMonsterRequest::SharedDtor() {
  if (this != default_instance_) {
  }
}

void AttackMonsterRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* AttackMonsterRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return AttackMonsterRequest_descriptor_;
}

const AttackMonsterRequest& AttackMonsterRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MessageAttackMonsterRequest_2eproto();
  return *default_instance_;
}

AttackMonsterRequest* AttackMonsterRequest::default_instance_ = NULL;

AttackMonsterRequest* AttackMonsterRequest::New() const {
  return new AttackMonsterRequest;
}

void AttackMonsterRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    scene_ = 0;
    monster_ = 0;
    type_ = 0;
    engage_ = 0;
    score_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool AttackMonsterRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 scene = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &scene_)));
          set_has_scene();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_monster;
        break;
      }

      // optional int32 monster = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_monster:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &monster_)));
          set_has_monster();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_type;
        break;
      }

      // optional int32 type = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_type:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &type_)));
          set_has_type();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_engage;
        break;
      }

      // optional int32 engage = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_engage:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &engage_)));
          set_has_engage();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_score;
        break;
      }

      // optional int32 score = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_score:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &score_)));
          set_has_score();
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

void AttackMonsterRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 scene = 1;
  if (has_scene()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->scene(), output);
  }

  // optional int32 monster = 2;
  if (has_monster()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->monster(), output);
  }

  // optional int32 type = 3;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->type(), output);
  }

  // optional int32 engage = 4;
  if (has_engage()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->engage(), output);
  }

  // optional int32 score = 5;
  if (has_score()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->score(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* AttackMonsterRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 scene = 1;
  if (has_scene()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->scene(), target);
  }

  // optional int32 monster = 2;
  if (has_monster()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->monster(), target);
  }

  // optional int32 type = 3;
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->type(), target);
  }

  // optional int32 engage = 4;
  if (has_engage()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->engage(), target);
  }

  // optional int32 score = 5;
  if (has_score()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->score(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int AttackMonsterRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 scene = 1;
    if (has_scene()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->scene());
    }

    // optional int32 monster = 2;
    if (has_monster()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->monster());
    }

    // optional int32 type = 3;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->type());
    }

    // optional int32 engage = 4;
    if (has_engage()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->engage());
    }

    // optional int32 score = 5;
    if (has_score()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->score());
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

void AttackMonsterRequest::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const AttackMonsterRequest* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const AttackMonsterRequest*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void AttackMonsterRequest::MergeFrom(const AttackMonsterRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_scene()) {
      set_scene(from.scene());
    }
    if (from.has_monster()) {
      set_monster(from.monster());
    }
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_engage()) {
      set_engage(from.engage());
    }
    if (from.has_score()) {
      set_score(from.score());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void AttackMonsterRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AttackMonsterRequest::CopyFrom(const AttackMonsterRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AttackMonsterRequest::IsInitialized() const {

  return true;
}

void AttackMonsterRequest::Swap(AttackMonsterRequest* other) {
  if (other != this) {
    std::swap(scene_, other->scene_);
    std::swap(monster_, other->monster_);
    std::swap(type_, other->type_);
    std::swap(engage_, other->engage_);
    std::swap(score_, other->score_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata AttackMonsterRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = AttackMonsterRequest_descriptor_;
  metadata.reflection = AttackMonsterRequest_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Message

// @@protoc_insertion_point(global_scope)