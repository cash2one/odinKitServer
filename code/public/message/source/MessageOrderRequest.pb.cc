// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageOrderRequest.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MessageOrderRequest.pb.h"

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

const ::google::protobuf::Descriptor* OrderDataRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  OrderDataRequest_reflection_ = NULL;
const ::google::protobuf::Descriptor* OrderDataResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  OrderDataResponse_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_MessageOrderRequest_2eproto() {
  protobuf_AddDesc_MessageOrderRequest_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "MessageOrderRequest.proto");
  GOOGLE_CHECK(file != NULL);
  OrderDataRequest_descriptor_ = file->message_type(0);
  static const int OrderDataRequest_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OrderDataRequest, index_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OrderDataRequest, type_),
  };
  OrderDataRequest_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      OrderDataRequest_descriptor_,
      OrderDataRequest::default_instance_,
      OrderDataRequest_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OrderDataRequest, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OrderDataRequest, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(OrderDataRequest));
  OrderDataResponse_descriptor_ = file->message_type(1);
  static const int OrderDataResponse_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OrderDataResponse, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OrderDataResponse, end_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OrderDataResponse, player_),
  };
  OrderDataResponse_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      OrderDataResponse_descriptor_,
      OrderDataResponse::default_instance_,
      OrderDataResponse_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OrderDataResponse, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OrderDataResponse, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(OrderDataResponse));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_MessageOrderRequest_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    OrderDataRequest_descriptor_, &OrderDataRequest::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    OrderDataResponse_descriptor_, &OrderDataResponse::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_MessageOrderRequest_2eproto() {
  delete OrderDataRequest::default_instance_;
  delete OrderDataRequest_reflection_;
  delete OrderDataResponse::default_instance_;
  delete OrderDataResponse_reflection_;
}

void protobuf_AddDesc_MessageOrderRequest_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::Message::protobuf_AddDesc_MessageArenaPlayerData_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\031MessageOrderRequest.proto\022\007Message\032\034Me"
    "ssageArenaPlayerData.proto\"/\n\020OrderDataR"
    "equest\022\r\n\005index\030\001 \001(\005\022\014\n\004type\030\002 \001(\005\"T\n\021O"
    "rderDataResponse\022\014\n\004type\030\001 \001(\005\022\013\n\003end\030\002 "
    "\001(\005\022$\n\006player\030\003 \001(\0132\024.Message.ArenaPlaye"
    "r", 201);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MessageOrderRequest.proto", &protobuf_RegisterTypes);
  OrderDataRequest::default_instance_ = new OrderDataRequest();
  OrderDataResponse::default_instance_ = new OrderDataResponse();
  OrderDataRequest::default_instance_->InitAsDefaultInstance();
  OrderDataResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MessageOrderRequest_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MessageOrderRequest_2eproto {
  StaticDescriptorInitializer_MessageOrderRequest_2eproto() {
    protobuf_AddDesc_MessageOrderRequest_2eproto();
  }
} static_descriptor_initializer_MessageOrderRequest_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int OrderDataRequest::kIndexFieldNumber;
const int OrderDataRequest::kTypeFieldNumber;
#endif  // !_MSC_VER

OrderDataRequest::OrderDataRequest()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void OrderDataRequest::InitAsDefaultInstance() {
}

OrderDataRequest::OrderDataRequest(const OrderDataRequest& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void OrderDataRequest::SharedCtor() {
  _cached_size_ = 0;
  index_ = 0;
  type_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

OrderDataRequest::~OrderDataRequest() {
  SharedDtor();
}

void OrderDataRequest::SharedDtor() {
  if (this != default_instance_) {
  }
}

void OrderDataRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* OrderDataRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return OrderDataRequest_descriptor_;
}

const OrderDataRequest& OrderDataRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MessageOrderRequest_2eproto();
  return *default_instance_;
}

OrderDataRequest* OrderDataRequest::default_instance_ = NULL;

OrderDataRequest* OrderDataRequest::New() const {
  return new OrderDataRequest;
}

void OrderDataRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    index_ = 0;
    type_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool OrderDataRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 index = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &index_)));
          set_has_index();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_type;
        break;
      }

      // optional int32 type = 2;
      case 2: {
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

void OrderDataRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 index = 1;
  if (has_index()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->index(), output);
  }

  // optional int32 type = 2;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->type(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* OrderDataRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 index = 1;
  if (has_index()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->index(), target);
  }

  // optional int32 type = 2;
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->type(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int OrderDataRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 index = 1;
    if (has_index()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->index());
    }

    // optional int32 type = 2;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->type());
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

void OrderDataRequest::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const OrderDataRequest* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const OrderDataRequest*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void OrderDataRequest::MergeFrom(const OrderDataRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_index()) {
      set_index(from.index());
    }
    if (from.has_type()) {
      set_type(from.type());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void OrderDataRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void OrderDataRequest::CopyFrom(const OrderDataRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool OrderDataRequest::IsInitialized() const {

  return true;
}

void OrderDataRequest::Swap(OrderDataRequest* other) {
  if (other != this) {
    std::swap(index_, other->index_);
    std::swap(type_, other->type_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata OrderDataRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = OrderDataRequest_descriptor_;
  metadata.reflection = OrderDataRequest_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int OrderDataResponse::kTypeFieldNumber;
const int OrderDataResponse::kEndFieldNumber;
const int OrderDataResponse::kPlayerFieldNumber;
#endif  // !_MSC_VER

OrderDataResponse::OrderDataResponse()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void OrderDataResponse::InitAsDefaultInstance() {
  player_ = const_cast< ::Message::ArenaPlayer*>(&::Message::ArenaPlayer::default_instance());
}

OrderDataResponse::OrderDataResponse(const OrderDataResponse& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void OrderDataResponse::SharedCtor() {
  _cached_size_ = 0;
  type_ = 0;
  end_ = 0;
  player_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

OrderDataResponse::~OrderDataResponse() {
  SharedDtor();
}

void OrderDataResponse::SharedDtor() {
  if (this != default_instance_) {
    delete player_;
  }
}

void OrderDataResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* OrderDataResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return OrderDataResponse_descriptor_;
}

const OrderDataResponse& OrderDataResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MessageOrderRequest_2eproto();
  return *default_instance_;
}

OrderDataResponse* OrderDataResponse::default_instance_ = NULL;

OrderDataResponse* OrderDataResponse::New() const {
  return new OrderDataResponse;
}

void OrderDataResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    type_ = 0;
    end_ = 0;
    if (has_player()) {
      if (player_ != NULL) player_->::Message::ArenaPlayer::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool OrderDataResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 type = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &type_)));
          set_has_type();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_end;
        break;
      }

      // optional int32 end = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_end:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &end_)));
          set_has_end();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_player;
        break;
      }

      // optional .Message.ArenaPlayer player = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_player:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_player()));
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

void OrderDataResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 type = 1;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->type(), output);
  }

  // optional int32 end = 2;
  if (has_end()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->end(), output);
  }

  // optional .Message.ArenaPlayer player = 3;
  if (has_player()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->player(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* OrderDataResponse::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 type = 1;
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->type(), target);
  }

  // optional int32 end = 2;
  if (has_end()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->end(), target);
  }

  // optional .Message.ArenaPlayer player = 3;
  if (has_player()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        3, this->player(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int OrderDataResponse::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 type = 1;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->type());
    }

    // optional int32 end = 2;
    if (has_end()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->end());
    }

    // optional .Message.ArenaPlayer player = 3;
    if (has_player()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->player());
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

void OrderDataResponse::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const OrderDataResponse* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const OrderDataResponse*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void OrderDataResponse::MergeFrom(const OrderDataResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_end()) {
      set_end(from.end());
    }
    if (from.has_player()) {
      mutable_player()->::Message::ArenaPlayer::MergeFrom(from.player());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void OrderDataResponse::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void OrderDataResponse::CopyFrom(const OrderDataResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool OrderDataResponse::IsInitialized() const {

  return true;
}

void OrderDataResponse::Swap(OrderDataResponse* other) {
  if (other != this) {
    std::swap(type_, other->type_);
    std::swap(end_, other->end_);
    std::swap(player_, other->player_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata OrderDataResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = OrderDataResponse_descriptor_;
  metadata.reflection = OrderDataResponse_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Message

// @@protoc_insertion_point(global_scope)