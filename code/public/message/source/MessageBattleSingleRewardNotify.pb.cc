// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageBattleSingleRewardNotify.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MessageBattleSingleRewardNotify.pb.h"

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

const ::google::protobuf::Descriptor* BattleSingleRewardNotify_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  BattleSingleRewardNotify_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_MessageBattleSingleRewardNotify_2eproto() {
  protobuf_AddDesc_MessageBattleSingleRewardNotify_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "MessageBattleSingleRewardNotify.proto");
  GOOGLE_CHECK(file != NULL);
  BattleSingleRewardNotify_descriptor_ = file->message_type(0);
  static const int BattleSingleRewardNotify_offsets_[9] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BattleSingleRewardNotify, rewardexp_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BattleSingleRewardNotify, rewardstateexp_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BattleSingleRewardNotify, rewardsilver_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BattleSingleRewardNotify, rewardmerit_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BattleSingleRewardNotify, quatily_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BattleSingleRewardNotify, times_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BattleSingleRewardNotify, cost_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BattleSingleRewardNotify, rate_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BattleSingleRewardNotify, success_),
  };
  BattleSingleRewardNotify_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      BattleSingleRewardNotify_descriptor_,
      BattleSingleRewardNotify::default_instance_,
      BattleSingleRewardNotify_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BattleSingleRewardNotify, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BattleSingleRewardNotify, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(BattleSingleRewardNotify));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_MessageBattleSingleRewardNotify_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    BattleSingleRewardNotify_descriptor_, &BattleSingleRewardNotify::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_MessageBattleSingleRewardNotify_2eproto() {
  delete BattleSingleRewardNotify::default_instance_;
  delete BattleSingleRewardNotify_reflection_;
}

void protobuf_AddDesc_MessageBattleSingleRewardNotify_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n%MessageBattleSingleRewardNotify.proto\022"
    "\007Message\"\275\001\n\030BattleSingleRewardNotify\022\021\n"
    "\trewardexp\030\001 \001(\005\022\026\n\016rewardstateexp\030\002 \001(\005"
    "\022\024\n\014rewardsilver\030\003 \001(\005\022\023\n\013rewardmerit\030\004 "
    "\001(\005\022\017\n\007quatily\030\005 \001(\005\022\r\n\005times\030\006 \001(\005\022\014\n\004c"
    "ost\030\007 \001(\005\022\014\n\004rate\030\010 \001(\005\022\017\n\007success\030\t \001(\010", 240);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MessageBattleSingleRewardNotify.proto", &protobuf_RegisterTypes);
  BattleSingleRewardNotify::default_instance_ = new BattleSingleRewardNotify();
  BattleSingleRewardNotify::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MessageBattleSingleRewardNotify_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MessageBattleSingleRewardNotify_2eproto {
  StaticDescriptorInitializer_MessageBattleSingleRewardNotify_2eproto() {
    protobuf_AddDesc_MessageBattleSingleRewardNotify_2eproto();
  }
} static_descriptor_initializer_MessageBattleSingleRewardNotify_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int BattleSingleRewardNotify::kRewardexpFieldNumber;
const int BattleSingleRewardNotify::kRewardstateexpFieldNumber;
const int BattleSingleRewardNotify::kRewardsilverFieldNumber;
const int BattleSingleRewardNotify::kRewardmeritFieldNumber;
const int BattleSingleRewardNotify::kQuatilyFieldNumber;
const int BattleSingleRewardNotify::kTimesFieldNumber;
const int BattleSingleRewardNotify::kCostFieldNumber;
const int BattleSingleRewardNotify::kRateFieldNumber;
const int BattleSingleRewardNotify::kSuccessFieldNumber;
#endif  // !_MSC_VER

BattleSingleRewardNotify::BattleSingleRewardNotify()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void BattleSingleRewardNotify::InitAsDefaultInstance() {
}

BattleSingleRewardNotify::BattleSingleRewardNotify(const BattleSingleRewardNotify& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void BattleSingleRewardNotify::SharedCtor() {
  _cached_size_ = 0;
  rewardexp_ = 0;
  rewardstateexp_ = 0;
  rewardsilver_ = 0;
  rewardmerit_ = 0;
  quatily_ = 0;
  times_ = 0;
  cost_ = 0;
  rate_ = 0;
  success_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BattleSingleRewardNotify::~BattleSingleRewardNotify() {
  SharedDtor();
}

void BattleSingleRewardNotify::SharedDtor() {
  if (this != default_instance_) {
  }
}

void BattleSingleRewardNotify::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BattleSingleRewardNotify::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BattleSingleRewardNotify_descriptor_;
}

const BattleSingleRewardNotify& BattleSingleRewardNotify::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MessageBattleSingleRewardNotify_2eproto();
  return *default_instance_;
}

BattleSingleRewardNotify* BattleSingleRewardNotify::default_instance_ = NULL;

BattleSingleRewardNotify* BattleSingleRewardNotify::New() const {
  return new BattleSingleRewardNotify;
}

