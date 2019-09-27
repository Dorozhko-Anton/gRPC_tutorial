// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: route_guide.proto

#ifndef PROTOBUF_INCLUDED_route_5fguide_2eproto
#define PROTOBUF_INCLUDED_route_5fguide_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3007000 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_route_5fguide_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_route_5fguide_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[5]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors_route_5fguide_2eproto();
class Feature;
class FeatureDefaultTypeInternal;
extern FeatureDefaultTypeInternal _Feature_default_instance_;
class Point;
class PointDefaultTypeInternal;
extern PointDefaultTypeInternal _Point_default_instance_;
class Rectangle;
class RectangleDefaultTypeInternal;
extern RectangleDefaultTypeInternal _Rectangle_default_instance_;
class RouteNote;
class RouteNoteDefaultTypeInternal;
extern RouteNoteDefaultTypeInternal _RouteNote_default_instance_;
class RouteSummary;
class RouteSummaryDefaultTypeInternal;
extern RouteSummaryDefaultTypeInternal _RouteSummary_default_instance_;
namespace google {
namespace protobuf {
template<> ::Feature* Arena::CreateMaybeMessage<::Feature>(Arena*);
template<> ::Point* Arena::CreateMaybeMessage<::Point>(Arena*);
template<> ::Rectangle* Arena::CreateMaybeMessage<::Rectangle>(Arena*);
template<> ::RouteNote* Arena::CreateMaybeMessage<::RouteNote>(Arena*);
template<> ::RouteSummary* Arena::CreateMaybeMessage<::RouteSummary>(Arena*);
}  // namespace protobuf
}  // namespace google

// ===================================================================

class Point final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Point) */ {
 public:
  Point();
  virtual ~Point();

  Point(const Point& from);

