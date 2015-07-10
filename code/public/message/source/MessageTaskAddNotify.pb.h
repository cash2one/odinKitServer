// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageTaskAddNotify.proto

#ifndef PROTOBUF_MessageTaskAddNotify_2eproto__INCLUDED
#define PROTOBUF_MessageTaskAddNotify_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "MessageTaskSync.pb.h"
// @@protoc_insertion_point(includes)

namespace Message {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_MessageTaskAddNotify_2eproto();
void protobuf_AssignDesc_MessageTaskAddNotify_2eproto();
void protobuf_ShutdownFile_MessageTaskAddNotify_2eproto();

class TaskAddNotify;

// ===================================================================

class TaskAddNotify : public ::google::protobuf::Message {
 public:
  TaskAddNotify();
  virtual ~TaskAddNotify();

  TaskAddNotify(const TaskAddNotify& from);

  inline TaskAddNotify& operator=(const TaskAddNotify& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const TaskAddNotify& default_instance();

  void Swap(TaskAddNotify* other);

  // implements Message ----------------------------------------------

  TaskAddNotify* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TaskAddNotify& from);
  void MergeFrom(const TaskAddNotify& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .Message.Task tasks = 1;
  inline int tasks_size() const;
  inline void clear_tasks();
  static const int kTasksFieldNumber = 1;
  inline const ::Message::Task& tasks(int index) const;
  inline ::Message::Task* mutable_tasks(int index);
  inline ::Message::Task* add_tasks();
  inline const ::google::protobuf::RepeatedPtrField< ::Message::Task >&
      tasks() const;
  inline ::google::protobuf::RepeatedPtrField< ::Message::Task >*
      mutable_tasks();

  // @@protoc_insertion_point(class_scope:Message.TaskAddNotify)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::Message::Task > tasks_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_MessageTaskAddNotify_2eproto();
  friend void protobuf_AssignDesc_MessageTaskAddNotify_2eproto();
  friend void protobuf_ShutdownFile_MessageTaskAddNotify_2eproto();

  void InitAsDefaultInstance();
  static TaskAddNotify* default_instance_;
};
// ===================================================================


// ===================================================================

// TaskAddNotify

// repeated .Message.Task tasks = 1;
inline int TaskAddNotify::tasks_size() const {
  return tasks_.size();
}
inline void TaskAddNotify::clear_tasks() {
  tasks_.Clear();
}
inline const ::Message::Task& TaskAddNotify::tasks(int index) const {
  return tasks_.Get(index);
}
inline ::Message::Task* TaskAddNotify::mutable_tasks(int index) {
  return tasks_.Mutable(index);
}
inline ::Message::Task* TaskAddNotify::add_tasks() {
  return tasks_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::Message::Task >&
TaskAddNotify::tasks() const {
  return tasks_;
}
inline ::google::protobuf::RepeatedPtrField< ::Message::Task >*
TaskAddNotify::mutable_tasks() {
  return &tasks_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Message

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_MessageTaskAddNotify_2eproto__INCLUDED