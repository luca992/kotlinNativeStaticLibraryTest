#ifndef KONAN_LIBSTATICLIBTEST_H
#define KONAN_LIBSTATICLIBTEST_H
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
typedef bool            libstaticlibtest_KBoolean;
#else
typedef _Bool           libstaticlibtest_KBoolean;
#endif
typedef unsigned short     libstaticlibtest_KChar;
typedef signed char        libstaticlibtest_KByte;
typedef short              libstaticlibtest_KShort;
typedef int                libstaticlibtest_KInt;
typedef long long          libstaticlibtest_KLong;
typedef unsigned char      libstaticlibtest_KUByte;
typedef unsigned short     libstaticlibtest_KUShort;
typedef unsigned int       libstaticlibtest_KUInt;
typedef unsigned long long libstaticlibtest_KULong;
typedef float              libstaticlibtest_KFloat;
typedef double             libstaticlibtest_KDouble;
typedef void*              libstaticlibtest_KNativePtr;
struct libstaticlibtest_KType;
typedef struct libstaticlibtest_KType libstaticlibtest_KType;

typedef struct {
  libstaticlibtest_KNativePtr pinned;
} libstaticlibtest_kref_co_test_test;


typedef struct {
  /* Service functions. */
  void (*DisposeStablePointer)(libstaticlibtest_KNativePtr ptr);
  void (*DisposeString)(const char* string);
  libstaticlibtest_KBoolean (*IsInstance)(libstaticlibtest_KNativePtr ref, const libstaticlibtest_KType* type);

  /* User functions. */
  struct {
    struct {
      struct {
        struct {
          struct {
            libstaticlibtest_KType* (*_type)(void);
            libstaticlibtest_kref_co_test_test (*test)();
            void (*callMe)(libstaticlibtest_kref_co_test_test thiz);
          } test;
        } test;
      } co;
    } root;
  } kotlin;
} libstaticlibtest_ExportedSymbols;
extern libstaticlibtest_ExportedSymbols* libstaticlibtest_symbols(void);
#ifdef __cplusplus
}  /* extern "C" */
#endif
#endif  /* KONAN_LIBSTATICLIBTEST_H */
