// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageTypeDefine.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MessageTypeDefine.pb.h"

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

const ::google::protobuf::EnumDescriptor* MsgDefine_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_MessageTypeDefine_2eproto() {
  protobuf_AddDesc_MessageTypeDefine_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "MessageTypeDefine.proto");
  GOOGLE_CHECK(file != NULL);
  MsgDefine_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_MessageTypeDefine_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_MessageTypeDefine_2eproto() {
}

void protobuf_AddDesc_MessageTypeDefine_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\027MessageTypeDefine.proto\022\007Message*\215\014\n\tM"
    "sgDefine\022\024\n\020MSG_SERVER_BEGIN\020\000\022\027\n\023MSG_SE"
    "RVER_REGISTER\020\001\022\031\n\025MSG_SERVER_SYNCSERVER"
    "\020\002\022\033\n\027MSG_SERVER_SYNCGATELOAD\020\003\022\034\n\030MSG_S"
    "ERVER_WORLD_REQUEST\020\004\022\035\n\031MSG_SERVER_WORL"
    "D_RESPONSE\020\005\022\031\n\025MSG_SERVER_NET_ACCEPT\020\006\022"
    "\030\n\024MSG_SERVER_NET_CLOSE\020\007\022\032\n\026MSG_SERVER_"
    "NET_CONNECT\020\010\022\024\n\020MSG_COMMON_ERROR\020d\022\024\n\020M"
    "SG_COMMON_EVENT\020e\022\027\n\022MSG_GAMEOBJ_CREATE\020"
    "\310\001\022\027\n\022MSG_GAMEOBJ_REMOVE\020\311\001\022 \n\033MSG_GAMEO"
    "BJ_OBJFIELD_SETI32\020\312\001\022 \n\033MSG_GAMEOBJ_OBJ"
    "FIELD_SETI64\020\313\001\022 \n\033MSG_GAMEOBJ_OBJFIELD_"
    "SETSTR\020\314\001\022 \n\033MSG_GAMEOBJ_OBJFIELD_SETALL"
    "\020\315\001\022\035\n\030MSG_GAMEOBJ_MAPFIELD_SET\020\316\001\022\035\n\030MS"
    "G_GAMEOBJ_MAPFIELD_ADD\020\317\001\022\035\n\030MSG_GAMEOBJ"
    "_MAPFIELD_DEL\020\320\001\022\025\n\020MSG_GAMEOBJ_SYNC\020\321\001\022"
    "\036\n\031MSG_GAMEOBJ_SYNC_OBJFIELD\020\322\001\022\036\n\031MSG_G"
    "AMEOBJ_SYNC_MAPFIELD\020\323\001\022\034\n\027MSG_GAMEOBJ_S"
    "YNC_FINISH\020\324\001\022\035\n\030MSG_GAMEOBJ_LOAD_REQUES"
    "T\020\325\001\022\036\n\031MSG_GAMEOBJ_LOGIN_REQUEST\020\326\001\022\035\n\030"
    "MSG_USER_PRLOGIN_REQUEST\020\254\002\022\033\n\026MSG_USER_"
    "lOGIN_REQUEST\020\255\002\022\026\n\021MSG_USER_DISPLACE\020\256\002"
    "\022\031\n\024MSG_USER_GET_GATESVR\020\257\002\022\034\n\027MSG_USER_"
    "HEART_RESPONSE\020\260\002\022\035\n\030MSG_PLAYER_LOGIN_RE"
    "QUEST\020\220\003\022\036\n\031MSG_PLAYER_LOGOUT_REQEUST\020\221\003"
    "\022!\n\034MSG_PLAYER_CHECKNAME_REQUEST\020\222\003\022\"\n\035M"
    "SG_PLAYER_CHECKNAME_RESPONSE\020\223\003\022\032\n\025MSG_P"
    "LAYER_LOAD_COUNT\020\224\003\022\031\n\024MSG_PLAYER_LOAD_D"
    "ATA\020\225\003\022\031\n\024MSG_PLAYER_LOAD_OVER\020\226\003\022\034\n\027MSG"
    "_PLAYER_SYNC_ATTRINT\020\227\003\022\034\n\027MSG_PLAYER_SY"
    "NC_ATTRI64\020\230\003\022\024\n\016MSG_SERVER_END\020\257\352\001\022\026\n\020M"
    "SG_CLIENT_BEGIN\020\260\352\001\022\034\n\026MSG_REQUEST_USER_"
    "CHECK\020\261\352\001\022\035\n\027MSG_REQUEST_GUEST_CHECK\020\262\352\001"
    "\022\034\n\026MSG_REQUEST_USER_LOGIN\020\263\352\001\022\035\n\027MSG_RE"
    "QUEST_USER_LOGOUT\020\264\352\001\022\034\n\026MSG_REQUEST_USE"
    "R_HEART\020\265\352\001\022\037\n\031MSG_REQUEST_PLAYER_CREATE"
    "\020\266\352\001\022\037\n\031MSG_REQUEST_PLAYER_DELETE\020\267\352\001\022 \n"
    "\032MSG_REQUEST_PLAYER_OBSERVE\020\270\352\001\022\027\n\021MSG_R"
    "EQUEST_DEBUG\020\340\324\003\022\032\n\024MSG_REQUEST_NET_TEST"
    "\020\341\324\003\022\024\n\016MSG_CLIENT_END\020\377\377\003", 1586);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MessageTypeDefine.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MessageTypeDefine_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MessageTypeDefine_2eproto {
  StaticDescriptorInitializer_MessageTypeDefine_2eproto() {
    protobuf_AddDesc_MessageTypeDefine_2eproto();
  }
} static_descriptor_initializer_MessageTypeDefine_2eproto_;
const ::google::protobuf::EnumDescriptor* MsgDefine_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MsgDefine_descriptor_;
}
bool MsgDefine_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 100:
    case 101:
    case 200:
    case 201:
    case 202:
    case 203:
    case 204:
    case 205:
    case 206:
    case 207:
    case 208:
    case 209:
    case 210:
    case 211:
    case 212:
    case 213:
    case 214:
    case 300:
    case 301:
    case 302:
    case 303:
    case 304:
    case 400:
    case 401:
    case 402:
    case 403:
    case 404:
    case 405:
    case 406:
    case 407:
    case 408:
    case 29999:
    case 30000:
    case 30001:
    case 30002:
    case 30003:
    case 30004:
    case 30005:
    case 30006:
    case 30007:
    case 30008:
    case 60000:
    case 60001:
    case 65535:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Message

// @@protoc_insertion_point(global_scope)
