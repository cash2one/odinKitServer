// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageItemQuickIntense.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MessageItemQuickIntense.pb.h"

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

const ::google::protobuf::Descriptor* ItemQuickIntense_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ItemQuickIntense_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_MessageItemQuickIntense_2eproto() {
  protobuf_AddDesc_MessageItemQuickIntense_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "MessageItemQuickIntense.proto");
  GOOGLE_CHECK(file != NULL);
  ItemQuickIntense_descriptor_ = file->message_type(0);
  static const int ItemQuickIntense_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ItemQuickIntense, roleid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ItemQuickIntense, itemid_),
  };
  ItemQuickIntense_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ItemQuickIntense_descriptor_,
      ItemQuickIntense::default_instance_,
      ItemQuickIntense_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ItemQuickIntense, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ItemQuickIntense, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ItemQuickIntense));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_MessageItemQuickIntense_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ItemQuickIntense_descriptor_, &ItemQuickIntense::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_MessageItemQuickIntense_2eproto() {
  delete ItemQuickIntense::default_instance_;
  delete ItemQuickIntense_reflection_;
}

void protobuf_AddDesc_MessageItemQuickIntense_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\035MessageItemQuickIntense.proto\022\007Message"
    "\"2\n\020ItemQuickIntense\022\016\n\006roleid\030\001 \001(\003\022\016\n\006"
    "itemId\030\002 \001(\003", 92);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MessageItemQuickIntense.proto", &protobuf_RegisterTypes);
  ItemQuickIntense::default_instance_ = new ItemQuickIntense();
  ItemQuickIntense::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MessageItemQuickIntense_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MessageItemQuickIntense_2eproto {
  StaticDescriptorInitializer_MessageItemQuickIntense_2eproto() {
    protobuf_AddDesc_MessageItemQuickIntense_2eproto();
  }
} static_descriptor_initializer_MessageItemQuickIntense_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int ItemQuickIntense::kRoleidFieldNumber;
const int ItemQuickIntense::kItemIdFieldNumber;
#endif  // !_MSC_VER

ItemQuickIntense::ItemQuickIntense()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void ItemQuickIntense::InitAsDefaultInstance() {
}

ItemQuickIntense::ItemQuickIntense(const ItemQuickIntense& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void ItemQuickIntense::SharedCtor() {
  _cached_size_ = 0;
  roleid_ = GOOGLE_LONGLONG(0);
  itemid_ = GOOGLE_LONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ItemQuickIntense::~ItemQuickIntense() {
  SharedDtor();
}

void ItemQuickIntense::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ItemQuickIntense::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ItemQuickIntense::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ItemQuickIntense_descriptor_;
}

const ItemQuickIntense& ItemQuickIntense::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MessageItemQuickIntense_2eproto();
  return *default_instance_;
}

ItemQuickIntense* ItemQuickIntense::default_instance_ = NULL;

ItemQuickIntense* ItemQuickIntense::New() const {
  return new ItemQuickIntense;
}

void ItemQuickIntense::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    roleid_ = GOOGLE_LONGLONG(0);
    itemid_ = GOOGLE_LONGLONG(0);
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ItemQuickIntense::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 roleid = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &roleid_)));
          set_has_roleid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_itemId;
        break;
      }

      // optional int64 itemId = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_itemId:
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

void ItemQuickIntense::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int64 roleid = 1;
  if (has_roleid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->roleid(), output);
  }

  // optional int64 itemId = 2;
  if (has_itemid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->itemid(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* ItemQuickIntense::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int64 roleid = 1;
  if (has_roleid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->roleid(), target);
  }

  // optional int64 itemId = 2;
  if (has_itemid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->itemid(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int ItemQuickIntense::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int64 roleid = 1;
    if (has_roleid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->roleid());
    }

    // optional int64 itemId = 2;
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

void ItemQuickIntense::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ItemQuickIntense* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ItemQuickIntense*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ItemQuickIntense::MergeFrom(const ItemQuickIntense& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_roleid()) {
      set_roleid(from.roleid());
    }
    if (from.has_itemid()) {
      set_itemid(from.itemid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ItemQuickIntense::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ItemQuickIntense::CopyFrom(const ItemQuickIntense& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ItemQuickIntense::IsInitialized() const {

  return true;
}

void ItemQuickIntense::Swap(ItemQuickIntense* other) {
  if (other != this) {
    std::swap(roleid_, other->roleid_);
    std::swap(itemid_, other->itemid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ItemQuickIntense::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ItemQuickIntense_descriptor_;
  metadata.reflection = ItemQuickIntense_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Message

// @@protoc_insertion_point(global_scope)