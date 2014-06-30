#ifndef __Krieg_platform_h__
#define __Krieg_platform_h__

#define __Krieg_msvc_compiler 1
    #define __Krieg_gnuc_compiler 2
        #define __Krieg_hpcc_compiler 3
            #define __Krieg_ibmc_compiler 4
                #define __Krieg_clang_compiler 5
                    #define __Krieg_intelc_compiler 6
#define __Krieg_win3_platform 1
    #define __Krieg_win6_platform 2
        #define __Krieg_linx3_platform 3
            #define __Krieg_linx6_platform 4
                #define __Krieg_type_32 1
                    #define __Krieg_type_64 2

#if defined(__clang__)
# define __Krieg_compiler __Krieg_clang_compiler
#elif defined(__ICC) || defined(__INTEL_COMPILER)
# define __Krieg_compiler __Krieg_intelc_compiler
#elif defined(__GNUC__) || defined(__GNUC__)
# define __Krieg_compiler __Krieg_gnuc_compiler
#elif defined(__HP_cc) || defined(__HP_aCC)
# define __Krieg_compiler __Krieg_hpcc_compiler
#elif defined(__IBMC__) || defined(__IBMCPP__)
# define __Krieg_compiler __Krieg_ibmc_compiler
#elif defined(_MSC_VER)
# define __Krieg_compiler __Krieg_msvc_compiler
#endif

#if defined(__WIN32) || defined(__WIN32__) || defined(WIN32) || defined(__WIN64) || defined(__WIN64__) || defined(WIN64)
#  if defined(__WIN32) || defined(__WIN32__) || defined(WIN32)
#     define __Krieg_platform __Krieg_win3_platform
#  else
#     define __Krieg_platform __Krieg_win6_platform
#  endif
#endif

#if defined(i386) || defined(__i386) || defined(__i386__) || defined(_M_IX86) || defined(_X86_)
#   define __Krieg_type __Krieg_type_32
#elif defined(__x86_64) || defined(__x86_64) || defined(__amd64) || defined(__amd64__) || defined(_M_AMD64) || defined(_M_X64)
#   define __Krieg_type __Krieg_type_64
#endif

#if __Krieg_type == __Krieg_type_32 && (defined(linux) || defined(__linux))
#   define __Krieg_platform __Krieg_linx3_platform
#elif __Krieg_type == __Krieg_type_64 && (defined(linux) || defined(__linux))
#   define __Krieg_platform __Krieg_linx6_platform
#endif

#endif // __Krieg_platform_h__
