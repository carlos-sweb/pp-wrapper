#include <gio/gio.h>

#if defined (__ELF__) && ( __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 6))
# define SECTION __attribute__ ((section (".gresource.resources"), aligned (8)))
#else
# define SECTION
#endif

#ifdef _MSC_VER
static const SECTION union { const guint8 data[743]; const double alignment; void * const ptr;}  resources_resource_data = { {
  0107, 0126, 0141, 0162, 0151, 0141, 0156, 0164, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 
  0030, 0000, 0000, 0000, 0000, 0001, 0000, 0000, 0000, 0000, 0000, 0050, 0010, 0000, 0000, 0000, 
  0000, 0000, 0000, 0000, 0001, 0000, 0000, 0000, 0001, 0000, 0000, 0000, 0002, 0000, 0000, 0000, 
  0002, 0000, 0000, 0000, 0004, 0000, 0000, 0000, 0005, 0000, 0000, 0000, 0010, 0000, 0000, 0000, 
  0170, 0350, 0034, 0175, 0002, 0000, 0000, 0000, 0000, 0001, 0000, 0000, 0005, 0000, 0114, 0000, 
  0010, 0001, 0000, 0000, 0014, 0001, 0000, 0000, 0172, 0231, 0243, 0373, 0000, 0000, 0000, 0000, 
  0014, 0001, 0000, 0000, 0014, 0000, 0114, 0000, 0030, 0001, 0000, 0000, 0034, 0001, 0000, 0000, 
  0324, 0265, 0002, 0000, 0377, 0377, 0377, 0377, 0034, 0001, 0000, 0000, 0001, 0000, 0114, 0000, 
  0040, 0001, 0000, 0000, 0050, 0001, 0000, 0000, 0214, 0301, 0211, 0013, 0002, 0000, 0000, 0000, 
  0050, 0001, 0000, 0000, 0004, 0000, 0114, 0000, 0054, 0001, 0000, 0000, 0060, 0001, 0000, 0000, 
  0365, 0344, 0212, 0223, 0001, 0000, 0000, 0000, 0060, 0001, 0000, 0000, 0012, 0000, 0166, 0000, 
  0100, 0001, 0000, 0000, 0223, 0002, 0000, 0000, 0106, 0211, 0244, 0376, 0006, 0000, 0000, 0000, 
  0223, 0002, 0000, 0000, 0004, 0000, 0114, 0000, 0230, 0002, 0000, 0000, 0234, 0002, 0000, 0000, 
  0216, 0260, 0212, 0116, 0003, 0000, 0000, 0000, 0234, 0002, 0000, 0000, 0014, 0000, 0114, 0000, 
  0250, 0002, 0000, 0000, 0254, 0002, 0000, 0000, 0116, 0005, 0340, 0100, 0005, 0000, 0000, 0000, 
  0254, 0002, 0000, 0000, 0011, 0000, 0166, 0000, 0270, 0002, 0000, 0000, 0346, 0002, 0000, 0000, 
  0150, 0164, 0155, 0154, 0057, 0000, 0000, 0000, 0001, 0000, 0000, 0000, 0160, 0165, 0142, 0154, 
  0151, 0143, 0137, 0150, 0164, 0155, 0154, 0057, 0004, 0000, 0000, 0000, 0057, 0000, 0000, 0000, 
  0003, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0143, 0163, 0163, 0057, 0006, 0000, 0000, 0000, 
  0151, 0156, 0144, 0145, 0170, 0056, 0150, 0164, 0155, 0154, 0000, 0000, 0000, 0000, 0000, 0000, 
  0103, 0001, 0000, 0000, 0000, 0000, 0000, 0000, 0074, 0041, 0104, 0117, 0103, 0124, 0131, 0120, 
  0105, 0040, 0150, 0164, 0155, 0154, 0076, 0012, 0074, 0150, 0164, 0155, 0154, 0040, 0154, 0141, 
  0156, 0147, 0075, 0042, 0145, 0156, 0042, 0076, 0012, 0074, 0150, 0145, 0141, 0144, 0076, 0012, 
  0040, 0040, 0074, 0155, 0145, 0164, 0141, 0040, 0143, 0150, 0141, 0162, 0163, 0145, 0164, 0075, 
  0042, 0125, 0124, 0106, 0055, 0070, 0042, 0076, 0012, 0040, 0040, 0074, 0155, 0145, 0164, 0141, 
  0040, 0156, 0141, 0155, 0145, 0075, 0042, 0166, 0151, 0145, 0167, 0160, 0157, 0162, 0164, 0042, 
  0040, 0143, 0157, 0156, 0164, 0145, 0156, 0164, 0075, 0042, 0167, 0151, 0144, 0164, 0150, 0075, 
  0144, 0145, 0166, 0151, 0143, 0145, 0055, 0167, 0151, 0144, 0164, 0150, 0054, 0040, 0151, 0156, 
  0151, 0164, 0151, 0141, 0154, 0055, 0163, 0143, 0141, 0154, 0145, 0075, 0061, 0056, 0060, 0042, 
  0076, 0012, 0040, 0040, 0074, 0155, 0145, 0164, 0141, 0040, 0150, 0164, 0164, 0160, 0055, 0145, 
  0161, 0165, 0151, 0166, 0075, 0042, 0130, 0055, 0125, 0101, 0055, 0103, 0157, 0155, 0160, 0141, 
  0164, 0151, 0142, 0154, 0145, 0042, 0040, 0143, 0157, 0156, 0164, 0145, 0156, 0164, 0075, 0042, 
  0151, 0145, 0075, 0145, 0144, 0147, 0145, 0042, 0076, 0012, 0040, 0040, 0074, 0154, 0151, 0156, 
  0153, 0040, 0162, 0145, 0154, 0075, 0042, 0163, 0164, 0171, 0154, 0145, 0163, 0150, 0145, 0145, 
  0164, 0042, 0040, 0150, 0162, 0145, 0146, 0075, 0042, 0057, 0143, 0163, 0163, 0057, 0163, 0164, 
  0171, 0154, 0145, 0056, 0143, 0163, 0163, 0042, 0076, 0012, 0040, 0040, 0074, 0164, 0151, 0164, 
  0154, 0145, 0076, 0104, 0157, 0143, 0165, 0155, 0145, 0156, 0164, 0074, 0057, 0164, 0151, 0164, 
  0154, 0145, 0076, 0012, 0074, 0057, 0150, 0145, 0141, 0144, 0076, 0012, 0074, 0142, 0157, 0144, 
  0171, 0076, 0012, 0040, 0040, 0040, 0040, 0074, 0150, 0062, 0076, 0110, 0145, 0154, 0154, 0157, 
  0040, 0127, 0157, 0162, 0144, 0074, 0057, 0150, 0062, 0076, 0012, 0074, 0057, 0142, 0157, 0144, 
  0171, 0076, 0012, 0074, 0057, 0150, 0164, 0155, 0154, 0076, 0012, 0000, 0000, 0050, 0165, 0165, 
  0141, 0171, 0051, 0143, 0163, 0163, 0057, 0000, 0007, 0000, 0000, 0000, 0160, 0165, 0142, 0154, 
  0151, 0143, 0137, 0150, 0164, 0155, 0154, 0057, 0005, 0000, 0000, 0000, 0163, 0164, 0171, 0154, 
  0145, 0056, 0143, 0163, 0163, 0000, 0000, 0000, 0036, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 
  0142, 0157, 0144, 0171, 0173, 0012, 0142, 0141, 0143, 0153, 0147, 0162, 0157, 0165, 0156, 0144, 
  0055, 0143, 0157, 0154, 0157, 0162, 0072, 0162, 0145, 0144, 0073, 0012, 0175, 0012, 0000, 0000, 
  0050, 0165, 0165, 0141, 0171, 0051
} };
#else /* _MSC_VER */
static const SECTION union { const guint8 data[743]; const double alignment; void * const ptr;}  resources_resource_data = {
  "\107\126\141\162\151\141\156\164\000\000\000\000\000\000\000\000"
  "\030\000\000\000\000\001\000\000\000\000\000\050\010\000\000\000"
  "\000\000\000\000\001\000\000\000\001\000\000\000\002\000\000\000"
  "\002\000\000\000\004\000\000\000\005\000\000\000\010\000\000\000"
  "\170\350\034\175\002\000\000\000\000\001\000\000\005\000\114\000"
  "\010\001\000\000\014\001\000\000\172\231\243\373\000\000\000\000"
  "\014\001\000\000\014\000\114\000\030\001\000\000\034\001\000\000"
  "\324\265\002\000\377\377\377\377\034\001\000\000\001\000\114\000"
  "\040\001\000\000\050\001\000\000\214\301\211\013\002\000\000\000"
  "\050\001\000\000\004\000\114\000\054\001\000\000\060\001\000\000"
  "\365\344\212\223\001\000\000\000\060\001\000\000\012\000\166\000"
  "\100\001\000\000\223\002\000\000\106\211\244\376\006\000\000\000"
  "\223\002\000\000\004\000\114\000\230\002\000\000\234\002\000\000"
  "\216\260\212\116\003\000\000\000\234\002\000\000\014\000\114\000"
  "\250\002\000\000\254\002\000\000\116\005\340\100\005\000\000\000"
  "\254\002\000\000\011\000\166\000\270\002\000\000\346\002\000\000"
  "\150\164\155\154\057\000\000\000\001\000\000\000\160\165\142\154"
  "\151\143\137\150\164\155\154\057\004\000\000\000\057\000\000\000"
  "\003\000\000\000\000\000\000\000\143\163\163\057\006\000\000\000"
  "\151\156\144\145\170\056\150\164\155\154\000\000\000\000\000\000"
  "\103\001\000\000\000\000\000\000\074\041\104\117\103\124\131\120"
  "\105\040\150\164\155\154\076\012\074\150\164\155\154\040\154\141"
  "\156\147\075\042\145\156\042\076\012\074\150\145\141\144\076\012"
  "\040\040\074\155\145\164\141\040\143\150\141\162\163\145\164\075"
  "\042\125\124\106\055\070\042\076\012\040\040\074\155\145\164\141"
  "\040\156\141\155\145\075\042\166\151\145\167\160\157\162\164\042"
  "\040\143\157\156\164\145\156\164\075\042\167\151\144\164\150\075"
  "\144\145\166\151\143\145\055\167\151\144\164\150\054\040\151\156"
  "\151\164\151\141\154\055\163\143\141\154\145\075\061\056\060\042"
  "\076\012\040\040\074\155\145\164\141\040\150\164\164\160\055\145"
  "\161\165\151\166\075\042\130\055\125\101\055\103\157\155\160\141"
  "\164\151\142\154\145\042\040\143\157\156\164\145\156\164\075\042"
  "\151\145\075\145\144\147\145\042\076\012\040\040\074\154\151\156"
  "\153\040\162\145\154\075\042\163\164\171\154\145\163\150\145\145"
  "\164\042\040\150\162\145\146\075\042\057\143\163\163\057\163\164"
  "\171\154\145\056\143\163\163\042\076\012\040\040\074\164\151\164"
  "\154\145\076\104\157\143\165\155\145\156\164\074\057\164\151\164"
  "\154\145\076\012\074\057\150\145\141\144\076\012\074\142\157\144"
  "\171\076\012\040\040\040\040\074\150\062\076\110\145\154\154\157"
  "\040\127\157\162\144\074\057\150\062\076\012\074\057\142\157\144"
  "\171\076\012\074\057\150\164\155\154\076\012\000\000\050\165\165"
  "\141\171\051\143\163\163\057\000\007\000\000\000\160\165\142\154"
  "\151\143\137\150\164\155\154\057\005\000\000\000\163\164\171\154"
  "\145\056\143\163\163\000\000\000\036\000\000\000\000\000\000\000"
  "\142\157\144\171\173\012\142\141\143\153\147\162\157\165\156\144"
  "\055\143\157\154\157\162\072\162\145\144\073\012\175\012\000\000"
  "\050\165\165\141\171\051" };
