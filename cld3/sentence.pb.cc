// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sentence.proto

#include "sentence.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/io/zero_copy_stream_impl_lite.h"
#include "google/protobuf/generated_message_tctable_impl.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace chrome_lang_id {
        template <typename>
PROTOBUF_CONSTEXPR Sentence::Sentence(::_pbi::ConstantInitialized)
    : _impl_{
      /*decltype(_impl_._extensions_)*/ {},
      /*decltype(_impl_._has_bits_)*/ {},
      /*decltype(_impl_._cached_size_)*/ {},
      /*decltype(_impl_.token_)*/ {},
      /*decltype(_impl_.id_)*/ {
          &::_pbi::fixed_address_empty_string,
          ::_pbi::ConstantInitialized{},
      },
      /*decltype(_impl_.text_)*/ {
          &::_pbi::fixed_address_empty_string,
          ::_pbi::ConstantInitialized{},
      },
    } {}
struct SentenceDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SentenceDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~SentenceDefaultTypeInternal() {}
  union {
    Sentence _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SentenceDefaultTypeInternal _Sentence_default_instance_;
        template <typename>
PROTOBUF_CONSTEXPR Token::Token(::_pbi::ConstantInitialized)
    : _impl_{
      /*decltype(_impl_._extensions_)*/ {},
      /*decltype(_impl_._has_bits_)*/ {},
      /*decltype(_impl_._cached_size_)*/ {},
      /*decltype(_impl_.word_)*/ {
          &::_pbi::fixed_address_empty_string,
          ::_pbi::ConstantInitialized{},
      },
      /*decltype(_impl_.tag_)*/ {
          &::_pbi::fixed_address_empty_string,
          ::_pbi::ConstantInitialized{},
      },
      /*decltype(_impl_.category_)*/ {
          &::_pbi::fixed_address_empty_string,
          ::_pbi::ConstantInitialized{},
      },
      /*decltype(_impl_.label_)*/ {
          &::_pbi::fixed_address_empty_string,
          ::_pbi::ConstantInitialized{},
      },
      /*decltype(_impl_.start_)*/ 0,
      /*decltype(_impl_.end_)*/ 0,
      /*decltype(_impl_.head_)*/ -1,
      /*decltype(_impl_.break_level_)*/ 1,
    } {}
struct TokenDefaultTypeInternal {
  PROTOBUF_CONSTEXPR TokenDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~TokenDefaultTypeInternal() {}
  union {
    Token _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 TokenDefaultTypeInternal _Token_default_instance_;
}  // namespace chrome_lang_id
namespace chrome_lang_id {
bool Token_BreakLevel_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}
static ::google::protobuf::internal::ExplicitlyConstructed<std::string>
    Token_BreakLevel_strings[4] = {};

static const char Token_BreakLevel_names[] = {
    "LINE_BREAK"
    "NO_BREAK"
    "SENTENCE_BREAK"
    "SPACE_BREAK"
};

static const ::google::protobuf::internal::EnumEntry Token_BreakLevel_entries[] =
    {
        {{&Token_BreakLevel_names[0], 10}, 2},
        {{&Token_BreakLevel_names[10], 8}, 0},
        {{&Token_BreakLevel_names[18], 14}, 3},
        {{&Token_BreakLevel_names[32], 11}, 1},
};

static const int Token_BreakLevel_entries_by_number[] = {
    1,  // 0 -> NO_BREAK
    3,  // 1 -> SPACE_BREAK
    0,  // 2 -> LINE_BREAK
    2,  // 3 -> SENTENCE_BREAK
};

const std::string& Token_BreakLevel_Name(Token_BreakLevel value) {
  static const bool kDummy =
      ::google::protobuf::internal::InitializeEnumStrings(
          Token_BreakLevel_entries, Token_BreakLevel_entries_by_number,
          4, Token_BreakLevel_strings);
  (void)kDummy;

  int idx = ::google::protobuf::internal::LookUpEnumName(
      Token_BreakLevel_entries, Token_BreakLevel_entries_by_number, 4,
      value);
  return idx == -1 ? ::google::protobuf::internal::GetEmptyString()
                   : Token_BreakLevel_strings[idx].get();
}

bool Token_BreakLevel_Parse(absl::string_view name, Token_BreakLevel* value) {
  int int_value;
  bool success = ::google::protobuf::internal::LookUpEnumValue(
      Token_BreakLevel_entries, 4, name, &int_value);
  if (success) {
    *value = static_cast<Token_BreakLevel>(int_value);
  }
  return success;
}
#if (__cplusplus < 201703) && \
  (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

constexpr Token_BreakLevel Token::NO_BREAK;
constexpr Token_BreakLevel Token::SPACE_BREAK;
constexpr Token_BreakLevel Token::LINE_BREAK;
constexpr Token_BreakLevel Token::SENTENCE_BREAK;
constexpr Token_BreakLevel Token::BreakLevel_MIN;
constexpr Token_BreakLevel Token::BreakLevel_MAX;
constexpr int Token::BreakLevel_ARRAYSIZE;

#endif  // (__cplusplus < 201703) &&
        // (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
// ===================================================================

class Sentence::_Internal {
 public:
  using HasBits = decltype(std::declval<Sentence>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(Sentence, _impl_._has_bits_);
  static void set_has_id(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_text(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

Sentence::Sentence(::google::protobuf::Arena* arena)
    : ::google::protobuf::MessageLite(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:chrome_lang_id.Sentence)
}
Sentence::Sentence(const Sentence& from) : ::google::protobuf::MessageLite() {
  Sentence* const _this = this;
  (void)_this;
  new (&_impl_) Impl_{
      /*decltype(_impl_._extensions_)*/ {},
      decltype(_impl_._has_bits_){from._impl_._has_bits_},
      /*decltype(_impl_._cached_size_)*/ {},
      decltype(_impl_.token_){from._impl_.token_},
      decltype(_impl_.id_){},
      decltype(_impl_.text_){},
  };
  _internal_metadata_.MergeFrom<std::string>(
      from._internal_metadata_);
  _impl_._extensions_.MergeFrom(internal_default_instance(),
                         from._impl_._extensions_);
  _impl_.id_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.id_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_impl_.id_.Set(from._internal_id(), _this->GetArenaForAllocation());
  }
  _impl_.text_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.text_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if ((from._impl_._has_bits_[0] & 0x00000002u) != 0) {
    _this->_impl_.text_.Set(from._internal_text(), _this->GetArenaForAllocation());
  }

  // @@protoc_insertion_point(copy_constructor:chrome_lang_id.Sentence)
}
inline void Sentence::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      /*decltype(_impl_._extensions_)*/ {::_pbi::ArenaInitialized(), arena},
      decltype(_impl_._has_bits_){},
      /*decltype(_impl_._cached_size_)*/ {},
      decltype(_impl_.token_){arena},
      decltype(_impl_.id_){},
      decltype(_impl_.text_){},
  };
  _impl_.id_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.id_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.text_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.text_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}
Sentence::~Sentence() {
  // @@protoc_insertion_point(destructor:chrome_lang_id.Sentence)
  _internal_metadata_.Delete<std::string>();
  SharedDtor();
}
inline void Sentence::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_._extensions_.~ExtensionSet();
  _impl_.token_.~RepeatedPtrField();
  _impl_.id_.Destroy();
  _impl_.text_.Destroy();
}
void Sentence::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

PROTOBUF_NOINLINE void Sentence::Clear() {
// @@protoc_insertion_point(message_clear_start:chrome_lang_id.Sentence)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_._extensions_.Clear();
  _internal_mutable_token()->Clear();
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _impl_.id_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      _impl_.text_.ClearNonDefaultToEmpty();
    }
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* Sentence::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<2, 3, 1, 0, 2> Sentence::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(Sentence, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(Sentence, _impl_._extensions_),
    3, 24,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967288,  // skipmap
    offsetof(decltype(_table_), field_entries),
    3,  // num_field_entries
    1,  // num_aux_entries
    offsetof(decltype(_table_), aux_entries),
    &_Sentence_default_instance_._instance,
    ::_pbi::TcParser::GenericFallbackLite,  // fallback
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
    // optional string id = 1;
    {::_pbi::TcParser::FastBS1,
     {10, 0, 0, PROTOBUF_FIELD_OFFSET(Sentence, _impl_.id_)}},
    // optional string text = 2;
    {::_pbi::TcParser::FastBS1,
     {18, 1, 0, PROTOBUF_FIELD_OFFSET(Sentence, _impl_.text_)}},
    // repeated .chrome_lang_id.Token token = 3;
    {::_pbi::TcParser::FastMtR1,
     {26, 63, 0, PROTOBUF_FIELD_OFFSET(Sentence, _impl_.token_)}},
  }}, {{
    65535, 65535
  }}, {{
    // optional string id = 1;
    {PROTOBUF_FIELD_OFFSET(Sentence, _impl_.id_), _Internal::kHasBitsOffset + 0, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kBytes | ::_fl::kRepAString)},
    // optional string text = 2;
    {PROTOBUF_FIELD_OFFSET(Sentence, _impl_.text_), _Internal::kHasBitsOffset + 1, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kBytes | ::_fl::kRepAString)},
    // repeated .chrome_lang_id.Token token = 3;
    {PROTOBUF_FIELD_OFFSET(Sentence, _impl_.token_), -1, 0,
    (0 | ::_fl::kFcRepeated | ::_fl::kMessage | ::_fl::kTvTable)},
  }}, {{
    {::_pbi::TcParser::GetTable<::chrome_lang_id::Token>()},
  }}, {{
  }},
};

