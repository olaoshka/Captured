// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: client2server.proto

#ifndef PROTOBUF_INCLUDED_client2server_2eproto
#define PROTOBUF_INCLUDED_client2server_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_client2server_2eproto 

namespace protobuf_client2server_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_client2server_2eproto
namespace client2server {
class Packet;
class PacketDefaultTypeInternal;
extern PacketDefaultTypeInternal _Packet_default_instance_;
}  // namespace client2server
namespace google {
namespace protobuf {
template<> ::client2server::Packet* Arena::CreateMaybeMessage<::client2server::Packet>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace client2server {

enum Move {
  UP = 0,
  RIGHT_UP = 1,
  RIGHT_DOWN = 2,
  DOWN = 3,
  LEFT_DOWN = 4,
  LEFT_UP = 5
};
bool Move_IsValid(int value);
const Move Move_MIN = UP;
const Move Move_MAX = LEFT_UP;
const int Move_ARRAYSIZE = Move_MAX + 1;

const ::google::protobuf::EnumDescriptor* Move_descriptor();
inline const ::std::string& Move_Name(Move value) {
  return ::google::protobuf::internal::NameOfEnum(
    Move_descriptor(), value);
}
inline bool Move_Parse(
    const ::std::string& name, Move* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Move>(
    Move_descriptor(), name, value);
}
// ===================================================================

class Packet : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:client2server.Packet) */ {
 public:
  Packet();
  virtual ~Packet();

  Packet(const Packet& from);

  inline Packet& operator=(const Packet& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Packet(Packet&& from) noexcept
    : Packet() {
    *this = ::std::move(from);
  }

  inline Packet& operator=(Packet&& from) noexcept {
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
  static const Packet& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Packet* internal_default_instance() {
    return reinterpret_cast<const Packet*>(
               &_Packet_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Packet* other);
  friend void swap(Packet& a, Packet& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Packet* New() const final {
    return CreateMaybeMessage<Packet>(NULL);
  }

  Packet* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Packet>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Packet& from);
  void MergeFrom(const Packet& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Packet* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required .client2server.Move direction = 1;
  bool has_direction() const;
  void clear_direction();
  static const int kDirectionFieldNumber = 1;
  ::client2server::Move direction() const;
  void set_direction(::client2server::Move value);

  // @@protoc_insertion_point(class_scope:client2server.Packet)
 private:
  void set_has_direction();
  void clear_has_direction();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  int direction_;
  friend struct ::protobuf_client2server_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Packet

// required .client2server.Move direction = 1;
inline bool Packet::has_direction() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Packet::set_has_direction() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Packet::clear_has_direction() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Packet::clear_direction() {
  direction_ = 0;
  clear_has_direction();
}
inline ::client2server::Move Packet::direction() const {
  // @@protoc_insertion_point(field_get:client2server.Packet.direction)
  return static_cast< ::client2server::Move >(direction_);
}
inline void Packet::set_direction(::client2server::Move value) {
  assert(::client2server::Move_IsValid(value));
  set_has_direction();
  direction_ = value;
  // @@protoc_insertion_point(field_set:client2server.Packet.direction)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace client2server

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::client2server::Move> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::client2server::Move>() {
  return ::client2server::Move_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_client2server_2eproto
