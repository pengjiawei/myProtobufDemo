// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: hello.proto

#ifndef PROTOBUF_hello_2eproto_INCLUDED
#define PROTOBUF_hello_2eproto_INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_hello_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsHelloWorldImpl();
void InitDefaultsHelloWorld();
void InitDefaultsHelloArrayImpl();
void InitDefaultsHelloArray();
inline void InitDefaults() {
  InitDefaultsHelloWorld();
  InitDefaultsHelloArray();
}
}  // namespace protobuf_hello_2eproto
namespace hello {
class HelloArray;
class HelloArrayDefaultTypeInternal;
extern HelloArrayDefaultTypeInternal _HelloArray_default_instance_;
class HelloWorld;
class HelloWorldDefaultTypeInternal;
extern HelloWorldDefaultTypeInternal _HelloWorld_default_instance_;
}  // namespace hello
namespace google {
namespace protobuf {
template<> ::hello::HelloArray* Arena::Create< ::hello::HelloArray>(Arena*);
template<> ::hello::HelloWorld* Arena::Create< ::hello::HelloWorld>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace hello {

// ===================================================================

class HelloWorld : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:hello.HelloWorld) */ {
 public:
  HelloWorld();
  virtual ~HelloWorld();

  HelloWorld(const HelloWorld& from);

