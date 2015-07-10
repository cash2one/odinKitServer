// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageCombatAward.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MessageCombatAward.pb.h"

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

const ::google::protobuf::Descriptor* CombatAward_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CombatAward_reflection_ = NULL;
const ::google::protobuf::Descriptor* CombatAward_Item_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CombatAward_Item_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_MessageCombatAward_2eproto() {
  protobuf_AddDesc_MessageCombatAward_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "MessageCombatAward.proto");
  GOOGLE_CHECK(file != NULL);
  CombatAward_descriptor_ = file->message_type(0);
  static const int CombatAward_offsets_[10] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CombatAward, record_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CombatAward, attackrecord_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CombatAward, defendrecord_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CombatAward, combatrecord_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CombatAward, dropitem_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CombatAward, prizeitem_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CombatAward, price2_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CombatAward, price3_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CombatAward, gainexp_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CombatAward, gainsilver_),
  };
  CombatAward_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      CombatAward_descriptor_,
      CombatAward::default_instance_,
      CombatAward_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CombatAward, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CombatAward, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(CombatAward));
  CombatAward_Item_descriptor_ = CombatAward_descriptor_->nested_type(0);
  static const int CombatAward_Item_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CombatAward_Item, itemid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CombatAward_Item, stack_),
  };
  CombatAward_Item_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      CombatAward_Item_descriptor_,
      CombatAward_Item::default_instance_,
      CombatAward_Item_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CombatAward_Item, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CombatAward_Item, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(CombatAward_Item));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_MessageCombatAward_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    CombatAward_descriptor_, &CombatAward::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    CombatAward_Item_descriptor_, &CombatAward_Item::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_MessageCombatAward_2eproto() {
  delete CombatAward::default_instance_;
  delete CombatAward_reflection_;
  delete CombatAward_Item::default_instance_;
  delete CombatAward_Item_reflection_;
}

void protobuf_AddDesc_MessageCombatAward_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\030MessageCombatAward.proto\022\007Message\"\246\002\n\013"
    "CombatAward\022\016\n\006record\030\002 \001(\005\022\024\n\014attackrec"
    "ord\030\003 \001(\005\022\024\n\014defendrecord\030\004 \001(\005\022\024\n\014comba"
    "trecord\030\005 \001(\005\022+\n\010dropitem\030\006 \003(\0132\031.Messag"
    "e.CombatAward.Item\022,\n\tprizeitem\030\007 \003(\0132\031."
    "Message.CombatAward.Item\022\016\n\006price2\030\010 \001(\005"
    "\022\016\n\006price3\030\t \001(\005\022\017\n\007gainexp\030\n \001(\005\022\022\n\ngai"
    "nsilver\030\013 \001(\005\032%\n\004Item\022\016\n\006itemid\030\001 \001(\005\022\r\n"
    "\005stack\030\002 \001(\005", 332);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MessageCombatAward.proto", &protobuf_RegisterTypes);
  CombatAward::default_instance_ = new CombatAward();
  CombatAward_Item::default_instance_ = new CombatAward_Item();
  CombatAward::default_instance_->InitAsDefaultInstance();
  CombatAward_Item::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MessageCombatAward_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MessageCombatAward_2eproto {
  StaticDescriptorInitializer_MessageCombatAward_2eproto() {
    protobuf_AddDesc_MessageCombatAward_2eproto();
  }
} static_descriptor_initializer_MessageCombatAward_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int CombatAward_Item::kItemidFieldNumber;
const int CombatAward_Item::kStackFieldNumber;
#endif  // !_MSC_VER

CombatAward_Item::CombatAward_Item()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void CombatAward_Item::InitAsDefaultInstance() {
}

CombatAward_Item::CombatAward_Item(const CombatAward_Item& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void CombatAward_Item::SharedCtor() {
  _cached_size_ = 0;
  itemid_ = 0;
  stack_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CombatAward_Item::~CombatAward_Item() {
  SharedDtor();
}

void CombatAward_Item::SharedDtor() {
  if (this != default_instance_) {
  }
}

void CombatAward_Item::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CombatAward_Item::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CombatAward_Item_descriptor_;
}

const CombatAward_Item& CombatAward_Item::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MessageCombatAward_2eproto();
  return *default_instance_;
}

CombatAward_Item* CombatAward_Item::default_instance_ = NULL;

CombatAward_Item* CombatAward_Item::New() const {
  return new CombatAward_Item;
}

void CombatAward_Item::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    itemid_ = 0;
    stack_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool CombatAward_Item::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 itemid = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &itemid_)));
          set_has_itemid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_stack;
        break;
      }

      // optional int32 stack = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_stack:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &stack_)));
          set_has_stack();
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