::uint8_t* Sentence::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:chrome_lang_id.Sentence)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional string id = 1;
  if (cached_has_bits & 0x00000001u) {
    const std::string& _s = this->_internal_id();
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  // optional string text = 2;
  if (cached_has_bits & 0x00000002u) {
    const std::string& _s = this->_internal_text();
    target = stream->WriteStringMaybeAliased(2, _s, target);
  }

  // repeated .chrome_lang_id.Token token = 3;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_token_size()); i < n; i++) {
    const auto& repfield = this->_internal_token().Get(i);
    target = ::google::protobuf::internal::WireFormatLite::
        InternalWriteMessage(3, repfield, repfield.GetCachedSize(), target, stream);
  }

  // Extension range [1000, 536870912)
  target = _impl_._extensions_._InternalSerialize(
      internal_default_instance(), 1000, 536870912, target, stream);
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(
        _internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:chrome_lang_id.Sentence)
  return target;
}

::size_t Sentence::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:chrome_lang_id.Sentence)
  ::size_t total_size = 0;

  total_size += _impl_._extensions_.ByteSize();

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .chrome_lang_id.Token token = 3;
  total_size += 1UL * this->_internal_token_size();
  for (const auto& msg : this->_internal_token()) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSize(msg);
  }
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional string id = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                      this->_internal_id());
    }

    // optional string text = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                      this->_internal_text());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Sentence::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const Sentence*>(
      &from));
}