  inline Point& operator=(const Point& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Point(Point&& from) noexcept
    : Point() {
    *this = ::std::move(from);
  }

  inline Point& operator=(Point&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const Point& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Point* internal_default_instance() {
    return reinterpret_cast<const Point*>(
               &_Point_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Point* other);
  friend void swap(Point& a, Point& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Point* New() const final {
    return CreateMaybeMessage<Point>(nullptr);
  }

  Point* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Point>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Point& from);
  void MergeFrom(const Point& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Point* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // int32 latitude = 1;
  void clear_latitude();
  static const int kLatitudeFieldNumber = 1;
  ::google::protobuf::int32 latitude() const;
  void set_latitude(::google::protobuf::int32 value);

  // int32 longitude = 2;
  void clear_longitude();
  static const int kLongitudeFieldNumber = 2;
  ::google::protobuf::int32 longitude() const;
  void set_longitude(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:Point)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 latitude_;
  ::google::protobuf::int32 longitude_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_route_5fguide_2eproto;
};
// -------------------------------------------------------------------

class Rectangle final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Rectangle) */ {
 public:
  Rectangle();
  virtual ~Rectangle();

  Rectangle(const Rectangle& from);

  inline Rectangle& operator=(const Rectangle& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Rectangle(Rectangle&& from) noexcept
    : Rectangle() {
    *this = ::std::move(from);
  }

  inline Rectangle& operator=(Rectangle&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const Rectangle& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Rectangle* internal_default_instance() {
    return reinterpret_cast<const Rectangle*>(
               &_Rectangle_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(Rectangle* other);
  friend void swap(Rectangle& a, Rectangle& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Rectangle* New() const final {
    return CreateMaybeMessage<Rectangle>(nullptr);
  }

  Rectangle* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Rectangle>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Rectangle& from);
  void MergeFrom(const Rectangle& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Rectangle* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .Point lo = 1;
  bool has_lo() const;
  void clear_lo();
  static const int kLoFieldNumber = 1;
  const ::Point& lo() const;
  ::Point* release_lo();
  ::Point* mutable_lo();
  void set_allocated_lo(::Point* lo);

  // .Point hi = 2;
  bool has_hi() const;
  void clear_hi();
  static const int kHiFieldNumber = 2;
  const ::Point& hi() const;
  ::Point* release_hi();
  ::Point* mutable_hi();
  void set_allocated_hi(::Point* hi);

  // @@protoc_insertion_point(class_scope:Rectangle)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::Point* lo_;
  ::Point* hi_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_route_5fguide_2eproto;
};
// -------------------------------------------------------------------

class Feature final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Feature) */ {
 public:
  Feature();
  virtual ~Feature();

  Feature(const Feature& from);

  inline Feature& operator=(const Feature& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Feature(Feature&& from) noexcept
    : Feature() {
    *this = ::std::move(from);
  }

  inline Feature& operator=(Feature&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const Feature& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Feature* internal_default_instance() {
    return reinterpret_cast<const Feature*>(
               &_Feature_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(Feature* other);
  friend void swap(Feature& a, Feature& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Feature* New() const final {
    return CreateMaybeMessage<Feature>(nullptr);
  }

  Feature* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Feature>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Feature& from);
  void MergeFrom(const Feature& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Feature* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // .Point location = 2;
  bool has_location() const;
  void clear_location();
  static const int kLocationFieldNumber = 2;
  const ::Point& location() const;
  ::Point* release_location();
  ::Point* mutable_location();
  void set_allocated_location(::Point* location);

  // @@protoc_insertion_point(class_scope:Feature)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::Point* location_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_route_5fguide_2eproto;
};
// -------------------------------------------------------------------

class RouteNote final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:RouteNote) */ {
 public:
  RouteNote();
  virtual ~RouteNote();

  RouteNote(const RouteNote& from);

  inline RouteNote& operator=(const RouteNote& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  RouteNote(RouteNote&& from) noexcept
    : RouteNote() {
    *this = ::std::move(from);
  }

  inline RouteNote& operator=(RouteNote&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const RouteNote& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const RouteNote* internal_default_instance() {
    return reinterpret_cast<const RouteNote*>(
               &_RouteNote_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  void Swap(RouteNote* other);
  friend void swap(RouteNote& a, RouteNote& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline RouteNote* New() const final {
    return CreateMaybeMessage<RouteNote>(nullptr);
  }

  RouteNote* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<RouteNote>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const RouteNote& from);
  void MergeFrom(const RouteNote& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(RouteNote* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string message = 2;
  void clear_message();
  static const int kMessageFieldNumber = 2;
  const ::std::string& message() const;
  void set_message(const ::std::string& value);
  #if LANG_CXX11
  void set_message(::std::string&& value);
  #endif
  void set_message(const char* value);
  void set_message(const char* value, size_t size);
  ::std::string* mutable_message();
  ::std::string* release_message();
  void set_allocated_message(::std::string* message);

  // .Point location = 1;
  bool has_location() const;
  void clear_location();
  static const int kLocationFieldNumber = 1;
  const ::Point& location() const;
  ::Point* release_location();
  ::Point* mutable_location();
  void set_allocated_location(::Point* location);

  // @@protoc_insertion_point(class_scope:RouteNote)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr message_;
  ::Point* location_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_route_5fguide_2eproto;
};
// -------------------------------------------------------------------

class RouteSummary final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:RouteSummary) */ {
 public:
  RouteSummary();
  virtual ~RouteSummary();

  RouteSummary(const RouteSummary& from);

  inline RouteSummary& operator=(const RouteSummary& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  RouteSummary(RouteSummary&& from) noexcept
    : RouteSummary() {
    *this = ::std::move(from);
  }

  inline RouteSummary& operator=(RouteSummary&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const RouteSummary& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const RouteSummary* internal_default_instance() {
    return reinterpret_cast<const RouteSummary*>(
               &_RouteSummary_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    4;

  void Swap(RouteSummary* other);
  friend void swap(RouteSummary& a, RouteSummary& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline RouteSummary* New() const final {
    return CreateMaybeMessage<RouteSummary>(nullptr);
  }

  RouteSummary* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<RouteSummary>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const RouteSummary& from);
  void MergeFrom(const RouteSummary& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(RouteSummary* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // int32 point_count = 1;
  void clear_point_count();
  static const int kPointCountFieldNumber = 1;
  ::google::protobuf::int32 point_count() const;
  void set_point_count(::google::protobuf::int32 value);

  // int32 feature_count = 2;
  void clear_feature_count();
  static const int kFeatureCountFieldNumber = 2;
  ::google::protobuf::int32 feature_count() const;
  void set_feature_count(::google::protobuf::int32 value);

  // int32 distance = 3;
  void clear_distance();
  static const int kDistanceFieldNumber = 3;
  ::google::protobuf::int32 distance() const;
  void set_distance(::google::protobuf::int32 value);

  // int32 elapsed_time = 4;
  void clear_elapsed_time();
  static const int kElapsedTimeFieldNumber = 4;
  ::google::protobuf::int32 elapsed_time() const;
  void set_elapsed_time(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:RouteSummary)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 point_count_;
  ::google::protobuf::int32 feature_count_;
  ::google::protobuf::int32 distance_;
  ::google::protobuf::int32 elapsed_time_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_route_5fguide_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Point

// int32 latitude = 1;
inline void Point::clear_latitude() {
  latitude_ = 0;
}
inline ::google::protobuf::int32 Point::latitude() const {
  // @@protoc_insertion_point(field_get:Point.latitude)
  return latitude_;
}
inline void Point::set_latitude(::google::protobuf::int32 value) {
  
  latitude_ = value;
  // @@protoc_insertion_point(field_set:Point.latitude)
}

// int32 longitude = 2;
inline void Point::clear_longitude() {
  longitude_ = 0;
}
inline ::google::protobuf::int32 Point::longitude() const {
  // @@protoc_insertion_point(field_get:Point.longitude)
  return longitude_;
}
inline void Point::set_longitude(::google::protobuf::int32 value) {
  
  longitude_ = value;
  // @@protoc_insertion_point(field_set:Point.longitude)
}

// -------------------------------------------------------------------

// Rectangle

// .Point lo = 1;
inline bool Rectangle::has_lo() const {
  return this != internal_default_instance() && lo_ != nullptr;
}
inline void Rectangle::clear_lo() {
  if (GetArenaNoVirtual() == nullptr && lo_ != nullptr) {
    delete lo_;
  }
  lo_ = nullptr;
}
inline const ::Point& Rectangle::lo() const {
  const ::Point* p = lo_;
  // @@protoc_insertion_point(field_get:Rectangle.lo)
  return p != nullptr ? *p : *reinterpret_cast<const ::Point*>(
      &::_Point_default_instance_);
}
inline ::Point* Rectangle::release_lo() {
  // @@protoc_insertion_point(field_release:Rectangle.lo)
  
  ::Point* temp = lo_;
  lo_ = nullptr;
  return temp;
}
inline ::Point* Rectangle::mutable_lo() {
  
  if (lo_ == nullptr) {
    auto* p = CreateMaybeMessage<::Point>(GetArenaNoVirtual());
    lo_ = p;
  }
  // @@protoc_insertion_point(field_mutable:Rectangle.lo)
  return lo_;
}
inline void Rectangle::set_allocated_lo(::Point* lo) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete lo_;
  }
  if (lo) {
    ::google::protobuf::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      lo = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, lo, submessage_arena);
    }
    
  } else {
    
  }
  lo_ = lo;
  // @@protoc_insertion_point(field_set_allocated:Rectangle.lo)
}

// .Point hi = 2;
inline bool Rectangle::has_hi() const {
  return this != internal_default_instance() && hi_ != nullptr;
}
inline void Rectangle::clear_hi() {
  if (GetArenaNoVirtual() == nullptr && hi_ != nullptr) {
    delete hi_;
  }
  hi_ = nullptr;
}
inline const ::Point& Rectangle::hi() const {
  const ::Point* p = hi_;
  // @@protoc_insertion_point(field_get:Rectangle.hi)
  return p != nullptr ? *p : *reinterpret_cast<const ::Point*>(
      &::_Point_default_instance_);
}
inline ::Point* Rectangle::release_hi() {
  // @@protoc_insertion_point(field_release:Rectangle.hi)
  
  ::Point* temp = hi_;
  hi_ = nullptr;
  return temp;
}
inline ::Point* Rectangle::mutable_hi() {
  
  if (hi_ == nullptr) {
    auto* p = CreateMaybeMessage<::Point>(GetArenaNoVirtual());
    hi_ = p;
  }
  // @@protoc_insertion_point(field_mutable:Rectangle.hi)
  return hi_;
}
inline void Rectangle::set_allocated_hi(::Point* hi) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete hi_;
  }
  if (hi) {
    ::google::protobuf::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      hi = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, hi, submessage_arena);
    }
    
  } else {
    
  }
  hi_ = hi;
  // @@protoc_insertion_point(field_set_allocated:Rectangle.hi)
}

// -------------------------------------------------------------------

// Feature

// string name = 1;
inline void Feature::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Feature::name() const {
  // @@protoc_insertion_point(field_get:Feature.name)
  return name_.GetNoArena();
}
inline void Feature::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Feature.name)
}
#if LANG_CXX11
inline void Feature::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Feature.name)
}
#endif
inline void Feature::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Feature.name)
}
inline void Feature::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Feature.name)
}
inline ::std::string* Feature::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:Feature.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Feature::release_name() {
  // @@protoc_insertion_point(field_release:Feature.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Feature::set_allocated_name(::std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:Feature.name)
}

// .Point location = 2;
inline bool Feature::has_location() const {
  return this != internal_default_instance() && location_ != nullptr;
}
inline void Feature::clear_location() {
  if (GetArenaNoVirtual() == nullptr && location_ != nullptr) {
    delete location_;
  }
  location_ = nullptr;
}
inline const ::Point& Feature::location() const {
  const ::Point* p = location_;
  // @@protoc_insertion_point(field_get:Feature.location)
  return p != nullptr ? *p : *reinterpret_cast<const ::Point*>(
      &::_Point_default_instance_);
}
inline ::Point* Feature::release_location() {
  // @@protoc_insertion_point(field_release:Feature.location)
  
  ::Point* temp = location_;
  location_ = nullptr;
  return temp;
}
inline ::Point* Feature::mutable_location() {
  
  if (location_ == nullptr) {
    auto* p = CreateMaybeMessage<::Point>(GetArenaNoVirtual());
    location_ = p;
  }
  // @@protoc_insertion_point(field_mutable:Feature.location)
  return location_;
}
inline void Feature::set_allocated_location(::Point* location) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete location_;
  }
  if (location) {
    ::google::protobuf::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      location = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, location, submessage_arena);
    }
    
  } else {
    
  }
  location_ = location;
  // @@protoc_insertion_point(field_set_allocated:Feature.location)
}

// -------------------------------------------------------------------

// RouteNote

// .Point location = 1;
inline bool RouteNote::has_location() const {
  return this != internal_default_instance() && location_ != nullptr;
}
inline void RouteNote::clear_location() {
  if (GetArenaNoVirtual() == nullptr && location_ != nullptr) {
    delete location_;
  }
  location_ = nullptr;
}
inline const ::Point& RouteNote::location() const {
  const ::Point* p = location_;
  // @@protoc_insertion_point(field_get:RouteNote.location)
  return p != nullptr ? *p : *reinterpret_cast<const ::Point*>(
      &::_Point_default_instance_);
}
inline ::Point* RouteNote::release_location() {
  // @@protoc_insertion_point(field_release:RouteNote.location)
  
  ::Point* temp = location_;
  location_ = nullptr;
  return temp;
}
inline ::Point* RouteNote::mutable_location() {
  
  if (location_ == nullptr) {
    auto* p = CreateMaybeMessage<::Point>(GetArenaNoVirtual());
    location_ = p;
  }
  // @@protoc_insertion_point(field_mutable:RouteNote.location)
  return location_;
}
inline void RouteNote::set_allocated_location(::Point* location) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete location_;
  }
  if (location) {
    ::google::protobuf::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      location = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, location, submessage_arena);
    }
    
  } else {
    
  }
  location_ = location;
  // @@protoc_insertion_point(field_set_allocated:RouteNote.location)
}