void CombatAward_Item::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 itemid = 1;
  if (has_itemid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->itemid(), output);
  }

  // optional int32 stack = 2;
  if (has_stack()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->stack(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* CombatAward_Item::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 itemid = 1;
  if (has_itemid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->itemid(), target);
  }

  // optional int32 stack = 2;
  if (has_stack()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->stack(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int CombatAward_Item::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 itemid = 1;
    if (has_itemid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->itemid());
    }

    // optional int32 stack = 2;
    if (has_stack()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->stack());
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

void CombatAward_Item::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const CombatAward_Item* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const CombatAward_Item*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void CombatAward_Item::MergeFrom(const CombatAward_Item& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_itemid()) {
      set_itemid(from.itemid());
    }
    if (from.has_stack()) {
      set_stack(from.stack());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CombatAward_Item::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CombatAward_Item::CopyFrom(const CombatAward_Item& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CombatAward_Item::IsInitialized() const {

  return true;
}

void CombatAward_Item::Swap(CombatAward_Item* other) {
  if (other != this) {
    std::swap(itemid_, other->itemid_);
    std::swap(stack_, other->stack_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata CombatAward_Item::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CombatAward_Item_descriptor_;
  metadata.reflection = CombatAward_Item_reflection_;
  return metadata;
}


// -------------------------------------------------------------------

#ifndef _MSC_VER
const int CombatAward::kRecordFieldNumber;
const int CombatAward::kAttackrecordFieldNumber;
const int CombatAward::kDefendrecordFieldNumber;
const int CombatAward::kCombatrecordFieldNumber;
const int CombatAward::kDropitemFieldNumber;
const int CombatAward::kPrizeitemFieldNumber;
const int CombatAward::kPrice2FieldNumber;
const int CombatAward::kPrice3FieldNumber;
const int CombatAward::kGainexpFieldNumber;
const int CombatAward::kGainsilverFieldNumber;
#endif  // !_MSC_VER

CombatAward::CombatAward()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void CombatAward::InitAsDefaultInstance() {
}

CombatAward::CombatAward(const CombatAward& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void CombatAward::SharedCtor() {
  _cached_size_ = 0;
  record_ = 0;
  attackrecord_ = 0;
  defendrecord_ = 0;
  combatrecord_ = 0;
  price2_ = 0;
  price3_ = 0;
  gainexp_ = 0;
  gainsilver_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CombatAward::~CombatAward() {
  SharedDtor();
}

void CombatAward::SharedDtor() {
  if (this != default_instance_) {
  }
}

void CombatAward::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CombatAward::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CombatAward_descriptor_;
}

const CombatAward& CombatAward::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MessageCombatAward_2eproto();
  return *default_instance_;
}

CombatAward* CombatAward::default_instance_ = NULL;

CombatAward* CombatAward::New() const {
  return new CombatAward;
}

void CombatAward::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    record_ = 0;
    attackrecord_ = 0;
    defendrecord_ = 0;
    combatrecord_ = 0;
    price2_ = 0;
    price3_ = 0;
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    gainexp_ = 0;
    gainsilver_ = 0;
  }
  dropitem_.Clear();
  prizeitem_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool CombatAward::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 record = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &record_)));
          set_has_record();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_attackrecord;
        break;
      }

      // optional int32 attackrecord = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_attackrecord:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &attackrecord_)));
          set_has_attackrecord();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_defendrecord;
        break;
      }

      // optional int32 defendrecord = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_defendrecord:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &defendrecord_)));
          set_has_defendrecord();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_combatrecord;
        break;
      }

      // optional int32 combatrecord = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_combatrecord:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &combatrecord_)));
          set_has_combatrecord();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(50)) goto parse_dropitem;
        break;
      }

      // repeated .Message.CombatAward.Item dropitem = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_dropitem:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_dropitem()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(50)) goto parse_dropitem;
        if (input->ExpectTag(58)) goto parse_prizeitem;
        break;
      }

      // repeated .Message.CombatAward.Item prizeitem = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_prizeitem:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_prizeitem()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(58)) goto parse_prizeitem;
        if (input->ExpectTag(64)) goto parse_price2;
        break;
      }

      // optional int32 price2 = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_price2:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &price2_)));
          set_has_price2();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(72)) goto parse_price3;
        break;
      }

      // optional int32 price3 = 9;
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_price3:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &price3_)));
          set_has_price3();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(80)) goto parse_gainexp;
        break;
      }

      // optional int32 gainexp = 10;
      case 10: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_gainexp:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &gainexp_)));
          set_has_gainexp();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(88)) goto parse_gainsilver;
        break;
      }

      // optional int32 gainsilver = 11;
      case 11: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_gainsilver:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &gainsilver_)));
          set_has_gainsilver();
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