#endif /* !_MSC_VER */

static GStaticResource static_resource = { resources_resource_data.data, sizeof (resources_resource_data.data) - 1 /* nul terminator */, NULL, NULL, NULL };

G_MODULE_EXPORT
GResource *resources_get_resource (void);
GResource *resources_get_resource (void)
{
  return g_static_resource_get_resource (&static_resource);
}
/*
  If G_HAS_CONSTRUCTORS is true then the compiler support *both* constructors and
  destructors, in a usable way, including e.g. on library unload. If not you're on
  your own.

  Some compilers need #pragma to handle this, which does not work with macros,
  so the way you need to use this is (for constructors):

  #ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
  #pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(my_constructor)
  #endif
  G_DEFINE_CONSTRUCTOR(my_constructor)
  static void my_constructor(void) {
   ...
  }

*/

#ifndef __GTK_DOC_IGNORE__

#if  __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 7)

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR(_func) static void __attribute__((constructor)) _func (void);
#define G_DEFINE_DESTRUCTOR(_func) static void __attribute__((destructor)) _func (void);

#elif defined (_MSC_VER) && (_MSC_VER >= 1500)
/* Visual studio 2008 and later has _Pragma */

#include <stdlib.h>

#define G_HAS_CONSTRUCTORS 1

/* We do some weird things to avoid the constructors being optimized
 * away on VS2015 if WholeProgramOptimization is enabled. First we
 * make a reference to the array from the wrapper to make sure its
 * references. Then we use a pragma to make sure the wrapper function
 * symbol is always included at the link stage. Also, the symbols
 * need to be extern (but not dllexport), even though they are not
 * really used from another object file.
 */