// string message = 2;
inline void RouteNote::clear_message() {
  message_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& RouteNote::message() const {
  // @@protoc_insertion_point(field_get:RouteNote.message)
  return message_.GetNoArena();
}
inline void RouteNote::set_message(const ::std::string& value) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:RouteNote.message)
}
#if LANG_CXX11
inline void RouteNote::set_message(::std::string&& value) {
  
  message_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:RouteNote.message)
}
#endif
inline void RouteNote::set_message(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:RouteNote.message)
}
inline void RouteNote::set_message(const char* value, size_t size) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:RouteNote.message)
}
inline ::std::string* RouteNote::mutable_message() {
  
  // @@protoc_insertion_point(field_mutable:RouteNote.message)
  return message_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* RouteNote::release_message() {
  // @@protoc_insertion_point(field_release:RouteNote.message)
  
  return message_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void RouteNote::set_allocated_message(::std::string* message) {
  if (message != nullptr) {
    
  } else {
    
  }
  message_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), message);
  // @@protoc_insertion_point(field_set_allocated:RouteNote.message)
}

// -------------------------------------------------------------------

// RouteSummary

// int32 point_count = 1;
inline void RouteSummary::clear_point_count() {
  point_count_ = 0;
}
inline ::google::protobuf::int32 RouteSummary::point_count() const {
  // @@protoc_insertion_point(field_get:RouteSummary.point_count)
  return point_count_;
}
inline void RouteSummary::set_point_count(::google::protobuf::int32 value) {
  
  point_count_ = value;
  // @@protoc_insertion_point(field_set:RouteSummary.point_count)
}