  inline HelloWorld& operator=(const HelloWorld& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  HelloWorld(HelloWorld&& from) noexcept
    : HelloWorld() {
    *this = ::std::move(from);
  }

  inline HelloWorld& operator=(HelloWorld&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const HelloWorld& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const HelloWorld* internal_default_instance() {
    return reinterpret_cast<const HelloWorld*>(
               &_HelloWorld_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(HelloWorld* other);
  friend void swap(HelloWorld& a, HelloWorld& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline HelloWorld* New() const PROTOBUF_FINAL {
    return ::google::protobuf::Arena::Create<HelloWorld>(NULL);
  }

  HelloWorld* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL {
    return ::google::protobuf::Arena::Create<HelloWorld>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const HelloWorld& from);
  void MergeFrom(const HelloWorld& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(HelloWorld* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 x = 1;
  bool has_x() const;
  void clear_x();
  static const int kXFieldNumber = 1;
  ::google::protobuf::int32 x() const;
  void set_x(::google::protobuf::int32 value);

  // required int32 y = 2;
  bool has_y() const;
  void clear_y();
  static const int kYFieldNumber = 2;
  ::google::protobuf::int32 y() const;
  void set_y(::google::protobuf::int32 value);

  // optional int32 valid = 3;
  bool has_valid() const;
  void clear_valid();
  static const int kValidFieldNumber = 3;
  ::google::protobuf::int32 valid() const;
  void set_valid(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:hello.HelloWorld)
 private:
  void set_has_x();
  void clear_has_x();
  void set_has_y();
  void clear_has_y();
  void set_has_valid();
  void clear_has_valid();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::int32 x_;
  ::google::protobuf::int32 y_;
  ::google::protobuf::int32 valid_;
  friend struct ::protobuf_hello_2eproto::TableStruct;
  friend void ::protobuf_hello_2eproto::InitDefaultsHelloWorldImpl();
};
// -------------------------------------------------------------------

class HelloArray : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:hello.HelloArray) */ {
 public:
  HelloArray();
  virtual ~HelloArray();

  HelloArray(const HelloArray& from);

  inline HelloArray& operator=(const HelloArray& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  HelloArray(HelloArray&& from) noexcept
    : HelloArray() {
    *this = ::std::move(from);
  }

  inline HelloArray& operator=(HelloArray&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const HelloArray& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const HelloArray* internal_default_instance() {
    return reinterpret_cast<const HelloArray*>(
               &_HelloArray_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(HelloArray* other);
  friend void swap(HelloArray& a, HelloArray& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline HelloArray* New() const PROTOBUF_FINAL {
    return ::google::protobuf::Arena::Create<HelloArray>(NULL);
  }

  HelloArray* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL {
    return ::google::protobuf::Arena::Create<HelloArray>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const HelloArray& from);
  void MergeFrom(const HelloArray& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(HelloArray* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .hello.HelloWorld helloWorld = 1;
  int helloworld_size() const;
  void clear_helloworld();
  static const int kHelloWorldFieldNumber = 1;
  ::hello::HelloWorld* mutable_helloworld(int index);
  ::google::protobuf::RepeatedPtrField< ::hello::HelloWorld >*
      mutable_helloworld();
  const ::hello::HelloWorld& helloworld(int index) const;
  ::hello::HelloWorld* add_helloworld();
  const ::google::protobuf::RepeatedPtrField< ::hello::HelloWorld >&
      helloworld() const;

  // @@protoc_insertion_point(class_scope:hello.HelloArray)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::hello::HelloWorld > helloworld_;
  friend struct ::protobuf_hello_2eproto::TableStruct;
  friend void ::protobuf_hello_2eproto::InitDefaultsHelloArrayImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// HelloWorld

// required int32 x = 1;
inline bool HelloWorld::has_x() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void HelloWorld::set_has_x() {
  _has_bits_[0] |= 0x00000001u;
}
inline void HelloWorld::clear_has_x() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void HelloWorld::clear_x() {
  x_ = 0;
  clear_has_x();
}
inline ::google::protobuf::int32 HelloWorld::x() const {
  // @@protoc_insertion_point(field_get:hello.HelloWorld.x)
  return x_;
}
inline void HelloWorld::set_x(::google::protobuf::int32 value) {
  set_has_x();
  x_ = value;
  // @@protoc_insertion_point(field_set:hello.HelloWorld.x)
}

// required int32 y = 2;
inline bool HelloWorld::has_y() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void HelloWorld::set_has_y() {
  _has_bits_[0] |= 0x00000002u;
}
inline void HelloWorld::clear_has_y() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void HelloWorld::clear_y() {
  y_ = 0;
  clear_has_y();
}
inline ::google::protobuf::int32 HelloWorld::y() const {
  // @@protoc_insertion_point(field_get:hello.HelloWorld.y)
  return y_;
}
inline void HelloWorld::set_y(::google::protobuf::int32 value) {
  set_has_y();
  y_ = value;
  // @@protoc_insertion_point(field_set:hello.HelloWorld.y)
}

// optional int32 valid = 3;
inline bool HelloWorld::has_valid() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void HelloWorld::set_has_valid() {
  _has_bits_[0] |= 0x00000004u;
}
inline void HelloWorld::clear_has_valid() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void HelloWorld::clear_valid() {
  valid_ = 0;
  clear_has_valid();
}
inline ::google::protobuf::int32 HelloWorld::valid() const {
  // @@protoc_insertion_point(field_get:hello.HelloWorld.valid)
  return valid_;
}
inline void HelloWorld::set_valid(::google::protobuf::int32 value) {
  set_has_valid();
  valid_ = value;
  // @@protoc_insertion_point(field_set:hello.HelloWorld.valid)
}

// -------------------------------------------------------------------

// HelloArray

// repeated .hello.HelloWorld helloWorld = 1;
inline int HelloArray::helloworld_size() const {
  return helloworld_.size();
}
inline void HelloArray::clear_helloworld() {
  helloworld_.Clear();
}
inline ::hello::HelloWorld* HelloArray::mutable_helloworld(int index) {
  // @@protoc_insertion_point(field_mutable:hello.HelloArray.helloWorld)
  return helloworld_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::hello::HelloWorld >*
HelloArray::mutable_helloworld() {
  // @@protoc_insertion_point(field_mutable_list:hello.HelloArray.helloWorld)
  return &helloworld_;
}
inline const ::hello::HelloWorld& HelloArray::helloworld(int index) const {
  // @@protoc_insertion_point(field_get:hello.HelloArray.helloWorld)
  return helloworld_.Get(index);
}
inline ::hello::HelloWorld* HelloArray::add_helloworld() {
  // @@protoc_insertion_point(field_add:hello.HelloArray.helloWorld)
  return helloworld_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::hello::HelloWorld >&
HelloArray::helloworld() const {
  // @@protoc_insertion_point(field_list:hello.HelloArray.helloWorld)
  return helloworld_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace hello

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_hello_2eproto_INCLUDED