void Sentence::MergeFrom(const Sentence& from) {
  Sentence* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:chrome_lang_id.Sentence)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_token()->MergeFrom(from._internal_token());
  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_id(from._internal_id());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_set_text(from._internal_text());
    }
  }
  _this->_impl_._extensions_.MergeFrom(internal_default_instance(), from._impl_._extensions_);
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void Sentence::CopyFrom(const Sentence& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:chrome_lang_id.Sentence)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool Sentence::IsInitialized() const {
  if (!_impl_._extensions_.IsInitialized(internal_default_instance())) {
    return false;
  }
  if (!::google::protobuf::internal::AllAreInitialized(_internal_token()))
    return false;
  return true;
}

void Sentence::InternalSwap(Sentence* other) {
  using std::swap;
  _impl_._extensions_.InternalSwap(&other->_impl_._extensions_);
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  _internal_mutable_token()->InternalSwap(other->_internal_mutable_token());
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.id_, lhs_arena,
                                       &other->_impl_.id_, rhs_arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.text_, lhs_arena,
                                       &other->_impl_.text_, rhs_arena);
}

std::string Sentence::GetTypeName() const {
  return "chrome_lang_id.Sentence";
}

// ===================================================================

class Token::_Internal {
 public:
  using HasBits = decltype(std::declval<Token>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(Token, _impl_._has_bits_);
  static void set_has_word(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_start(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_end(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_head(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
  static void set_has_tag(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_category(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_label(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_break_level(HasBits* has_bits) {
    (*has_bits)[0] |= 128u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000031) ^ 0x00000031) != 0;
  }
};

Token::Token(::google::protobuf::Arena* arena)
    : ::google::protobuf::MessageLite(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:chrome_lang_id.Token)
}
Token::Token(const Token& from) : ::google::protobuf::MessageLite() {
  Token* const _this = this;
  (void)_this;
  new (&_impl_) Impl_{
      /*decltype(_impl_._extensions_)*/ {},
      decltype(_impl_._has_bits_){from._impl_._has_bits_},
      /*decltype(_impl_._cached_size_)*/ {},
      decltype(_impl_.word_){},
      decltype(_impl_.tag_){},
      decltype(_impl_.category_){},
      decltype(_impl_.label_){},
      decltype(_impl_.start_){},
      decltype(_impl_.end_){},
      decltype(_impl_.head_){},
      decltype(_impl_.break_level_){},
  };
  _internal_metadata_.MergeFrom<std::string>(
      from._internal_metadata_);
  _impl_._extensions_.MergeFrom(internal_default_instance(),
                         from._impl_._extensions_);
  _impl_.word_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.word_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_impl_.word_.Set(from._internal_word(), _this->GetArenaForAllocation());
  }
  _impl_.tag_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.tag_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if ((from._impl_._has_bits_[0] & 0x00000002u) != 0) {
    _this->_impl_.tag_.Set(from._internal_tag(), _this->GetArenaForAllocation());
  }
  _impl_.category_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.category_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if ((from._impl_._has_bits_[0] & 0x00000004u) != 0) {
    _this->_impl_.category_.Set(from._internal_category(), _this->GetArenaForAllocation());
  }
  _impl_.label_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.label_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if ((from._impl_._has_bits_[0] & 0x00000008u) != 0) {
    _this->_impl_.label_.Set(from._internal_label(), _this->GetArenaForAllocation());
  }
  ::memcpy(&_impl_.start_, &from._impl_.start_,
    static_cast<::size_t>(reinterpret_cast<char*>(&_impl_.break_level_) -
    reinterpret_cast<char*>(&_impl_.start_)) + sizeof(_impl_.break_level_));

  // @@protoc_insertion_point(copy_constructor:chrome_lang_id.Token)
}
inline void Token::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      /*decltype(_impl_._extensions_)*/ {::_pbi::ArenaInitialized(), arena},
      decltype(_impl_._has_bits_){},
      /*decltype(_impl_._cached_size_)*/ {},
      decltype(_impl_.word_){},
      decltype(_impl_.tag_){},
      decltype(_impl_.category_){},
      decltype(_impl_.label_){},
      decltype(_impl_.start_){0},
      decltype(_impl_.end_){0},
      decltype(_impl_.head_){-1},
      decltype(_impl_.break_level_){1},
  };
  _impl_.word_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.word_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.tag_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.tag_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.category_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.category_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.label_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.label_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}
Token::~Token() {
  // @@protoc_insertion_point(destructor:chrome_lang_id.Token)
  _internal_metadata_.Delete<std::string>();
  SharedDtor();
}
inline void Token::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_._extensions_.~ExtensionSet();
  _impl_.word_.Destroy();
  _impl_.tag_.Destroy();
  _impl_.category_.Destroy();
  _impl_.label_.Destroy();
}
void Token::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

PROTOBUF_NOINLINE void Token::Clear() {
// @@protoc_insertion_point(message_clear_start:chrome_lang_id.Token)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_._extensions_.Clear();
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      _impl_.word_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      _impl_.tag_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000004u) {
      _impl_.category_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000008u) {
      _impl_.label_.ClearNonDefaultToEmpty();
    }
  }
  if (cached_has_bits & 0x000000f0u) {
    ::memset(&_impl_.start_, 0, static_cast<::size_t>(
        reinterpret_cast<char*>(&_impl_.end_) -
        reinterpret_cast<char*>(&_impl_.start_)) + sizeof(_impl_.end_));
    _impl_.head_ = -1;
    _impl_.break_level_ = 1;
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* Token::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<3, 8, 1, 0, 2> Token::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(Token, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(Token, _impl_._extensions_),
    8, 56,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967040,  // skipmap
    offsetof(decltype(_table_), field_entries),
    8,  // num_field_entries
    1,  // num_aux_entries
    offsetof(decltype(_table_), aux_entries),
    &_Token_default_instance_._instance,
    ::_pbi::TcParser::GenericFallbackLite,  // fallback
  }, {{
    // optional .chrome_lang_id.Token.BreakLevel break_level = 8 [default = SPACE_BREAK];
    {::_pbi::TcParser::FastEr0S1,
     {64, 7, 3, PROTOBUF_FIELD_OFFSET(Token, _impl_.break_level_)}},
    // required string word = 1;
    {::_pbi::TcParser::FastBS1,
     {10, 0, 0, PROTOBUF_FIELD_OFFSET(Token, _impl_.word_)}},
    // required int32 start = 2;
    {::_pbi::TcParser::FastV32S1,
     {16, 4, 0, PROTOBUF_FIELD_OFFSET(Token, _impl_.start_)}},
    // required int32 end = 3;
    {::_pbi::TcParser::FastV32S1,
     {24, 5, 0, PROTOBUF_FIELD_OFFSET(Token, _impl_.end_)}},
    // optional int32 head = 4 [default = -1];
    {::_pbi::TcParser::FastV32S1,
     {32, 6, 0, PROTOBUF_FIELD_OFFSET(Token, _impl_.head_)}},
    // optional string tag = 5;
    {::_pbi::TcParser::FastBS1,
     {42, 1, 0, PROTOBUF_FIELD_OFFSET(Token, _impl_.tag_)}},
    // optional string category = 6;
    {::_pbi::TcParser::FastBS1,
     {50, 2, 0, PROTOBUF_FIELD_OFFSET(Token, _impl_.category_)}},
    // optional string label = 7;
    {::_pbi::TcParser::FastBS1,
     {58, 3, 0, PROTOBUF_FIELD_OFFSET(Token, _impl_.label_)}},
  }}, {{
    65535, 65535
  }}, {{
    // required string word = 1;
    {PROTOBUF_FIELD_OFFSET(Token, _impl_.word_), _Internal::kHasBitsOffset + 0, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kBytes | ::_fl::kRepAString)},
    // required int32 start = 2;
    {PROTOBUF_FIELD_OFFSET(Token, _impl_.start_), _Internal::kHasBitsOffset + 4, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kInt32)},
    // required int32 end = 3;
    {PROTOBUF_FIELD_OFFSET(Token, _impl_.end_), _Internal::kHasBitsOffset + 5, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kInt32)},
    // optional int32 head = 4 [default = -1];
    {PROTOBUF_FIELD_OFFSET(Token, _impl_.head_), _Internal::kHasBitsOffset + 6, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kInt32)},
    // optional string tag = 5;
    {PROTOBUF_FIELD_OFFSET(Token, _impl_.tag_), _Internal::kHasBitsOffset + 1, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kBytes | ::_fl::kRepAString)},
    // optional string category = 6;
    {PROTOBUF_FIELD_OFFSET(Token, _impl_.category_), _Internal::kHasBitsOffset + 2, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kBytes | ::_fl::kRepAString)},
    // optional string label = 7;
    {PROTOBUF_FIELD_OFFSET(Token, _impl_.label_), _Internal::kHasBitsOffset + 3, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kBytes | ::_fl::kRepAString)},
    // optional .chrome_lang_id.Token.BreakLevel break_level = 8 [default = SPACE_BREAK];
    {PROTOBUF_FIELD_OFFSET(Token, _impl_.break_level_), _Internal::kHasBitsOffset + 7, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kEnumRange)},
  }}, {{
    {0, 4},
  }}, {{
  }},
};