/* We need to account for differences between the mangling of symbols
 * for x86 and x64/ARM/ARM64 programs, as symbols on x86 are prefixed
 * with an underscore but symbols on x64/ARM/ARM64 are not.
 */
#ifdef _M_IX86
#define G_MSVC_SYMBOL_PREFIX "_"
#else
#define G_MSVC_SYMBOL_PREFIX ""
#endif

#define G_DEFINE_CONSTRUCTOR(_func) G_MSVC_CTOR (_func, G_MSVC_SYMBOL_PREFIX)
#define G_DEFINE_DESTRUCTOR(_func) G_MSVC_DTOR (_func, G_MSVC_SYMBOL_PREFIX)

#define G_MSVC_CTOR(_func,_sym_prefix) \
  static void _func(void); \
  extern int (* _array ## _func)(void);              \
  int _func ## _wrapper(void) { _func(); g_slist_find (NULL,  _array ## _func); return 0; } \
  __pragma(comment(linker,"/include:" _sym_prefix # _func "_wrapper")) \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) int (* _array ## _func)(void) = _func ## _wrapper;

#define G_MSVC_DTOR(_func,_sym_prefix) \
  static void _func(void); \
  extern int (* _array ## _func)(void);              \
  int _func ## _constructor(void) { atexit (_func); g_slist_find (NULL,  _array ## _func); return 0; } \
   __pragma(comment(linker,"/include:" _sym_prefix # _func "_constructor")) \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) int (* _array ## _func)(void) = _func ## _constructor;

#elif defined (_MSC_VER)

#define G_HAS_CONSTRUCTORS 1

/* Pre Visual studio 2008 must use #pragma section */
#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  section(".CRT$XCU",read)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _wrapper(void) { _func(); return 0; } \
  __declspec(allocate(".CRT$XCU")) static int (*p)(void) = _func ## _wrapper;

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  section(".CRT$XCU",read)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _constructor(void) { atexit (_func); return 0; } \
  __declspec(allocate(".CRT$XCU")) static int (* _array ## _func)(void) = _func ## _constructor;

#elif defined(__SUNPRO_C)

/* This is not tested, but i believe it should work, based on:
 * http://opensource.apple.com/source/OpenSSL098/OpenSSL098-35/src/fips/fips_premain.c
 */

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  init(_func)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void);

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  fini(_func)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void);

#else

/* constructors not supported for this compiler */

#endif

#endif /* __GTK_DOC_IGNORE__ */

#ifdef G_HAS_CONSTRUCTORS

#ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(resource_constructor)
#endif
G_DEFINE_CONSTRUCTOR(resource_constructor)
#ifdef G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(resource_destructor)
#endif
G_DEFINE_DESTRUCTOR(resource_destructor)

#else
#warning "Constructor not supported on this compiler, linking in resources will not work"
#endif

static void resource_constructor (void)
{
  g_static_resource_init (&static_resource);
}

static void resource_destructor (void)
{
  g_static_resource_fini (&static_resource);
}
