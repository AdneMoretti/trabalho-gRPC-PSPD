// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dictionary.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_dictionary_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_dictionary_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_dictionary_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_dictionary_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_dictionary_2eproto;
class WordEntry;
class WordEntryDefaultTypeInternal;
extern WordEntryDefaultTypeInternal _WordEntry_default_instance_;
class WordRequest;
class WordRequestDefaultTypeInternal;
extern WordRequestDefaultTypeInternal _WordRequest_default_instance_;
class WordResponse;
class WordResponseDefaultTypeInternal;
extern WordResponseDefaultTypeInternal _WordResponse_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::WordEntry* Arena::CreateMaybeMessage<::WordEntry>(Arena*);
template<> ::WordRequest* Arena::CreateMaybeMessage<::WordRequest>(Arena*);
template<> ::WordResponse* Arena::CreateMaybeMessage<::WordResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class WordRequest PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:WordRequest) */ {
 public:
  inline WordRequest() : WordRequest(nullptr) {};
  virtual ~WordRequest();

  WordRequest(const WordRequest& from);
  WordRequest(WordRequest&& from) noexcept
    : WordRequest() {
    *this = ::std::move(from);
  }

  inline WordRequest& operator=(const WordRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline WordRequest& operator=(WordRequest&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const WordRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const WordRequest* internal_default_instance() {
    return reinterpret_cast<const WordRequest*>(
               &_WordRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(WordRequest& a, WordRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(WordRequest* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(WordRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline WordRequest* New() const final {
    return CreateMaybeMessage<WordRequest>(nullptr);
  }

  WordRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<WordRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const WordRequest& from);
  void MergeFrom(const WordRequest& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(WordRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "WordRequest";
  }
  protected:
  explicit WordRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_dictionary_2eproto);
    return ::descriptor_table_dictionary_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kWordFieldNumber = 1,
  };
  // string word = 1;
  void clear_word();
  const std::string& word() const;
  void set_word(const std::string& value);
  void set_word(std::string&& value);
  void set_word(const char* value);
  void set_word(const char* value, size_t size);
  std::string* mutable_word();
  std::string* release_word();
  void set_allocated_word(std::string* word);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_word();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_word(
      std::string* word);
  private:
  const std::string& _internal_word() const;
  void _internal_set_word(const std::string& value);
  std::string* _internal_mutable_word();
  public:

  // @@protoc_insertion_point(class_scope:WordRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr word_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_dictionary_2eproto;
};
// -------------------------------------------------------------------

class WordResponse PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:WordResponse) */ {
 public:
  inline WordResponse() : WordResponse(nullptr) {};
  virtual ~WordResponse();

  WordResponse(const WordResponse& from);
  WordResponse(WordResponse&& from) noexcept
    : WordResponse() {
    *this = ::std::move(from);
  }

  inline WordResponse& operator=(const WordResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline WordResponse& operator=(WordResponse&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const WordResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const WordResponse* internal_default_instance() {
    return reinterpret_cast<const WordResponse*>(
               &_WordResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(WordResponse& a, WordResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(WordResponse* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(WordResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline WordResponse* New() const final {
    return CreateMaybeMessage<WordResponse>(nullptr);
  }

  WordResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<WordResponse>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const WordResponse& from);
  void MergeFrom(const WordResponse& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(WordResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "WordResponse";
  }
  protected:
  explicit WordResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_dictionary_2eproto);
    return ::descriptor_table_dictionary_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kEntriesFieldNumber = 2,
    kMessageFieldNumber = 1,
  };
  // repeated .WordEntry entries = 2;
  int entries_size() const;
  private:
  int _internal_entries_size() const;
  public:
  void clear_entries();
  ::WordEntry* mutable_entries(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::WordEntry >*
      mutable_entries();
  private:
  const ::WordEntry& _internal_entries(int index) const;
  ::WordEntry* _internal_add_entries();
  public:
  const ::WordEntry& entries(int index) const;
  ::WordEntry* add_entries();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::WordEntry >&
      entries() const;

  // string message = 1;
  void clear_message();
  const std::string& message() const;
  void set_message(const std::string& value);
  void set_message(std::string&& value);
  void set_message(const char* value);
  void set_message(const char* value, size_t size);
  std::string* mutable_message();
  std::string* release_message();
  void set_allocated_message(std::string* message);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_message();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_message(
      std::string* message);
  private:
  const std::string& _internal_message() const;
  void _internal_set_message(const std::string& value);
  std::string* _internal_mutable_message();
  public:

  // @@protoc_insertion_point(class_scope:WordResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::WordEntry > entries_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr message_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_dictionary_2eproto;
};
// -------------------------------------------------------------------

class WordEntry PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:WordEntry) */ {
 public:
  inline WordEntry() : WordEntry(nullptr) {};
  virtual ~WordEntry();

  WordEntry(const WordEntry& from);
  WordEntry(WordEntry&& from) noexcept
    : WordEntry() {
    *this = ::std::move(from);
  }

  inline WordEntry& operator=(const WordEntry& from) {
    CopyFrom(from);
    return *this;
  }
  inline WordEntry& operator=(WordEntry&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const WordEntry& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const WordEntry* internal_default_instance() {
    return reinterpret_cast<const WordEntry*>(
               &_WordEntry_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(WordEntry& a, WordEntry& b) {
    a.Swap(&b);
  }
  inline void Swap(WordEntry* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(WordEntry* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline WordEntry* New() const final {
    return CreateMaybeMessage<WordEntry>(nullptr);
  }

  WordEntry* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<WordEntry>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const WordEntry& from);
  void MergeFrom(const WordEntry& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(WordEntry* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "WordEntry";
  }
  protected:
  explicit WordEntry(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_dictionary_2eproto);
    return ::descriptor_table_dictionary_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kWordFieldNumber = 1,
    kCountFieldNumber = 2,
  };
  // string word = 1;
  void clear_word();
  const std::string& word() const;
  void set_word(const std::string& value);
  void set_word(std::string&& value);
  void set_word(const char* value);
  void set_word(const char* value, size_t size);
  std::string* mutable_word();
  std::string* release_word();
  void set_allocated_word(std::string* word);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_word();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_word(
      std::string* word);
  private:
  const std::string& _internal_word() const;
  void _internal_set_word(const std::string& value);
  std::string* _internal_mutable_word();
  public:

  // int32 count = 2;
  void clear_count();
  ::PROTOBUF_NAMESPACE_ID::int32 count() const;
  void set_count(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_count() const;
  void _internal_set_count(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:WordEntry)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr word_;
  ::PROTOBUF_NAMESPACE_ID::int32 count_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_dictionary_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// WordRequest

// string word = 1;
inline void WordRequest::clear_word() {
  word_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& WordRequest::word() const {
  // @@protoc_insertion_point(field_get:WordRequest.word)
  return _internal_word();
}
inline void WordRequest::set_word(const std::string& value) {
  _internal_set_word(value);
  // @@protoc_insertion_point(field_set:WordRequest.word)
}
inline std::string* WordRequest::mutable_word() {
  // @@protoc_insertion_point(field_mutable:WordRequest.word)
  return _internal_mutable_word();
}
inline const std::string& WordRequest::_internal_word() const {
  return word_.Get();
}
inline void WordRequest::_internal_set_word(const std::string& value) {
  
  word_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void WordRequest::set_word(std::string&& value) {
  
  word_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:WordRequest.word)
}
inline void WordRequest::set_word(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  word_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:WordRequest.word)
}
inline void WordRequest::set_word(const char* value,
    size_t size) {
  
  word_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:WordRequest.word)
}
inline std::string* WordRequest::_internal_mutable_word() {
  
  return word_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* WordRequest::release_word() {
  // @@protoc_insertion_point(field_release:WordRequest.word)
  return word_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void WordRequest::set_allocated_word(std::string* word) {
  if (word != nullptr) {
    
  } else {
    
  }
  word_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), word,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:WordRequest.word)
}
inline std::string* WordRequest::unsafe_arena_release_word() {
  // @@protoc_insertion_point(field_unsafe_arena_release:WordRequest.word)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return word_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void WordRequest::unsafe_arena_set_allocated_word(
    std::string* word) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (word != nullptr) {
    
  } else {
    
  }
  word_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      word, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:WordRequest.word)
}

// -------------------------------------------------------------------

// WordResponse

// string message = 1;
inline void WordResponse::clear_message() {
  message_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& WordResponse::message() const {
  // @@protoc_insertion_point(field_get:WordResponse.message)
  return _internal_message();
}
inline void WordResponse::set_message(const std::string& value) {
  _internal_set_message(value);
  // @@protoc_insertion_point(field_set:WordResponse.message)
}
inline std::string* WordResponse::mutable_message() {
  // @@protoc_insertion_point(field_mutable:WordResponse.message)
  return _internal_mutable_message();
}
inline const std::string& WordResponse::_internal_message() const {
  return message_.Get();
}
inline void WordResponse::_internal_set_message(const std::string& value) {
  
  message_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void WordResponse::set_message(std::string&& value) {
  
  message_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:WordResponse.message)
}
inline void WordResponse::set_message(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  message_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:WordResponse.message)
}
inline void WordResponse::set_message(const char* value,
    size_t size) {
  
  message_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:WordResponse.message)
}
inline std::string* WordResponse::_internal_mutable_message() {
  
  return message_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* WordResponse::release_message() {
  // @@protoc_insertion_point(field_release:WordResponse.message)
  return message_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void WordResponse::set_allocated_message(std::string* message) {
  if (message != nullptr) {
    
  } else {
    
  }
  message_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), message,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:WordResponse.message)
}
inline std::string* WordResponse::unsafe_arena_release_message() {
  // @@protoc_insertion_point(field_unsafe_arena_release:WordResponse.message)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return message_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void WordResponse::unsafe_arena_set_allocated_message(
    std::string* message) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (message != nullptr) {
    
  } else {
    
  }
  message_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      message, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:WordResponse.message)
}

// repeated .WordEntry entries = 2;
inline int WordResponse::_internal_entries_size() const {
  return entries_.size();
}
inline int WordResponse::entries_size() const {
  return _internal_entries_size();
}
inline void WordResponse::clear_entries() {
  entries_.Clear();
}
inline ::WordEntry* WordResponse::mutable_entries(int index) {
  // @@protoc_insertion_point(field_mutable:WordResponse.entries)
  return entries_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::WordEntry >*
WordResponse::mutable_entries() {
  // @@protoc_insertion_point(field_mutable_list:WordResponse.entries)
  return &entries_;
}
inline const ::WordEntry& WordResponse::_internal_entries(int index) const {
  return entries_.Get(index);
}
inline const ::WordEntry& WordResponse::entries(int index) const {
  // @@protoc_insertion_point(field_get:WordResponse.entries)
  return _internal_entries(index);
}
inline ::WordEntry* WordResponse::_internal_add_entries() {
  return entries_.Add();
}
inline ::WordEntry* WordResponse::add_entries() {
  // @@protoc_insertion_point(field_add:WordResponse.entries)
  return _internal_add_entries();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::WordEntry >&
WordResponse::entries() const {
  // @@protoc_insertion_point(field_list:WordResponse.entries)
  return entries_;
}

// -------------------------------------------------------------------

// WordEntry

// string word = 1;
inline void WordEntry::clear_word() {
  word_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& WordEntry::word() const {
  // @@protoc_insertion_point(field_get:WordEntry.word)
  return _internal_word();
}
inline void WordEntry::set_word(const std::string& value) {
  _internal_set_word(value);
  // @@protoc_insertion_point(field_set:WordEntry.word)
}
inline std::string* WordEntry::mutable_word() {
  // @@protoc_insertion_point(field_mutable:WordEntry.word)
  return _internal_mutable_word();
}
inline const std::string& WordEntry::_internal_word() const {
  return word_.Get();
}
inline void WordEntry::_internal_set_word(const std::string& value) {
  
  word_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void WordEntry::set_word(std::string&& value) {
  
  word_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:WordEntry.word)
}
inline void WordEntry::set_word(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  word_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:WordEntry.word)
}
inline void WordEntry::set_word(const char* value,
    size_t size) {
  
  word_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:WordEntry.word)
}
inline std::string* WordEntry::_internal_mutable_word() {
  
  return word_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* WordEntry::release_word() {
  // @@protoc_insertion_point(field_release:WordEntry.word)
  return word_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void WordEntry::set_allocated_word(std::string* word) {
  if (word != nullptr) {
    
  } else {
    
  }
  word_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), word,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:WordEntry.word)
}
inline std::string* WordEntry::unsafe_arena_release_word() {
  // @@protoc_insertion_point(field_unsafe_arena_release:WordEntry.word)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return word_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void WordEntry::unsafe_arena_set_allocated_word(
    std::string* word) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (word != nullptr) {
    
  } else {
    
  }
  word_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      word, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:WordEntry.word)
}

// int32 count = 2;
inline void WordEntry::clear_count() {
  count_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 WordEntry::_internal_count() const {
  return count_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 WordEntry::count() const {
  // @@protoc_insertion_point(field_get:WordEntry.count)
  return _internal_count();
}
inline void WordEntry::_internal_set_count(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  count_ = value;
}
inline void WordEntry::set_count(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_count(value);
  // @@protoc_insertion_point(field_set:WordEntry.count)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_dictionary_2eproto