::uint8_t* Token::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:chrome_lang_id.Token)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // required string word = 1;
  if (cached_has_bits & 0x00000001u) {
    const std::string& _s = this->_internal_word();
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  // required int32 start = 2;
  if (cached_has_bits & 0x00000010u) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt32ToArrayWithField<2>(
            stream, this->_internal_start(), target);
  }

  // required int32 end = 3;
  if (cached_has_bits & 0x00000020u) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt32ToArrayWithField<3>(
            stream, this->_internal_end(), target);
  }

  // optional int32 head = 4 [default = -1];
  if (cached_has_bits & 0x00000040u) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt32ToArrayWithField<4>(
            stream, this->_internal_head(), target);
  }

  // optional string tag = 5;
  if (cached_has_bits & 0x00000002u) {
    const std::string& _s = this->_internal_tag();
    target = stream->WriteStringMaybeAliased(5, _s, target);
  }

  // optional string category = 6;
  if (cached_has_bits & 0x00000004u) {
    const std::string& _s = this->_internal_category();
    target = stream->WriteStringMaybeAliased(6, _s, target);
  }

  // optional string label = 7;
  if (cached_has_bits & 0x00000008u) {
    const std::string& _s = this->_internal_label();
    target = stream->WriteStringMaybeAliased(7, _s, target);
  }

  // optional .chrome_lang_id.Token.BreakLevel break_level = 8 [default = SPACE_BREAK];
  if (cached_has_bits & 0x00000080u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
        8, this->_internal_break_level(), target);
  }

  // Extension range [1000, 536870912)
  target = _impl_._extensions_._InternalSerialize(
      internal_default_instance(), 1000, 536870912, target, stream);
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(
        _internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:chrome_lang_id.Token)
  return target;
}