void BattleSingleRewardNotify::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    rewardexp_ = 0;
    rewardstateexp_ = 0;
    rewardsilver_ = 0;
    rewardmerit_ = 0;
    quatily_ = 0;
    times_ = 0;
    cost_ = 0;
    rate_ = 0;
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    success_ = false;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool BattleSingleRewardNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 rewardexp = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &rewardexp_)));
          set_has_rewardexp();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_rewardstateexp;
        break;
      }

      // optional int32 rewardstateexp = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_rewardstateexp:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &rewardstateexp_)));
          set_has_rewardstateexp();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_rewardsilver;
        break;
      }

      // optional int32 rewardsilver = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_rewardsilver:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &rewardsilver_)));
          set_has_rewardsilver();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_rewardmerit;
        break;
      }

      // optional int32 rewardmerit = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_rewardmerit:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &rewardmerit_)));
          set_has_rewardmerit();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_quatily;
        break;
      }

      // optional int32 quatily = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_quatily:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &quatily_)));
          set_has_quatily();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_times;
        break;
      }

      // optional int32 times = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_times:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &times_)));
          set_has_times();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(56)) goto parse_cost;
        break;
      }

      // optional int32 cost = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_cost:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &cost_)));
          set_has_cost();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(64)) goto parse_rate;
        break;
      }

      // optional int32 rate = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_rate:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &rate_)));
          set_has_rate();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(72)) goto parse_success;
        break;
      }

      // optional bool success = 9;
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_success:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &success_)));
          set_has_success();
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

void BattleSingleRewardNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 rewardexp = 1;
  if (has_rewardexp()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->rewardexp(), output);
  }

  // optional int32 rewardstateexp = 2;
  if (has_rewardstateexp()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->rewardstateexp(), output);
  }

  // optional int32 rewardsilver = 3;
  if (has_rewardsilver()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->rewardsilver(), output);
  }

  // optional int32 rewardmerit = 4;
  if (has_rewardmerit()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->rewardmerit(), output);
  }

  // optional int32 quatily = 5;
  if (has_quatily()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->quatily(), output);
  }

  // optional int32 times = 6;
  if (has_times()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->times(), output);
  }

  // optional int32 cost = 7;
  if (has_cost()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(7, this->cost(), output);
  }

  // optional int32 rate = 8;
  if (has_rate()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(8, this->rate(), output);
  }

  // optional bool success = 9;
  if (has_success()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(9, this->success(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* BattleSingleRewardNotify::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 rewardexp = 1;
  if (has_rewardexp()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->rewardexp(), target);
  }

  // optional int32 rewardstateexp = 2;
  if (has_rewardstateexp()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->rewardstateexp(), target);
  }

  // optional int32 rewardsilver = 3;
  if (has_rewardsilver()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->rewardsilver(), target);
  }

  // optional int32 rewardmerit = 4;
  if (has_rewardmerit()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->rewardmerit(), target);
  }

  // optional int32 quatily = 5;
  if (has_quatily()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->quatily(), target);
  }

  // optional int32 times = 6;
  if (has_times()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, this->times(), target);
  }

  // optional int32 cost = 7;
  if (has_cost()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(7, this->cost(), target);
  }

  // optional int32 rate = 8;
  if (has_rate()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(8, this->rate(), target);
  }

  // optional bool success = 9;
  if (has_success()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(9, this->success(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int BattleSingleRewardNotify::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 rewardexp = 1;
    if (has_rewardexp()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->rewardexp());
    }

    // optional int32 rewardstateexp = 2;
    if (has_rewardstateexp()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->rewardstateexp());
    }

    // optional int32 rewardsilver = 3;
    if (has_rewardsilver()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->rewardsilver());
    }

    // optional int32 rewardmerit = 4;
    if (has_rewardmerit()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->rewardmerit());
    }

    // optional int32 quatily = 5;
    if (has_quatily()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->quatily());
    }

    // optional int32 times = 6;
    if (has_times()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->times());
    }

    // optional int32 cost = 7;
    if (has_cost()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->cost());
    }

    // optional int32 rate = 8;
    if (has_rate()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->rate());
    }

  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // optional bool success = 9;
    if (has_success()) {
      total_size += 1 + 1;
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

void BattleSingleRewardNotify::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const BattleSingleRewardNotify* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const BattleSingleRewardNotify*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void BattleSingleRewardNotify::MergeFrom(const BattleSingleRewardNotify& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_rewardexp()) {
      set_rewardexp(from.rewardexp());
    }
    if (from.has_rewardstateexp()) {
      set_rewardstateexp(from.rewardstateexp());
    }
    if (from.has_rewardsilver()) {
      set_rewardsilver(from.rewardsilver());
    }
    if (from.has_rewardmerit()) {
      set_rewardmerit(from.rewardmerit());
    }
    if (from.has_quatily()) {
      set_quatily(from.quatily());
    }
    if (from.has_times()) {
      set_times(from.times());
    }
    if (from.has_cost()) {
      set_cost(from.cost());
    }
    if (from.has_rate()) {
      set_rate(from.rate());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_success()) {
      set_success(from.success());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void BattleSingleRewardNotify::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BattleSingleRewardNotify::CopyFrom(const BattleSingleRewardNotify& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BattleSingleRewardNotify::IsInitialized() const {

  return true;
}

void BattleSingleRewardNotify::Swap(BattleSingleRewardNotify* other) {
  if (other != this) {
    std::swap(rewardexp_, other->rewardexp_);
    std::swap(rewardstateexp_, other->rewardstateexp_);
    std::swap(rewardsilver_, other->rewardsilver_);
    std::swap(rewardmerit_, other->rewardmerit_);
    std::swap(quatily_, other->quatily_);
    std::swap(times_, other->times_);
    std::swap(cost_, other->cost_);
    std::swap(rate_, other->rate_);
    std::swap(success_, other->success_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata BattleSingleRewardNotify::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = BattleSingleRewardNotify_descriptor_;
  metadata.reflection = BattleSingleRewardNotify_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Message

// @@protoc_insertion_point(global_scope)