// int32 feature_count = 2;
inline void RouteSummary::clear_feature_count() {
  feature_count_ = 0;
}
inline ::google::protobuf::int32 RouteSummary::feature_count() const {
  // @@protoc_insertion_point(field_get:RouteSummary.feature_count)
  return feature_count_;
}
inline void RouteSummary::set_feature_count(::google::protobuf::int32 value) {
  
  feature_count_ = value;
  // @@protoc_insertion_point(field_set:RouteSummary.feature_count)
}

// int32 distance = 3;
inline void RouteSummary::clear_distance() {
  distance_ = 0;
}
inline ::google::protobuf::int32 RouteSummary::distance() const {
  // @@protoc_insertion_point(field_get:RouteSummary.distance)
  return distance_;
}
inline void RouteSummary::set_distance(::google::protobuf::int32 value) {
  
  distance_ = value;
  // @@protoc_insertion_point(field_set:RouteSummary.distance)
}

// int32 elapsed_time = 4;
inline void RouteSummary::clear_elapsed_time() {
  elapsed_time_ = 0;
}
inline ::google::protobuf::int32 RouteSummary::elapsed_time() const {
  // @@protoc_insertion_point(field_get:RouteSummary.elapsed_time)
  return elapsed_time_;
}
inline void RouteSummary::set_elapsed_time(::google::protobuf::int32 value) {
  
  elapsed_time_ = value;
  // @@protoc_insertion_point(field_set:RouteSummary.elapsed_time)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_route_5fguide_2eproto