::size_t Token::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:chrome_lang_id.Token)
  ::size_t total_size = 0;

  total_size += _impl_._extensions_.ByteSize();

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // required string word = 1;
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_word());
  }

  if (cached_has_bits & 0x0000000eu) {
    // optional string tag = 5;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                      this->_internal_tag());
    }

    // optional string category = 6;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                      this->_internal_category());
    }

    // optional string label = 7;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                      this->_internal_label());
    }

  }
  if (cached_has_bits & 0x00000030u) {
    // required int32 start = 2;
    if (cached_has_bits & 0x00000010u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
          this->_internal_start());
    }

    // required int32 end = 3;
    if (cached_has_bits & 0x00000020u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
          this->_internal_end());
    }

  }
  if (cached_has_bits & 0x000000c0u) {
    // optional int32 head = 4 [default = -1];
    if (cached_has_bits & 0x00000040u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
          this->_internal_head());
    }

    // optional .chrome_lang_id.Token.BreakLevel break_level = 8 [default = SPACE_BREAK];
    if (cached_has_bits & 0x00000080u) {
      total_size += 1 +
                    ::_pbi::WireFormatLite::EnumSize(this->_internal_break_level());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Token::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const Token*>(
      &from));
}

void Token::MergeFrom(const Token& from) {
  Token* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:chrome_lang_id.Token)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_word(from._internal_word());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_set_tag(from._internal_tag());
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_internal_set_category(from._internal_category());
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_internal_set_label(from._internal_label());
    }
    if (cached_has_bits & 0x00000010u) {
      _this->_impl_.start_ = from._impl_.start_;
    }
    if (cached_has_bits & 0x00000020u) {
      _this->_impl_.end_ = from._impl_.end_;
    }
    if (cached_has_bits & 0x00000040u) {
      _this->_impl_.head_ = from._impl_.head_;
    }
    if (cached_has_bits & 0x00000080u) {
      _this->_impl_.break_level_ = from._impl_.break_level_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_impl_._extensions_.MergeFrom(internal_default_instance(), from._impl_._extensions_);
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void Token::CopyFrom(const Token& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:chrome_lang_id.Token)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool Token::IsInitialized() const {
  if (!_impl_._extensions_.IsInitialized(internal_default_instance())) {
    return false;
  }
  if (_Internal::MissingRequiredFields(_impl_._has_bits_)) {
    return false;
  }
  return true;
}

void Token::InternalSwap(Token* other) {
  using std::swap;
  _impl_._extensions_.InternalSwap(&other->_impl_._extensions_);
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.word_, lhs_arena,
                                       &other->_impl_.word_, rhs_arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.tag_, lhs_arena,
                                       &other->_impl_.tag_, rhs_arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.category_, lhs_arena,
                                       &other->_impl_.category_, rhs_arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.label_, lhs_arena,
                                       &other->_impl_.label_, rhs_arena);
  ::google::protobuf::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Token, _impl_.break_level_)
      + sizeof(Token::_impl_.break_level_)
      - PROTOBUF_FIELD_OFFSET(Token, _impl_.start_)>(
          reinterpret_cast<char*>(&_impl_.start_),
          reinterpret_cast<char*>(&other->_impl_.start_));
}

std::string Token::GetTypeName() const {
  return "chrome_lang_id.Token";
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace chrome_lang_id
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::chrome_lang_id::Sentence*
Arena::CreateMaybeMessage< ::chrome_lang_id::Sentence >(Arena* arena) {
  return Arena::CreateMessageInternal< ::chrome_lang_id::Sentence >(arena);
}
template<> PROTOBUF_NOINLINE ::chrome_lang_id::Token*
Arena::CreateMaybeMessage< ::chrome_lang_id::Token >(Arena* arena) {
  return Arena::CreateMessageInternal< ::chrome_lang_id::Token >(arena);
}
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