void CombatAward::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 record = 2;
  if (has_record()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->record(), output);
  }

  // optional int32 attackrecord = 3;
  if (has_attackrecord()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->attackrecord(), output);
  }

  // optional int32 defendrecord = 4;
  if (has_defendrecord()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->defendrecord(), output);
  }

  // optional int32 combatrecord = 5;
  if (has_combatrecord()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->combatrecord(), output);
  }

  // repeated .Message.CombatAward.Item dropitem = 6;
  for (int i = 0; i < this->dropitem_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, this->dropitem(i), output);
  }

  // repeated .Message.CombatAward.Item prizeitem = 7;
  for (int i = 0; i < this->prizeitem_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      7, this->prizeitem(i), output);
  }

  // optional int32 price2 = 8;
  if (has_price2()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(8, this->price2(), output);
  }

  // optional int32 price3 = 9;
  if (has_price3()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(9, this->price3(), output);
  }

  // optional int32 gainexp = 10;
  if (has_gainexp()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(10, this->gainexp(), output);
  }

  // optional int32 gainsilver = 11;
  if (has_gainsilver()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(11, this->gainsilver(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* CombatAward::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 record = 2;
  if (has_record()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->record(), target);
  }

  // optional int32 attackrecord = 3;
  if (has_attackrecord()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->attackrecord(), target);
  }

  // optional int32 defendrecord = 4;
  if (has_defendrecord()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->defendrecord(), target);
  }

  // optional int32 combatrecord = 5;
  if (has_combatrecord()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->combatrecord(), target);
  }

  // repeated .Message.CombatAward.Item dropitem = 6;
  for (int i = 0; i < this->dropitem_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        6, this->dropitem(i), target);
  }

  // repeated .Message.CombatAward.Item prizeitem = 7;
  for (int i = 0; i < this->prizeitem_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        7, this->prizeitem(i), target);
  }

  // optional int32 price2 = 8;
  if (has_price2()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(8, this->price2(), target);
  }

  // optional int32 price3 = 9;
  if (has_price3()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(9, this->price3(), target);
  }

  // optional int32 gainexp = 10;
  if (has_gainexp()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(10, this->gainexp(), target);
  }

  // optional int32 gainsilver = 11;
  if (has_gainsilver()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(11, this->gainsilver(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int CombatAward::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 record = 2;
    if (has_record()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->record());
    }

    // optional int32 attackrecord = 3;
    if (has_attackrecord()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->attackrecord());
    }

    // optional int32 defendrecord = 4;
    if (has_defendrecord()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->defendrecord());
    }

    // optional int32 combatrecord = 5;
    if (has_combatrecord()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->combatrecord());
    }

    // optional int32 price2 = 8;
    if (has_price2()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->price2());
    }

    // optional int32 price3 = 9;
    if (has_price3()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->price3());
    }

  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // optional int32 gainexp = 10;
    if (has_gainexp()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->gainexp());
    }

    // optional int32 gainsilver = 11;
    if (has_gainsilver()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->gainsilver());
    }

  }
  // repeated .Message.CombatAward.Item dropitem = 6;
  total_size += 1 * this->dropitem_size();
  for (int i = 0; i < this->dropitem_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->dropitem(i));
  }

  // repeated .Message.CombatAward.Item prizeitem = 7;
  total_size += 1 * this->prizeitem_size();
  for (int i = 0; i < this->prizeitem_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->prizeitem(i));
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

void CombatAward::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const CombatAward* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const CombatAward*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void CombatAward::MergeFrom(const CombatAward& from) {
  GOOGLE_CHECK_NE(&from, this);
  dropitem_.MergeFrom(from.dropitem_);
  prizeitem_.MergeFrom(from.prizeitem_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_record()) {
      set_record(from.record());
    }
    if (from.has_attackrecord()) {
      set_attackrecord(from.attackrecord());
    }
    if (from.has_defendrecord()) {
      set_defendrecord(from.defendrecord());
    }
    if (from.has_combatrecord()) {
      set_combatrecord(from.combatrecord());
    }
    if (from.has_price2()) {
      set_price2(from.price2());
    }
    if (from.has_price3()) {
      set_price3(from.price3());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_gainexp()) {
      set_gainexp(from.gainexp());
    }
    if (from.has_gainsilver()) {
      set_gainsilver(from.gainsilver());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CombatAward::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CombatAward::CopyFrom(const CombatAward& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CombatAward::IsInitialized() const {

  return true;
}

void CombatAward::Swap(CombatAward* other) {
  if (other != this) {
    std::swap(record_, other->record_);
    std::swap(attackrecord_, other->attackrecord_);
    std::swap(defendrecord_, other->defendrecord_);
    std::swap(combatrecord_, other->combatrecord_);
    dropitem_.Swap(&other->dropitem_);
    prizeitem_.Swap(&other->prizeitem_);
    std::swap(price2_, other->price2_);
    std::swap(price3_, other->price3_);
    std::swap(gainexp_, other->gainexp_);
    std::swap(gainsilver_, other->gainsilver_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata CombatAward::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CombatAward_descriptor_;
  metadata.reflection = CombatAward_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Message

// @@protoc_insertion_point(global_scope)