// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageItemDeleteResponse.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MessageItemDeleteResponse.pb.h"

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

const ::google::protobuf::Descriptor* ItemDeleteResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ItemDeleteResponse_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_MessageItemDeleteResponse_2eproto() {
  protobuf_AddDesc_MessageItemDeleteResponse_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "MessageItemDeleteResponse.proto");
  GOOGLE_CHECK(file != NULL);
  ItemDeleteResponse_descriptor_ = file->message_type(0);
  static const int ItemDeleteResponse_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ItemDeleteResponse, itemid_),
  };
  ItemDeleteResponse_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ItemDeleteResponse_descriptor_,
      ItemDeleteResponse::default_instance_,
      ItemDeleteResponse_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ItemDeleteResponse, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ItemDeleteResponse, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ItemDeleteResponse));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_MessageItemDeleteResponse_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ItemDeleteResponse_descriptor_, &ItemDeleteResponse::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_MessageItemDeleteResponse_2eproto() {
  delete ItemDeleteResponse::default_instance_;
  delete ItemDeleteResponse_reflection_;
}

void protobuf_AddDesc_MessageItemDeleteResponse_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\037MessageItemDeleteResponse.proto\022\007Messa"
    "ge\"$\n\022ItemDeleteResponse\022\016\n\006itemid\030\001 \001(\003", 80);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MessageItemDeleteResponse.proto", &protobuf_RegisterTypes);
  ItemDeleteResponse::default_instance_ = new ItemDeleteResponse();
  ItemDeleteResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MessageItemDeleteResponse_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MessageItemDeleteResponse_2eproto {
  StaticDescriptorInitializer_MessageItemDeleteResponse_2eproto() {
    protobuf_AddDesc_MessageItemDeleteResponse_2eproto();
  }
} static_descriptor_initializer_MessageItemDeleteResponse_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int ItemDeleteResponse::kItemidFieldNumber;
#endif  // !_MSC_VER

ItemDeleteResponse::ItemDeleteResponse()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void ItemDeleteResponse::InitAsDefaultInstance() {
}

ItemDeleteResponse::ItemDeleteResponse(const ItemDeleteResponse& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void ItemDeleteResponse::SharedCtor() {
  _cached_size_ = 0;
  itemid_ = GOOGLE_LONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ItemDeleteResponse::~ItemDeleteResponse() {
  SharedDtor();
}

void ItemDeleteResponse::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ItemDeleteResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ItemDeleteResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ItemDeleteResponse_descriptor_;
}

const ItemDeleteResponse& ItemDeleteResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MessageItemDeleteResponse_2eproto();
  return *default_instance_;
}

ItemDeleteResponse* ItemDeleteResponse::default_instance_ = NULL;

ItemDeleteResponse* ItemDeleteResponse::New() const {
  return new ItemDeleteResponse;
}

void ItemDeleteResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    itemid_ = GOOGLE_LONGLONG(0);
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ItemDeleteResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 itemid = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &itemid_)));
          set_has_itemid();
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

void ItemDeleteResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int64 itemid = 1;
  if (has_itemid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->itemid(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* ItemDeleteResponse::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int64 itemid = 1;
  if (has_itemid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->itemid(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int ItemDeleteResponse::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int64 itemid = 1;
    if (has_itemid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->itemid());
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

void ItemDeleteResponse::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ItemDeleteResponse* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ItemDeleteResponse*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ItemDeleteResponse::MergeFrom(const ItemDeleteResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_itemid()) {
      set_itemid(from.itemid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ItemDeleteResponse::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ItemDeleteResponse::CopyFrom(const ItemDeleteResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ItemDeleteResponse::IsInitialized() const {

  return true;
}

void ItemDeleteResponse::Swap(ItemDeleteResponse* other) {
  if (other != this) {
    std::swap(itemid_, other->itemid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ItemDeleteResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ItemDeleteResponse_descriptor_;
  metadata.reflection = ItemDeleteResponse_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Message

// @@protoc_insertion_point(global_scope)