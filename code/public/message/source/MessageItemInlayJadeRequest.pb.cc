// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageItemInlayJadeRequest.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MessageItemInlayJadeRequest.pb.h"

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

const ::google::protobuf::Descriptor* ItemInlayJadeRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ItemInlayJadeRequest_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_MessageItemInlayJadeRequest_2eproto() {
  protobuf_AddDesc_MessageItemInlayJadeRequest_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "MessageItemInlayJadeRequest.proto");
  GOOGLE_CHECK(file != NULL);
  ItemInlayJadeRequest_descriptor_ = file->message_type(0);
  static const int ItemInlayJadeRequest_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ItemInlayJadeRequest, roleid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ItemInlayJadeRequest, itemid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ItemInlayJadeRequest, soulid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ItemInlayJadeRequest, kongid_),
  };
  ItemInlayJadeRequest_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ItemInlayJadeRequest_descriptor_,
      ItemInlayJadeRequest::default_instance_,
      ItemInlayJadeRequest_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ItemInlayJadeRequest, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ItemInlayJadeRequest, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ItemInlayJadeRequest));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_MessageItemInlayJadeRequest_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ItemInlayJadeRequest_descriptor_, &ItemInlayJadeRequest::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_MessageItemInlayJadeRequest_2eproto() {
  delete ItemInlayJadeRequest::default_instance_;
  delete ItemInlayJadeRequest_reflection_;
}

void protobuf_AddDesc_MessageItemInlayJadeRequest_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n!MessageItemInlayJadeRequest.proto\022\007Mes"
    "sage\"V\n\024ItemInlayJadeRequest\022\016\n\006roleid\030\001"
    " \001(\003\022\016\n\006itemid\030\002 \001(\003\022\016\n\006soulid\030\003 \001(\003\022\016\n\006"
    "kongid\030\004 \001(\005", 132);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MessageItemInlayJadeRequest.proto", &protobuf_RegisterTypes);
  ItemInlayJadeRequest::default_instance_ = new ItemInlayJadeRequest();
  ItemInlayJadeRequest::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MessageItemInlayJadeRequest_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MessageItemInlayJadeRequest_2eproto {
  StaticDescriptorInitializer_MessageItemInlayJadeRequest_2eproto() {
    protobuf_AddDesc_MessageItemInlayJadeRequest_2eproto();
  }
} static_descriptor_initializer_MessageItemInlayJadeRequest_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int ItemInlayJadeRequest::kRoleidFieldNumber;
const int ItemInlayJadeRequest::kItemidFieldNumber;
const int ItemInlayJadeRequest::kSoulidFieldNumber;
const int ItemInlayJadeRequest::kKongidFieldNumber;
#endif  // !_MSC_VER

ItemInlayJadeRequest::ItemInlayJadeRequest()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void ItemInlayJadeRequest::InitAsDefaultInstance() {
}

ItemInlayJadeRequest::ItemInlayJadeRequest(const ItemInlayJadeRequest& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void ItemInlayJadeRequest::SharedCtor() {
  _cached_size_ = 0;
  roleid_ = GOOGLE_LONGLONG(0);
  itemid_ = GOOGLE_LONGLONG(0);
  soulid_ = GOOGLE_LONGLONG(0);
  kongid_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ItemInlayJadeRequest::~ItemInlayJadeRequest() {
  SharedDtor();
}

void ItemInlayJadeRequest::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ItemInlayJadeRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ItemInlayJadeRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ItemInlayJadeRequest_descriptor_;
}

const ItemInlayJadeRequest& ItemInlayJadeRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MessageItemInlayJadeRequest_2eproto();
  return *default_instance_;
}

ItemInlayJadeRequest* ItemInlayJadeRequest::default_instance_ = NULL;

ItemInlayJadeRequest* ItemInlayJadeRequest::New() const {
  return new ItemInlayJadeRequest;
}

void ItemInlayJadeRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    roleid_ = GOOGLE_LONGLONG(0);
    itemid_ = GOOGLE_LONGLONG(0);
    soulid_ = GOOGLE_LONGLONG(0);
    kongid_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ItemInlayJadeRequest::MergePartialFromCodedStream(
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
        if (input->ExpectTag(16)) goto parse_itemid;
        break;
      }

      // optional int64 itemid = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_itemid:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &itemid_)));
          set_has_itemid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_soulid;
        break;
      }

      // optional int64 soulid = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_soulid:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &soulid_)));
          set_has_soulid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_kongid;
        break;
      }

      // optional int32 kongid = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_kongid:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &kongid_)));
          set_has_kongid();
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

void ItemInlayJadeRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int64 roleid = 1;
  if (has_roleid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->roleid(), output);
  }

  // optional int64 itemid = 2;
  if (has_itemid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->itemid(), output);
  }

  // optional int64 soulid = 3;
  if (has_soulid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->soulid(), output);
  }

  // optional int32 kongid = 4;
  if (has_kongid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->kongid(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* ItemInlayJadeRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int64 roleid = 1;
  if (has_roleid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->roleid(), target);
  }

  // optional int64 itemid = 2;
  if (has_itemid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->itemid(), target);
  }

  // optional int64 soulid = 3;
  if (has_soulid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->soulid(), target);
  }

  // optional int32 kongid = 4;
  if (has_kongid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->kongid(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int ItemInlayJadeRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int64 roleid = 1;
    if (has_roleid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->roleid());
    }

    // optional int64 itemid = 2;
    if (has_itemid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->itemid());
    }

    // optional int64 soulid = 3;
    if (has_soulid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->soulid());
    }

    // optional int32 kongid = 4;
    if (has_kongid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->kongid());
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

void ItemInlayJadeRequest::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ItemInlayJadeRequest* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ItemInlayJadeRequest*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ItemInlayJadeRequest::MergeFrom(const ItemInlayJadeRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_roleid()) {
      set_roleid(from.roleid());
    }
    if (from.has_itemid()) {
      set_itemid(from.itemid());
    }
    if (from.has_soulid()) {
      set_soulid(from.soulid());
    }
    if (from.has_kongid()) {
      set_kongid(from.kongid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ItemInlayJadeRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ItemInlayJadeRequest::CopyFrom(const ItemInlayJadeRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ItemInlayJadeRequest::IsInitialized() const {

  return true;
}

void ItemInlayJadeRequest::Swap(ItemInlayJadeRequest* other) {
  if (other != this) {
    std::swap(roleid_, other->roleid_);
    std::swap(itemid_, other->itemid_);
    std::swap(soulid_, other->soulid_);
    std::swap(kongid_, other->kongid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ItemInlayJadeRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ItemInlayJadeRequest_descriptor_;
  metadata.reflection = ItemInlayJadeRequest_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Message

// @@protoc_insertion_point(global_scope)