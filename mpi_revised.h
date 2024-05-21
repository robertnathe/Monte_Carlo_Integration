/* ompi/include/mpi.h.  Generated from mpi.h.in by configure.  */
/*
 * Copyright (c) 2004-2005 The Trustees of Indiana University and Indiana
 *                         University Research and Technology
 *                         Corporation.  All rights reserved.
 * Copyright (c) 2004-2021 The University of Tennessee and The University
 *                         of Tennessee Research Foundation.  All rights
 *                         reserved.
 * Copyright (c) 2004-2007 High Performance Computing Center Stuttgart,
 *                         University of Stuttgart.  All rights reserved.
 * Copyright (c) 2004-2005 The Regents of the University of California.
 *                         All rights reserved.
 * Copyright (c) 2007-2022 Cisco Systems, Inc.  All rights reserved
 * Copyright (c) 2008-2009 Sun Microsystems, Inc.  All rights reserved.
 * Copyright (c) 2009-2012 Oak Rigde National Laboratory.  All rights reserved.
 * Copyright (c) 2011-2020 Sandia National Laboratories. All rights reserved.
 * Copyright (c) 2012-2018 Los Alamos National Security, LLC. All rights
 *                         reserved.
 * Copyright (c) 2011-2013 INRIA.  All rights reserved.
 * Copyright (c) 2015      University of Houston. All rights reserved.
 * Copyright (c) 2015-2023 Research Organization for Information Science
 *                         and Technology (RIST).  All rights reserved.
 * Copyright (c) 2017-2022 IBM Corporation.  All rights reserved.
 * Copyright (c) 2018      FUJITSU LIMITED.  All rights reserved.
 * Copyright (c) 2021-2022 Google, LLC. All rights reserved.
 * Copyright (c) 2021-2022 Amazon.com, Inc. or its affiliates.  All Rights
 *                         reserved.
 * Copyright (c) 2021      Bull S.A.S. All rights reserved.
 * Copyright (c) 2018      Triad National Security, LLC. All rights
 * Copyright (c) 2018-2022 Triad National Security, LLC. All rights
 *                         reserved.
 * $COPYRIGHT$
 *
 * Additional copyrights may follow
 *
 * $HEADER$
 */

#ifndef OMPI_MPI_H
#define OMPI_MPI_H

/* The comment below (and the ending partner) are for building fat
   distributions on platforms that support it.  Please do not remove */

/* @OMPI_BEGIN_CONFIGURE_SECTION@ */

#ifndef OMPI_CONFIG_H

/* Only include these if OMPI_CONFIG_H isn't defined (meaning if
   ompi_config.h hasn't already been included).  Otherwise, we'll
   duplicate all those symbols.  OMPI coding standards say that
   ompi_config.h must be included before all other files, so this
   should be good enough */

/* The compiler id which OMPI was built with */
#define OPAL_BUILD_PLATFORM_COMPILER_FAMILYID 1

/* The compiler version which OMPI was built with */
#define OPAL_BUILD_PLATFORM_COMPILER_VERSION 721920

/* Define to 1 if you have the ANSI C header files. */
#define OPAL_STDC_HEADERS 1

/* Whether your compiler has __attribute__ deprecated or not */
#define OPAL_HAVE_ATTRIBUTE_DEPRECATED 1

/* Whether your compiler has __attribute__ deprecated with the optional argument */
#define OPAL_HAVE_ATTRIBUTE_DEPRECATED_ARGUMENT 1

/* Whether you compiler has __attribute__ error or not */
#define OPAL_HAVE_ATTRIBUTE_ERROR 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define OPAL_HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/synch.h> header file. */
/* #undef OPAL_HAVE_SYS_SYNCH_H */

/* Define to 1 if the system has the type `long long'. */
#define OPAL_HAVE_LONG_LONG 1

/* The size of a `bool', as computed by sizeof. */
/* #undef OPAL_SIZEOF_BOOL */

/* The size of a `int', as computed by sizeof. */
/* #undef OPAL_SIZEOF_INT */

/* The size of a `void*', as computed by sizeof. */
/* #undef OPAL_SIZEOF_VOID_P */

/* Maximum length of datarep string (default is 128) */
#define OPAL_MAX_DATAREP_STRING 128

/* Maximum length of error strings (default is 256) */
#define OPAL_MAX_ERROR_STRING 256

/* Maximum length of info keys (default is 36) */
#define OPAL_MAX_INFO_KEY 36

/* Maximum length of info vals (default is 256) */
#define OPAL_MAX_INFO_VAL 256

/* Maximum length of object names (default is 64) */
#define OPAL_MAX_OBJECT_NAME 64

/* Maximum length of port names (default is 1024) */
#define OPAL_MAX_PORT_NAME 1024

/* Maximum length of processor names (default is 256) */
#define OPAL_MAX_PROCESSOR_NAME 256

/* Maximum length of processor names (default is 1024) */
#define OPAL_MAX_PSET_NAME_LEN 512

/* Maximum length of from group tag (default is 256) */
#define OPAL_MAX_STRINGTAG_LEN 1024

/* The number or Fortran INTEGER in MPI Status */
#define OMPI_FORTRAN_STATUS_SIZE 6

/* Whether we have FORTRAN LOGICAL*1 or not */
#define OMPI_HAVE_FORTRAN_LOGICAL1 0

/* Whether we have FORTRAN LOGICAL*2 or not */
#define OMPI_HAVE_FORTRAN_LOGICAL2 0

/* Whether we have FORTRAN LOGICAL*4 or not */
#define OMPI_HAVE_FORTRAN_LOGICAL4 0

/* Whether we have FORTRAN LOGICAL*8 or not */
#define OMPI_HAVE_FORTRAN_LOGICAL8 0

/* Whether we have FORTRAN INTEGER*1 or not */
#define OMPI_HAVE_FORTRAN_INTEGER1 0

/* Whether we have FORTRAN INTEGER*16 or not */
#define OMPI_HAVE_FORTRAN_INTEGER16 0

/* Whether we have FORTRAN INTEGER*2 or not */
#define OMPI_HAVE_FORTRAN_INTEGER2 0

/* Whether we have FORTRAN INTEGER*4 or not */
#define OMPI_HAVE_FORTRAN_INTEGER4 0

/* Whether we have FORTRAN INTEGER*8 or not */
#define OMPI_HAVE_FORTRAN_INTEGER8 0

/* Whether we have FORTRAN REAL*16 or not */
#define OMPI_HAVE_FORTRAN_REAL16 0

/* Whether we have FORTRAN REAL*2 or not */
#define OMPI_HAVE_FORTRAN_REAL2 0

/* Whether we have FORTRAN REAL*4 or not */
#define OMPI_HAVE_FORTRAN_REAL4 0

/* Whether we have FORTRAN REAL*8 or not */
#define OMPI_HAVE_FORTRAN_REAL8 0

/* Whether in include MPI-1 compatibility */
#define OMPI_ENABLE_MPI1_COMPAT 0

/* Whether we have float _Complex  or not */
#define HAVE_FLOAT__COMPLEX 1

/* Whether we have double _Complex  or not */
#define HAVE_DOUBLE__COMPLEX 1

/* Whether we have long double _Complex  or not */
#define HAVE_LONG_DOUBLE__COMPLEX 1

/* Type of MPI_Aint */
#define OMPI_MPI_AINT_TYPE ptrdiff_t

/* Type of MPI_Offset */
#define OMPI_MPI_OFFSET_TYPE long long

/* MPI datatype corresponding to MPI_Offset */
#define OMPI_OFFSET_DATATYPE MPI_LONG_LONG

/* Size of the MPI_Offset corresponding type */
#define OMPI_MPI_OFFSET_SIZE 8

/* Type of MPI_Count */
#define OMPI_MPI_COUNT_TYPE long long

/* type to use for ptrdiff_t, if it does not exist, set to ptrdiff_t if it does exist */
/* #undef ptrdiff_t */

/* Whether OMPI was built with parameter checking or not */
#define OMPI_PARAM_CHECK 1

/* Enable warnings in wrong usage (e.g. deprecated) in user-level code */
#ifndef OMPI_WANT_MPI_INTERFACE_WARNING
#define OMPI_WANT_MPI_INTERFACE_WARNING 1
#endif

/* Major, minor, and release version of Open MPI */
#define OMPI_MAJOR_VERSION 5
#define OMPI_MINOR_VERSION 0
#define OMPI_RELEASE_VERSION 1

/*
 * MPI version
 */
#define MPI_VERSION 3
#define MPI_SUBVERSION 1

/* A  type that allows us to have sentinel type values that are still
   valid */
#define ompi_fortran_bogus_type_t int

/* C type corresponding to FORTRAN INTEGER */
#define ompi_fortran_integer_t ompi_fortran_bogus_type_t

/* Whether C compiler supports -fvisibility */
#define OPAL_C_HAVE_VISIBILITY 1

#ifndef OMPI_DECLSPEC
#  if defined(WIN32) || defined(_WIN32)
#    if defined(OMPI_IMPORTS)
#      define OMPI_DECLSPEC        __declspec(dllimport)
#    else
#      define OMPI_DECLSPEC
#    endif  /* defined(OMPI_IMPORTS) */
#  else
#    if OPAL_C_HAVE_VISIBILITY == 1
#       define OMPI_DECLSPEC __attribute__((visibility("default")))
#    else
#       define OMPI_DECLSPEC
#    endif
#  endif
#endif

#ifndef MPI_Fint
/* MPI_Fint is the same as ompi_fortran_INTEGER_t */
#define MPI_Fint ompi_fortran_integer_t
#endif

#endif /* #ifndef OMPI_CONFIG_H */

/* @OMPI_END_CONFIGURE_SECTION@ */

/* include for ptrdiff_t */
#ifdef OPAL_STDC_HEADERS
#include <stddef.h>
#endif

#ifndef OMPI_BUILDING
#define OMPI_BUILDING 0
#endif


/*
 * Just in case you need it.  :-)
 */
#define OPEN_MPI 1


/*
 * Do we want MPI interface deprecated function warnings?  This is
 * only relevant if we're not building Open MPI (i.e., we're compiling an
 * MPI application).
 */
#if !OMPI_BUILDING
     /*
      * Figure out which compiler is being invoked (in order to compare if
      * it was different than what OMPI was built with).  Do some preprocessor
      * hacks to eliminate warnings in the portable_platform.h file.
      */
#    ifndef SIZEOF_VOID_P
#    define CLEANUP_SIZEOF_VOID_P 1
#    define SIZEOF_VOID_P 8
#    else
#    define CLEANUP_SIZEOF_VOID_P 0
#    endif

#    ifndef _PORTABLE_PLATFORM_H
#    define _PORTABLE_PLATFORM_H 0
#    endif
#    ifndef PLATFORM_HEADER_VERSION
#    define PLATFORM_HEADER_VERSION 0
#    endif

//#    include "mpi_portable_platform.h"
/*   $Source: bitbucket.org:berkeleylab/gasnet.git/other/portable_platform.h $
 * Description: Portable platform detection header
 * Copyright 2006, Dan Bonachea 
 * Copyright 2018, The Regents of the University of California
 * Terms of Use: In ADDITION to the license information in license.txt, 
 *  anyone redistributing this header agrees not to change any part of this notice, or
 *  the version handshake in the header versioning section below. 
 *  Furthermore, redistributed copies of any portion of this header must
 *  not appear within files named "portable_platform.h" or "gasnet_portable_platform.h",
 *  unless it is embedded within a complete copy of the GASNet distribution.
 *  These restrictions are designed to prevent conflicts for end users 
 *  who compose multiple projects using the PLATFORM_ namespace.
 *
 * The canonical version of this header is hosted in the GASNet project at:
 *   https://bitbucket.org/berkeleylab/gasnet   
 *
 * Developers who clone this header into their own project are HIGHLY encouraged to  
 * contribute any improvements (especially addition of new platforms) back to the 
 * canonical version, for the benefit of the community. 
 * Contributions and bug reports should be directed to:
 *   https://gasnet-bugs.lbl.gov or gasnet-staff@lbl.gov
 */
/* ------------------------------------------------------------------------------------ */
/* Header versioning: DO NOT CHANGE ANYTHING IN THIS SECTION 
 * The license terms for this header prohibit modifying this section in ANY way.
   Clones should continue to advertise a PLATFORM_HEADER_VERSION equal to the canonical version they cloned,
   and should not modify the handshake logic which ensures the highest canonical header version is used.
 */
/* Publish and enforce version number for the public interface to this header */
/* YOU ARE NOT PERMITTED TO CHANGE THIS SECTION WITHOUT DIRECT APPROVAL FROM DAN BONACHEA */
#if _PORTABLE_PLATFORM_H != PLATFORM_HEADER_VERSION \
     || PLATFORM_HEADER_VERSION < 16
#undef  PLATFORM_HEADER_VERSION 
#define PLATFORM_HEADER_VERSION 16
#undef  _PORTABLE_PLATFORM_H
#define _PORTABLE_PLATFORM_H PLATFORM_HEADER_VERSION
/* End Header versioning handshake */
/* ------------------------------------------------------------------------------------ */

/* make sure that previously-included older/broken clones of this header do not pollute our namespace */
#undef PLATFORM_COMPILER_FAMILYNAME
#undef PLATFORM_COMPILER_FAMILYID
#undef PLATFORM_COMPILER_ID
#undef PLATFORM_COMPILER_VERSION
#undef PLATFORM_COMPILER_VERSION_STR
#undef PLATFORM_COMPILER_VERSION_INT
#undef PLATFORM_COMPILER_IDSTR
#undef PLATFORM_COMPILER_VERSION_GT
#undef PLATFORM_COMPILER_VERSION_GE
#undef PLATFORM_COMPILER_VERSION_EQ
#undef PLATFORM_COMPILER_VERSION_LE
#undef PLATFORM_COMPILER_VERSION_LT
#undef PLATFORM_COMPILER_C_LANGLVL
#undef PLATFORM_COMPILER_CXX_LANGLVL
#undef PLATFORM_COMPILER_INTEL
#undef PLATFORM_COMPILER_INTEL_C
#undef PLATFORM_COMPILER_INTEL_CXX
#undef PLATFORM_COMPILER_PATHSCALE
#undef PLATFORM_COMPILER_PATHSCALE_C
#undef PLATFORM_COMPILER_PATHSCALE_CXX
#undef PLATFORM_COMPILER_PGI
#undef PLATFORM_COMPILER_PGI_C
#undef PLATFORM_COMPILER_PGI_CXX
#undef PLATFORM_COMPILER_XLC
#undef PLATFORM_COMPILER_XLC_C
#undef PLATFORM_COMPILER_XLC_CXX
#undef PLATFORM_COMPILER_COMPAQ
#undef PLATFORM_COMPILER_COMPAQ_C
#undef PLATFORM_COMPILER_COMPAQ_CXX
#undef PLATFORM_COMPILER_SUN
#undef PLATFORM_COMPILER_SUN_C
#undef PLATFORM_COMPILER_SUN_CXX
#undef PLATFORM_COMPILER_HP
#undef PLATFORM_COMPILER_HP_C
#undef PLATFORM_COMPILER_HP_CXX
#undef PLATFORM_COMPILER_SGI
#undef PLATFORM_COMPILER_SGI_C
#undef PLATFORM_COMPILER_SGI_CXX
#undef PLATFORM_COMPILER_CRAY
#undef PLATFORM_COMPILER_CRAY_C
#undef PLATFORM_COMPILER_CRAY_CXX
#undef PLATFORM_COMPILER_KAI
#undef PLATFORM_COMPILER_KAI_C
#undef PLATFORM_COMPILER_KAI_CXX
#undef PLATFORM_COMPILER_MTA
#undef PLATFORM_COMPILER_MTA_C
#undef PLATFORM_COMPILER_MTA_CXX
#undef PLATFORM_COMPILER_NECSX
#undef PLATFORM_COMPILER_NECSX_C
#undef PLATFORM_COMPILER_NECSX_CXX
#undef PLATFORM_COMPILER_MICROSOFT
#undef PLATFORM_COMPILER_MICROSOFT_C
#undef PLATFORM_COMPILER_MICROSOFT_CXX
#undef PLATFORM_COMPILER_TINY
#undef PLATFORM_COMPILER_TINY_C
#undef PLATFORM_COMPILER_TINY_CXX
#undef PLATFORM_COMPILER_LCC
#undef PLATFORM_COMPILER_LCC_C
#undef PLATFORM_COMPILER_LCC_CXX
#undef PLATFORM_COMPILER_OPEN64
#undef PLATFORM_COMPILER_OPEN64_C
#undef PLATFORM_COMPILER_OPEN64_CXX
#undef PLATFORM_COMPILER_PCC
#undef PLATFORM_COMPILER_PCC_C
#undef PLATFORM_COMPILER_PCC_CXX
#undef PLATFORM_COMPILER_CLANG
#undef PLATFORM_COMPILER_CLANG_C
#undef PLATFORM_COMPILER_CLANG_CXX
#undef PLATFORM_COMPILER_NVHPC
#undef PLATFORM_COMPILER_NVHPC_C
#undef PLATFORM_COMPILER_NVHPC_CXX
#undef PLATFORM_COMPILER_GNU
#undef PLATFORM_COMPILER_GNU_C
#undef PLATFORM_COMPILER_GNU_CXX
#undef PLATFORM_COMPILER_UNKNOWN

#undef PLATFORM_OS_FAMILYNAME
#undef PLATFORM_OS_CATAMOUNT
#undef PLATFORM_OS_CNL
#undef PLATFORM_OS_BGP
#undef PLATFORM_OS_BGQ
#undef PLATFORM_OS_WSL
#undef PLATFORM_OS_K42
#undef PLATFORM_OS_UCLINUX
#undef PLATFORM_OS_LINUX
#undef PLATFORM_OS_BLRTS
#undef PLATFORM_OS_CYGWIN
#undef PLATFORM_OS_MSWINDOWS
#undef PLATFORM_OS_AIX
#undef PLATFORM_OS_TRU64
#undef PLATFORM_OS_FREEBSD
#undef PLATFORM_OS_NETBSD
#undef PLATFORM_OS_OPENBSD
#undef PLATFORM_OS_SOLARIS
#undef PLATFORM_OS_DARWIN
#undef PLATFORM_OS_IRIX
#undef PLATFORM_OS_HPUX
#undef PLATFORM_OS_UNICOS
#undef PLATFORM_OS_MTA
#undef PLATFORM_OS_SUPERUX
#undef PLATFORM_OS_UNKNOWN

#undef PLATFORM_ARCH_FAMILYNAME
#undef PLATFORM_ARCH_32
#undef _PLATFORM_ARCH_32
#undef PLATFORM_ARCH_64
#undef _PLATFORM_ARCH_64
#undef PLATFORM_ARCH_BIG_ENDIAN
#undef _PLATFORM_ARCH_BIG_ENDIAN
#undef PLATFORM_ARCH_LITTLE_ENDIAN
#undef _PLATFORM_ARCH_LITTLE_ENDIAN
#undef PLATFORM_ARCH_POWERPC
#undef PLATFORM_ARCH_MIC
#undef PLATFORM_ARCH_X86_64
#undef PLATFORM_ARCH_IA64
#undef PLATFORM_ARCH_X86
#undef PLATFORM_ARCH_ALPHA
#undef PLATFORM_ARCH_MIPS
#undef PLATFORM_ARCH_SPARC
#undef PLATFORM_ARCH_PARISC
#undef PLATFORM_ARCH_CRAYX1
#undef PLATFORM_ARCH_CRAYT3E
#undef PLATFORM_ARCH_MTA
#undef PLATFORM_ARCH_NECSX
#undef PLATFORM_ARCH_MICROBLAZE
#undef PLATFORM_ARCH_ARM
#undef PLATFORM_ARCH_AARCH64
#undef PLATFORM_ARCH_TILE
#undef PLATFORM_ARCH_S390
#undef PLATFORM_ARCH_UNKNOWN

/* prevent known old/broken versions of this header from loading */
#undef  OMPI_PORTABLE_PLATFORM_H
#define OMPI_PORTABLE_PLATFORM_H
#undef  OPAL_PORTABLE_PLATFORM_H
#define OPAL_PORTABLE_PLATFORM_H

/* ------------------------------------------------------------------------------------ */
/* most of this file was written based on information in vendor documents, system headers,
   and inspecting verbose compiler output. 
   Another useful source of information: http://predef.sourceforge.net/
*/

/* ------------------------------------------------------------------------------------ */
/* helpers */

#undef  _PLATFORM_STRINGIFY_HELPER
#define _PLATFORM_STRINGIFY_HELPER(x) #x
#undef  PLATFORM_STRINGIFY
#define PLATFORM_STRINGIFY(x) _PLATFORM_STRINGIFY_HELPER(x)

/* ------------------------------------------------------------------------------------ */
/* Compiler detection */
/* 
  PLATFORM_COMPILER_<family>:
     defined to 1 if compiler is a given family, undef otherwise
  PLATFORM_COMPILER_<family>_C
  PLATFORM_COMPILER_<family>_CXX
     defined to 1 if compiler is a given family, and is the C or C++ compiler, respectively
  PLATFORM_COMPILER_FAMILYNAME:
     unquoted token which provides the compiler family name
  PLATFORM_COMPILER_FAMILYID:
     defined to a positive integral value which is unique to a given compiler family
     or zero if the compiler is unrecognized
  PLATFORM_COMPILER_ID:
     same as PLATFORM_COMPILER_FAMILYID, except C and C++ compilers are differentiated
  PLATFORM_COMPILER_VERSION:
     defined to an integral expression which is guaranteed to be monotonically non-decreasing 
     with increasing compiler versions. Will be zero for unrecognized compilers.
     The exact encoding of compiler version tuples into this constant may occasionally
     change when this header is upgraded, so code should use the (in)equality macros below
     to check against particular compiler versions, instead of embedding an encoded constant.
  PLATFORM_COMPILER_VERSION_STR:
     A string representation of the compiler version, which may contain additional info
  PLATFORM_COMPILER_VERSION_[GT,GE,EQ,LE,LT](maj,min,pat):
     evaluate to non-zero iff the compiler version in use is respectively 
     greater-than, greater-or-equal, equal, less-or-equal, less-than 
     the provided version components
  PLATFORM_COMPILER_IDSTR:
     a string which uniquely identifies recognized compilers
  PLATFORM_COMPILER_C_LANGLVL and PLATFORM_COMPILER_CXX_LANGLVL: (in PLATFORM_HEADER_VERSION >= 5)
     defined to a positive integral value corresponding to the C or C++ (respectively) 
     language standard to which the current compiler advertises conformance.
     Otherwise undef (in particular at most one of these is defined in a given compilation).
*/

#if defined(__INTEL_COMPILER)
  #define PLATFORM_COMPILER_INTEL  1
  #define PLATFORM_COMPILER_FAMILYNAME INTEL
  #define PLATFORM_COMPILER_FAMILYID 2
  #ifdef __cplusplus
    #define PLATFORM_COMPILER_INTEL_CXX  1
  #else
    #define PLATFORM_COMPILER_INTEL_C  1
  #endif
  /* Intel compiler version "patch number"
   * -------------------------------------
   * Intel compiler versioning is unfortunately complicated by behavioral changes.
   * Versions prior to Intel 14.0.0 (Sept 2013) lacked a preprocessor symbol to supply the "update" number.
   * Version 14.0.0 and later supply a __INTEL_COMPILER_UPDATE symbol, but sadly several releases of Version 19 
   * report the wrong value in this field (bug 3876).
   * For now, the "patch" field of the PLATFORM_COMPILER_VERSION for Intel is the release package BUILD DATE,
   * in the same decimal YYYYMMDD format as __INTEL_COMPILER_BUILD_DATE, as this is the only indicator that has
   * remained reliably stable/correct across versions. 
   * So for example to check for icc --version "19.0.1.144 20181018" or later, pass:
   *   PLATFORM_COMPILER_VERSION_GE(19, 0, 20181018)
   * NOTE 1: this build-date is unfortunately OS-DEPENDENT, sometimes differing by several days or weeks 
   * between the Linux and OSX releases. For a complete mapping, see:
   * https://software.intel.com/en-us/articles/intel-compiler-and-composer-update-version-numbers-to-compiler-version-number-mapping
   * NOTE 2: some of the build-date entries in the table linked above have been observed to be incorrect,
   * so when possible it's safest to verify the build-date from `icc --version` on both Linux and macOS.
   */
  #undef  _PLATFORM_INTEL_COMPILER_BUILD_DATE
  #undef  _PLATFORM_COMPILER_INTEL_MIN_BUILDDATE
  #define _PLATFORM_COMPILER_INTEL_MIN_BUILDDATE 19900000 /* year 1990: corresponds roughly to Intel v4.5 (1992) */
  /* MIN_BUILDDATE is used to normalize build dates to a bit-saving range for the encoding
   * Intel officially supports the current release and two prior (currently back to 2016)
   * Our 1990 floor corresponds to Intel v4.x that only worked on MS-DOS and predates both Linux and BSD-based macOS
   */
  #ifdef __INTEL_COMPILER_BUILD_DATE
    #define _PLATFORM_INTEL_COMPILER_BUILD_DATE __INTEL_COMPILER_BUILD_DATE
  #else
    #define _PLATFORM_INTEL_COMPILER_BUILD_DATE _PLATFORM_COMPILER_INTEL_MIN_BUILDDATE
  #endif
  /* Intel patch number is a decimal build date: YYYYMMDD - do NOT pass the "update number" */
  #define PLATFORM_COMPILER_VERSION_INT(maj,min,pat)         \
        (((((maj) * 100) + (min)) << 19) |                    \
           ((pat) < _PLATFORM_COMPILER_INTEL_MIN_BUILDDATE ? \
             0 : ((pat)-_PLATFORM_COMPILER_INTEL_MIN_BUILDDATE)))
  #undef _PLATFORM__INTEL_COMPILER
  #if __INTEL_COMPILER == 9999  /* Seen in 20110811 release of 12.1.0 - overflows VERSION_INT() */
    #define _PLATFORM__INTEL_COMPILER 1201
  #else
    #define _PLATFORM__INTEL_COMPILER __INTEL_COMPILER
  #endif
  #define PLATFORM_COMPILER_VERSION \
          PLATFORM_COMPILER_VERSION_INT(_PLATFORM__INTEL_COMPILER/100, _PLATFORM__INTEL_COMPILER%100, _PLATFORM_INTEL_COMPILER_BUILD_DATE)
  #define PLATFORM_COMPILER_VERSION_STR \
          PLATFORM_STRINGIFY(_PLATFORM__INTEL_COMPILER) "." PLATFORM_STRINGIFY(_PLATFORM_INTEL_COMPILER_BUILD_DATE)

#elif defined(__PATHSCALE__)
  #define PLATFORM_COMPILER_PATHSCALE  1
  #define PLATFORM_COMPILER_FAMILYNAME PATHSCALE
  #define PLATFORM_COMPILER_FAMILYID 3
  #ifdef __cplusplus
    #define PLATFORM_COMPILER_PATHSCALE_CXX  1
  #else
    #define PLATFORM_COMPILER_PATHSCALE_C  1
  #endif
  #define PLATFORM_COMPILER_VERSION \
          PLATFORM_COMPILER_VERSION_INT(__PATHCC__,__PATHCC_MINOR__,__PATHCC_PATCHLEVEL__+0)
  #define PLATFORM_COMPILER_VERSION_STR __PATHSCALE__

#elif defined(__NVCOMPILER) // Must occur prior to PGI and CLANG
  #define PLATFORM_COMPILER_NVHPC  1
  #define PLATFORM_COMPILER_FAMILYNAME NVHPC
  #define PLATFORM_COMPILER_FAMILYID 20
  #ifdef __cplusplus
    #define PLATFORM_COMPILER_NVHPC_CXX  1
  #else
    #define PLATFORM_COMPILER_NVHPC_C  1
  #endif
  #define PLATFORM_COMPILER_VERSION \
          PLATFORM_COMPILER_VERSION_INT(__NVCOMPILER_MAJOR__,__NVCOMPILER_MINOR__,__NVCOMPILER_PATCHLEVEL__)
  #define PLATFORM_COMPILER_VERSION_STR \
      PLATFORM_STRINGIFY(__NVCOMPILER_MAJOR__) "." PLATFORM_STRINGIFY(__NVCOMPILER_MINOR__) "-" PLATFORM_STRINGIFY(__NVCOMPILER_PATCHLEVEL__)

#elif defined(__PGI)
  #define PLATFORM_COMPILER_PGI  1
  #define PLATFORM_COMPILER_FAMILYNAME PGI
  #define PLATFORM_COMPILER_FAMILYID 4
  #ifdef __cplusplus
    #define PLATFORM_COMPILER_PGI_CXX  1
  #else
    #define PLATFORM_COMPILER_PGI_C  1
  #endif
  #if __PGIC__ == 99 
    /* bug 2230: PGI versioning was broken for some platforms in 7.0
                 no way to know exact version, but provide something slightly more accurate */
    #define PLATFORM_COMPILER_VERSION 0x070000
    #define PLATFORM_COMPILER_VERSION_STR "7.?-?"
  #elif defined(__PGIC__) && defined(__PGIC_MINOR__) && defined(__PGIC_PATCHLEVEL__)
    #define PLATFORM_COMPILER_VERSION \
            PLATFORM_COMPILER_VERSION_INT(__PGIC__,__PGIC_MINOR__,__PGIC_PATCHLEVEL__)
    #define PLATFORM_COMPILER_VERSION_STR \
            PLATFORM_STRINGIFY(__PGIC__) "." PLATFORM_STRINGIFY(__PGIC_MINOR__) "-" PLATFORM_STRINGIFY(__PGIC_PATCHLEVEL__)
  #else
    /* PGI before 6.1-4 lacks any version ID preprocessor macros - so use this filthy hack */
    #ifdef PLATFORM_PGI_IS_ANCIENT
      /* Include below might fail for ancient versions lacking this header, but testing shows it
         works back to at least 5.1-3 (Nov 2003), and based on docs probably back to 3.2 (Sep 2000) */
        #define PLATFORM_COMPILER_VERSION 0       
    #elif defined(__x86_64__) /* bug 1753 - 64-bit omp.h upgrade happened in <6.0-8,6.1-1] */
      #include "omp.h"
      #if defined(_PGOMP_H)
        /* 6.1.1 or newer */
        #define PLATFORM_COMPILER_VERSION 0x060101
        #define PLATFORM_COMPILER_VERSION_STR ">=6.1-1"
      #else
        /* 6.0.8 or older */
        #define PLATFORM_COMPILER_VERSION 0
        #define PLATFORM_COMPILER_VERSION_STR "<=6.0-8"
      #endif
    #else /* 32-bit omp.h upgrade happened in <5.2-4,6.0-8] */
      #include "omp.h"
      #if defined(_PGOMP_H)
        /* 6.0-8 or newer */
        #define PLATFORM_COMPILER_VERSION 0x060008
        #define PLATFORM_COMPILER_VERSION_STR ">=6.0-8"
      #else
        /* 5.2-4 or older */
        #define PLATFORM_COMPILER_VERSION 0
        #define PLATFORM_COMPILER_VERSION_STR "<=5.2-4"
      #endif
    #endif
  #endif

#elif defined(__xlC__) || defined(__ibmxl__)
  #define PLATFORM_COMPILER_XLC  1
  #define PLATFORM_COMPILER_FAMILYNAME XLC
  #define PLATFORM_COMPILER_FAMILYID 5
  #ifdef __cplusplus
    #define PLATFORM_COMPILER_XLC_CXX  1
  #else
    #define PLATFORM_COMPILER_XLC_C  1
  #endif
  #ifdef __ibmxl_version__
    #define PLATFORM_COMPILER_VERSION \
      (__ibmxl_version__ << 24 | __ibmxl_release__ << 16 | \
       __ibmxl_modification__ << 8 | __ibmxl_ptf_fix_level__)
    #define PLATFORM_COMPILER_VERSION_STR \
      PLATFORM_STRINGIFY(__ibmxl_version__) "." PLATFORM_STRINGIFY(__ibmxl_release__) "." PLATFORM_STRINGIFY(__ibmxl_modification__) "." PLATFORM_STRINGIFY(__ibmxl_ptf_fix_level__)
  #else
    #ifdef __xlC_ver__
      #define PLATFORM_COMPILER_VERSION (__xlC__ << 16 | __xlC_ver__)
    #else
      #define PLATFORM_COMPILER_VERSION (__xlC__ << 16)
    #endif
    #ifdef __xlc__
      #define PLATFORM_COMPILER_VERSION_STR __xlc__
    #else
      #define PLATFORM_COMPILER_VERSION_STR PLATFORM_STRINGIFY(__xlC__)
    #endif
  #endif
  #define PLATFORM_COMPILER_VERSION_INT(maj,min,pat) \
        ( ((maj) << 24) | ((min) << 16) | ((pat) << 8) )

#elif defined(__DECC) || defined(__DECCXX)
  #define PLATFORM_COMPILER_COMPAQ  1
  #define PLATFORM_COMPILER_FAMILYNAME COMPAQ
  #define PLATFORM_COMPILER_FAMILYID 6
  #ifdef __cplusplus
    #define PLATFORM_COMPILER_COMPAQ_CXX  1
  #else
    #define PLATFORM_COMPILER_COMPAQ_C  1
  #endif
  #if defined(__DECC_VER)
    #define PLATFORM_COMPILER_VERSION __DECC_VER
  #elif defined(__DECCXX_VER)
    #define PLATFORM_COMPILER_VERSION __DECCXX_VER
  #endif

  #define PLATFORM_COMPILER_VERSION_INT(maj,min,pat) \
        ( ((maj) * 10000000) + ((min) * 100000) + (90000) + (pat) )
  /* 90000 = official ver, 80000 = customer special ver, 60000 = field test ver */

#elif defined(__SUNPRO_C) || defined(__SUNPRO_CC)
  #define PLATFORM_COMPILER_SUN  1
  #define PLATFORM_COMPILER_FAMILYNAME SUN
  #define PLATFORM_COMPILER_FAMILYID 7
  #ifdef __cplusplus
    #define PLATFORM_COMPILER_SUN_CXX  1
  #else
    #define PLATFORM_COMPILER_SUN_C  1
  #endif
  #if defined(__SUNPRO_C) && __SUNPRO_C > 0
    #define PLATFORM_COMPILER_VERSION __SUNPRO_C
  #elif defined(__SUNPRO_CC) && __SUNPRO_CC > 0
    #define PLATFORM_COMPILER_VERSION __SUNPRO_CC
  #endif
  /* Sun version numbers look like hex but are actually a sloppy concatenation of decimal version numbers
   * leading to weird discontinuities in the version space, luckily it remains monotonic (so far)
   */
  #define PLATFORM_COMPILER_VERSION_INT(maj,min,pat) ( \
        (min) < 10 ?                                   \
        ( ((maj) << 8) | ((min) << 4) | (pat) ) :      \
        ( ((maj) << 12) | (((min)/10) << 8) | (((min)%10) << 4) | (pat) )  )

#elif defined(__HP_cc) || defined(__HP_aCC)
  #define PLATFORM_COMPILER_HP  1
  #define PLATFORM_COMPILER_FAMILYNAME HP
  #define PLATFORM_COMPILER_FAMILYID 8
  #ifdef __cplusplus
    #define PLATFORM_COMPILER_HP_CXX  1
  #else
    #define PLATFORM_COMPILER_HP_C  1
  #endif
  #if defined(__HP_cc) && __HP_cc > 0
    #define PLATFORM_COMPILER_VERSION __HP_cc
  #elif defined(__HP_aCC) && __HP_aCC > 0
    #define PLATFORM_COMPILER_VERSION __HP_aCC
  #endif
  #define PLATFORM_COMPILER_VERSION_INT(maj,min,pat) \
        ( ((maj) << 16) | ((min) << 8) | (pat) )

#elif defined(_SGI_COMPILER_VERSION) || \
   (defined(_COMPILER_VERSION) && defined(__sgi) && !defined(__GNUC__)) /* 7.3.0 and earlier lack _SGI_COMPILER_VERSION */
  #define PLATFORM_COMPILER_SGI  1
  #define PLATFORM_COMPILER_FAMILYNAME SGI
  #define PLATFORM_COMPILER_FAMILYID 9
  #ifdef __cplusplus
    #define PLATFORM_COMPILER_SGI_CXX  1
  #else
    #define PLATFORM_COMPILER_SGI_C  1
  #endif
  #if defined(_SGI_COMPILER_VERSION) && _SGI_COMPILER_VERSION > 0
    #define PLATFORM_COMPILER_VERSION _SGI_COMPILER_VERSION
  #elif defined(_COMPILER_VERSION) && _COMPILER_VERSION > 0
    #define PLATFORM_COMPILER_VERSION _COMPILER_VERSION
  #endif
  #define PLATFORM_COMPILER_VERSION_INT(maj,min,pat) \
        ( ((maj) << 8) | ((min) << 4) | (pat) )

#elif defined(_CRAYC) 
  #define PLATFORM_COMPILER_CRAY  1
  #define PLATFORM_COMPILER_FAMILYNAME CRAY
  #define PLATFORM_COMPILER_FAMILYID 10
  #ifdef __cplusplus
    #define PLATFORM_COMPILER_CRAY_CXX  1
  #else
    #define PLATFORM_COMPILER_CRAY_C  1
  #endif
  #if defined(_RELEASE_MAJOR) && defined(_RELEASE_MINOR) /* XE, XK, XC */
    #define PLATFORM_COMPILER_VERSION \
            PLATFORM_COMPILER_VERSION_INT(_RELEASE_MAJOR,_RELEASE_MINOR,0)
  #elif defined(_RELEASE) && defined(_RELEASE_MINOR) /* X1 and XT */
    #define PLATFORM_COMPILER_VERSION \
            PLATFORM_COMPILER_VERSION_INT(_RELEASE,_RELEASE_MINOR,0)
  #elif defined(_RELEASE) /* T3E */
    #define PLATFORM_COMPILER_VERSION \
            PLATFORM_COMPILER_VERSION_INT(_RELEASE,0,0)
  #endif
  #ifdef _RELEASE_STRING /* X1 and XT, XK, XC */
    #define PLATFORM_COMPILER_VERSION_STR _RELEASE_STRING
  #endif

#elif defined(__KCC)
  #define PLATFORM_COMPILER_KAI  1
  #define PLATFORM_COMPILER_FAMILYNAME KAI
  #define PLATFORM_COMPILER_FAMILYID 11
  #ifdef __cplusplus
    #define PLATFORM_COMPILER_KAI_CXX  1
  #else
    #define PLATFORM_COMPILER_KAI_C  1
  #endif

#elif defined(__MTA__)
  #define PLATFORM_COMPILER_MTA  1
  #define PLATFORM_COMPILER_FAMILYNAME MTA
  #define PLATFORM_COMPILER_FAMILYID 12
  #ifdef __cplusplus
    #define PLATFORM_COMPILER_MTA_CXX  1
  #else
    #define PLATFORM_COMPILER_MTA_C  1
  #endif

#elif defined(_SX)
  #define PLATFORM_COMPILER_NECSX  1
  #define PLATFORM_COMPILER_FAMILYNAME NECSX
  #define PLATFORM_COMPILER_FAMILYID 13
  #ifdef __cplusplus
    #define PLATFORM_COMPILER_NECSX_CXX  1
  #else
    #define PLATFORM_COMPILER_NECSX_C  1
  #endif

#elif defined(_MSC_VER)
  #define PLATFORM_COMPILER_MICROSOFT  1
  #define PLATFORM_COMPILER_FAMILYNAME MICROSOFT
  #define PLATFORM_COMPILER_FAMILYID 14
  #ifdef __cplusplus
    #define PLATFORM_COMPILER_MICROSOFT_CXX  1
  #else
    #define PLATFORM_COMPILER_MICROSOFT_C  1
  #endif
  #define PLATFORM_COMPILER_VERSION _MSC_VER

#elif defined(__TINYC__)
  #define PLATFORM_COMPILER_TINY  1
  #define PLATFORM_COMPILER_FAMILYNAME TINY
  #define PLATFORM_COMPILER_FAMILYID 15
  #ifdef __cplusplus
    #define PLATFORM_COMPILER_TINY_CXX  1
  #else
    #define PLATFORM_COMPILER_TINY_C  1
  #endif

#elif defined(__LCC__)
  #define PLATFORM_COMPILER_LCC 1
  #define PLATFORM_COMPILER_FAMILYNAME LCC
  #define PLATFORM_COMPILER_FAMILYID 16
  #ifdef __cplusplus
    #define PLATFORM_COMPILER_LCC_CXX  1
  #else
    #define PLATFORM_COMPILER_LCC_C  1
  #endif

#elif defined(__OPENCC__)
  #define PLATFORM_COMPILER_OPEN64  1
  #define PLATFORM_COMPILER_FAMILYNAME OPEN64
  #define PLATFORM_COMPILER_FAMILYID 17
  #ifdef __cplusplus
    #define PLATFORM_COMPILER_OPEN64_CXX  1
  #else
    #define PLATFORM_COMPILER_OPEN64_C  1
  #endif
  /* Note: can't use __OPENCC_PATCHLEVEL__ because it is sometimes non-integer (eg 3.2).
     Adding a cast would not result in a preprocessor constant expression. */
  #define PLATFORM_COMPILER_VERSION \
          PLATFORM_COMPILER_VERSION_INT(__OPENCC__,__OPENCC_MINOR__,0)
  #define PLATFORM_COMPILER_VERSION_STR __OPEN64__

#elif defined(__PCC__)
  #define PLATFORM_COMPILER_PCC  1
  #define PLATFORM_COMPILER_FAMILYNAME PCC
  #define PLATFORM_COMPILER_FAMILYID 18
  #ifdef __cplusplus
    #define PLATFORM_COMPILER_PCC_CXX  1
  #else
    #define PLATFORM_COMPILER_PCC_C  1
  #endif
  #define PLATFORM_COMPILER_VERSION \
          PLATFORM_COMPILER_VERSION_INT(__PCC__,__PCC_MINOR__,__PCC_MINORMINOR__)
  #define PLATFORM_COMPILER_VERSION_STR \
      PLATFORM_STRINGIFY(__PCC__) "." PLATFORM_STRINGIFY(__PCC_MINOR__) "." PLATFORM_STRINGIFY(__PCC_MINORMINOR__)

#elif defined(__clang__)
  #define PLATFORM_COMPILER_CLANG  1
  #define PLATFORM_COMPILER_FAMILYNAME CLANG
  #define PLATFORM_COMPILER_FAMILYID 19
  #ifdef __cplusplus
    #define PLATFORM_COMPILER_CLANG_CXX  1
  #else
    #define PLATFORM_COMPILER_CLANG_C  1
  #endif
  #ifdef __clang_version__
    /* clang 2.7 (gcc 4.2.1 compliant) and earlier lacked specific version identification */
    #define PLATFORM_COMPILER_VERSION \
            PLATFORM_COMPILER_VERSION_INT(__clang_major__,__clang_minor__,__clang_patchlevel__)
    #define PLATFORM_COMPILER_VERSION_STR __clang_version__
  #endif

// NOTE: PLATFORM_COMPILER_FAMILYID "20" is allocated to NVHPC, appearing earlier

#else /* unknown compiler */
  #define PLATFORM_COMPILER_UNKNOWN  1
#endif

/* this stanza comes last, because many vendor compilers lie and claim 
   to be GNU C for compatibility reasons and/or because they share a frontend */ 
#undef _PLATFORM_COMPILER_GNU_VERSION_STR
#undef __PLATFORM_COMPILER_GNU_VERSION_STR
#if defined(__GNUC__)
  #undef PLATFORM_COMPILER_UNKNOWN
  #ifndef PLATFORM_COMPILER_FAMILYID
    #define PLATFORM_COMPILER_GNU  1
    #define PLATFORM_COMPILER_FAMILYNAME GNU
    #define PLATFORM_COMPILER_FAMILYID 1
    #ifdef __cplusplus
      #define PLATFORM_COMPILER_GNU_CXX  1
    #else
      #define PLATFORM_COMPILER_GNU_C  1
    #endif
   #if defined(__GNUC_MINOR__) && defined(__GNUC_PATCHLEVEL__)
    #define PLATFORM_COMPILER_VERSION \
            PLATFORM_COMPILER_VERSION_INT(__GNUC__,__GNUC_MINOR__,__GNUC_PATCHLEVEL__)
   #elif defined(__GNUC_MINOR__) /* older versions of egcs lack __GNUC_PATCHLEVEL__ */
    #define PLATFORM_COMPILER_VERSION \
            PLATFORM_COMPILER_VERSION_INT(__GNUC__,__GNUC_MINOR__,0)
   #else
    #define PLATFORM_COMPILER_VERSION \
            PLATFORM_COMPILER_VERSION_INT(__GNUC__,0,0)
   #endif
    #define PLATFORM_COMPILER_VERSION_STR __PLATFORM_COMPILER_GNU_VERSION_STR
  #else
    #define _PLATFORM_COMPILER_GNU_VERSION_STR __PLATFORM_COMPILER_GNU_VERSION_STR
  #endif
  /* gather any advertised GNU version number info, even for non-gcc compilers */
  #if defined(__GNUC_MINOR__) && defined(__GNUC_PATCHLEVEL__)
    #define __PLATFORM_COMPILER_GNU_VERSION_STR \
      PLATFORM_STRINGIFY(__GNUC__) "." PLATFORM_STRINGIFY(__GNUC_MINOR__) "." PLATFORM_STRINGIFY(__GNUC_PATCHLEVEL__)
  #elif defined(__GNUC_MINOR__)
    #define __PLATFORM_COMPILER_GNU_VERSION_STR \
      PLATFORM_STRINGIFY(__GNUC__) "." PLATFORM_STRINGIFY(__GNUC_MINOR__) ".?"
  #else
    #define __PLATFORM_COMPILER_GNU_VERSION_STR \
      PLATFORM_STRINGIFY(__GNUC__) ".?.?"
  #endif
#elif defined(PLATFORM_COMPILER_UNKNOWN) /* unknown compiler */
  #define PLATFORM_COMPILER_FAMILYNAME UNKNOWN
  #define PLATFORM_COMPILER_FAMILYID 0 
#endif

/* defaulting */

#ifndef PLATFORM_COMPILER_VERSION
#define PLATFORM_COMPILER_VERSION 0 /* don't know */
#endif

#ifndef PLATFORM_COMPILER_VERSION_STR
#define PLATFORM_COMPILER_VERSION_STR PLATFORM_STRINGIFY(PLATFORM_COMPILER_VERSION)
#endif

#ifndef PLATFORM_COMPILER_VERSION_INT
#define PLATFORM_COMPILER_VERSION_INT(maj,min,pat) \
        (((maj) << 16) | ((min) << 8) | (pat))
#endif

/* version check macros */

#define PLATFORM_COMPILER_VERSION_GT(maj,min,pat) \
        PLATFORM_COMPILER_VERSION >  PLATFORM_COMPILER_VERSION_INT(maj,min,pat)
#define PLATFORM_COMPILER_VERSION_GE(maj,min,pat) \
        PLATFORM_COMPILER_VERSION >= PLATFORM_COMPILER_VERSION_INT(maj,min,pat)
#define PLATFORM_COMPILER_VERSION_EQ(maj,min,pat) \
        PLATFORM_COMPILER_VERSION == PLATFORM_COMPILER_VERSION_INT(maj,min,pat)
#define PLATFORM_COMPILER_VERSION_LE(maj,min,pat) \
        PLATFORM_COMPILER_VERSION <= PLATFORM_COMPILER_VERSION_INT(maj,min,pat)
#define PLATFORM_COMPILER_VERSION_LT(maj,min,pat) \
        PLATFORM_COMPILER_VERSION <  PLATFORM_COMPILER_VERSION_INT(maj,min,pat)

/* misc feature detection */

#ifdef __cplusplus
  #define PLATFORM_COMPILER_ID (10000+PLATFORM_COMPILER_FAMILYID)
#else
  #define PLATFORM_COMPILER_ID PLATFORM_COMPILER_FAMILYID
#endif

/* default language spec conformance detection */
#if !defined(PLATFORM_COMPILER_C_LANGLVL) && !defined(PLATFORM_COMPILER_CXX_LANGLVL)
  #if defined(__cplusplus) && (__cplusplus > 0)  /* C++98 or newer */
    #define PLATFORM_COMPILER_CXX_LANGLVL  __cplusplus
  #elif defined(__STDC_VERSION__) && (__STDC_VERSION__ > 0)  /* C95 or newer */
    #define PLATFORM_COMPILER_C_LANGLVL  __STDC_VERSION__
  #elif defined(__STDC__) && !defined(__cplusplus) && !defined(__STDC_VERSION__) /* C89/C90 */
    #define PLATFORM_COMPILER_C_LANGLVL  199000L
  #else 
    /* unknown - leave both undef */
  #endif
#endif

#undef _PLATFORM_COMPILER_STD_STDC
#ifdef __STDC__
  #define _PLATFORM_COMPILER_STD_STDC "__STDC__"
#else
  #define _PLATFORM_COMPILER_STD_STDC "-"
#endif
#undef _PLATFORM_COMPILER_STD_STDC_VERSION
#ifdef __STDC_VERSION__
  #define _PLATFORM_COMPILER_STD_STDC_VERSION ",__STDC_VERSION__=" PLATFORM_STRINGIFY(__STDC_VERSION__)
#else
  #define _PLATFORM_COMPILER_STD_STDC_VERSION
#endif
#undef _PLATFORM_COMPILER_STD_STDC_EXT
#ifdef __STDC_EXT__
  #define _PLATFORM_COMPILER_STD_STDC_EXT ",__STDC_EXT__=" PLATFORM_STRINGIFY(__STDC_EXT__)
#else
  #define _PLATFORM_COMPILER_STD_STDC_EXT 
#endif
#undef _PLATFORM_COMPILER_STD_CPLUSPLUS
#ifdef __cplusplus
  #define _PLATFORM_COMPILER_STD_CPLUSPLUS ",__cplusplus=" PLATFORM_STRINGIFY(__cplusplus)
#else
  #define _PLATFORM_COMPILER_STD_CPLUSPLUS 
#endif

#undef _PLATFORM_COMPILER_MISC_VERSION_STR
#ifndef _PLATFORM_COMPILER_MISC_VERSION_STR
  #ifdef __VERSION__
    #define _PLATFORM_COMPILER_MISC_VERSION_STR "|misc:" __VERSION__
  #else
    #define _PLATFORM_COMPILER_MISC_VERSION_STR
  #endif
#endif
#undef _PLATFORM_COMPILER_GNU_VERSION_STR_HELP
#ifdef _PLATFORM_COMPILER_GNU_VERSION_STR
    #define _PLATFORM_COMPILER_GNU_VERSION_STR_HELP "|GNU:" _PLATFORM_COMPILER_GNU_VERSION_STR
#else
    #define _PLATFORM_COMPILER_GNU_VERSION_STR_HELP
#endif

#define PLATFORM_COMPILER_IDSTR                                      \
        "|COMPILER_FAMILY:"                                          \
          PLATFORM_STRINGIFY(PLATFORM_COMPILER_FAMILYNAME)           \
        "|COMPILER_VERSION:" PLATFORM_COMPILER_VERSION_STR           \
        "|COMPILER_FAMILYID:"                                        \
          PLATFORM_STRINGIFY(PLATFORM_COMPILER_FAMILYID)             \
         _PLATFORM_COMPILER_GNU_VERSION_STR_HELP                     \
        "|STD:" _PLATFORM_COMPILER_STD_STDC                          \
                _PLATFORM_COMPILER_STD_STDC_VERSION                  \
                _PLATFORM_COMPILER_STD_STDC_EXT                      \
                _PLATFORM_COMPILER_STD_CPLUSPLUS                     \
         _PLATFORM_COMPILER_MISC_VERSION_STR                         \
        "|"

/* ------------------------------------------------------------------------------------ */
/* OS detection */
/* 
   PLATFORM_OS_<family>:
     defined to a positive value if OS belongs to a given family, undef otherwise
   PLATFORM_OS_FAMILYNAME:
     unquoted token which provides the compiler family name
*/

#if defined(__LIBCATAMOUNT__) || defined(__QK_USER__)
  #define PLATFORM_OS_CATAMOUNT 1
  #define PLATFORM_OS_FAMILYNAME CATAMOUNT

#elif defined(__CRAYXT_COMPUTE_LINUX_TARGET)
  #define PLATFORM_OS_CNL 1
  #define PLATFORM_OS_FAMILYNAME CNL

#elif defined(GASNETI_ARCH_BGP) || defined(__bgp__)
  #define PLATFORM_OS_BGP 1
  #define PLATFORM_OS_FAMILYNAME BGP

#elif defined(GASNETI_ARCH_BGQ) || defined(__bgq__)
  #define PLATFORM_OS_BGQ 1
  #define PLATFORM_OS_FAMILYNAME BGQ

#elif defined(GASNETI_ARCH_WSL)
  #define PLATFORM_OS_WSL 1
  #define PLATFORM_OS_FAMILYNAME WSL

#elif defined(__K42)
  #define PLATFORM_OS_K42 1
  #define PLATFORM_OS_FAMILYNAME K42

#elif defined(__uClinux__)
  #define PLATFORM_OS_UCLINUX 1
  #define PLATFORM_OS_FAMILYNAME UCLINUX

#elif defined(__linux) || defined(__linux__) || defined(__gnu_linux__)
  #define PLATFORM_OS_LINUX 1
  #define PLATFORM_OS_FAMILYNAME LINUX

#elif defined(__blrts) || defined(__blrts__) || defined(__gnu_blrts__)
  #define PLATFORM_OS_BLRTS 1
  #define PLATFORM_OS_FAMILYNAME BLRTS

#elif defined(__CYGWIN__)
  #define PLATFORM_OS_CYGWIN 1
  #define PLATFORM_OS_FAMILYNAME CYGWIN

#elif defined(_WIN32)
  #define PLATFORM_OS_MSWINDOWS 1
  #define PLATFORM_OS_FAMILYNAME MSWINDOWS

#elif defined(_AIX)
  #define PLATFORM_OS_AIX 1
  #define PLATFORM_OS_FAMILYNAME AIX

#elif defined(__osf__) || defined(__digital__)
  #define PLATFORM_OS_TRU64 1
  #define PLATFORM_OS_FAMILYNAME TRU64

#elif defined(__FreeBSD) || defined(__FreeBSD__)
  #define PLATFORM_OS_FREEBSD 1
  #define PLATFORM_OS_FAMILYNAME FREEBSD

#elif defined(__NetBSD) || defined(__NetBSD__)
  #define PLATFORM_OS_NETBSD 1
  #define PLATFORM_OS_FAMILYNAME NETBSD

#elif defined(__OpenBSD__)
  #define PLATFORM_OS_OPENBSD 1
  #define PLATFORM_OS_FAMILYNAME OPENBSD

#elif defined(__sun) || defined(__sun__)
  #define PLATFORM_OS_SOLARIS 1
  #define PLATFORM_OS_FAMILYNAME SOLARIS

#elif (defined(__APPLE__) && defined(__MACH__)) || \
      defined(__osx86__) /* PGI on OSX */
  #define PLATFORM_OS_DARWIN 1
  #define PLATFORM_OS_FAMILYNAME DARWIN

#elif defined(__sgi) || defined(__sgi__)
  #define PLATFORM_OS_IRIX 1
  #define PLATFORM_OS_FAMILYNAME IRIX

#elif defined(__hpux) || defined(__hpux__)
  #define PLATFORM_OS_HPUX 1
  #define PLATFORM_OS_FAMILYNAME HPUX

#elif defined(_CRAY) || defined(_UNICOSMP)
  #define PLATFORM_OS_UNICOS 1
  #define PLATFORM_OS_FAMILYNAME UNICOS

#elif defined(__MTA__)
  #define PLATFORM_OS_MTA 1
  #define PLATFORM_OS_FAMILYNAME MTA

#elif defined(_SX)
  #define PLATFORM_OS_SUPERUX 1
  #define PLATFORM_OS_FAMILYNAME SUPERUX

#else
  #define PLATFORM_OS_UNKNOWN 1
  #define PLATFORM_OS_FAMILYNAME UNKNOWN
#endif

/* ------------------------------------------------------------------------------------ */
/* Architecture detection */
/* 
   PLATFORM_ARCH_<family>:
     defined to positive value if CPU belongs to a given family, undef otherwise
   PLATFORM_ARCH_FAMILYNAME:
     unquoted token which provides the CPU family name

   PLATFORM_ARCH_32              - 32-bit pointers
   PLATFORM_ARCH_64              - 64-bit pointers
   PLATFORM_ARCH_BIG_ENDIAN      - big-endian word order
   PLATFORM_ARCH_LITTLE_ENDIAN   - little-endian word order
     defined to positive value if CPU is known to have the indicated property, undef otherwise
 */

#if defined(__ppc64) || defined(__ppc64__) || \
    defined(__PPC64) || defined(__PPC64__) || \
    defined(__powerpc64) || defined(__powerpc64__) 
  #define PLATFORM_ARCH_POWERPC 1
  #define PLATFORM_ARCH_FAMILYNAME POWERPC
  #define _PLATFORM_ARCH_64 1
  #define _PLATFORM_ARCH_BIG_ENDIAN 1

#elif defined(_POWER) || \
      defined(__PPC)  || defined(__PPC__) || \
      defined(__powerpc) || defined(__powerpc__) || \
      defined(__ppc) || defined(__ppc__) || \
      defined(__POWERPC__)
  #define PLATFORM_ARCH_POWERPC 1
  #define PLATFORM_ARCH_FAMILYNAME POWERPC
  #define _PLATFORM_ARCH_32 1
  #define _PLATFORM_ARCH_BIG_ENDIAN 1

#elif defined(_ARCH_PPC) || defined(_ARCH_PPC64)
  #define PLATFORM_ARCH_POWERPC 1
  #define PLATFORM_ARCH_FAMILYNAME POWERPC
  #define _PLATFORM_ARCH_BIG_ENDIAN 1

#elif defined(__KNC__) || defined(__MIC__)
  #define PLATFORM_ARCH_MIC 1
  #define PLATFORM_ARCH_FAMILYNAME MIC
  #define _PLATFORM_ARCH_64 1
  #define _PLATFORM_ARCH_LITTLE_ENDIAN 1

#elif defined(__x86_64) || defined(__x86_64__) || \
    defined(__athlon) || defined(__athlon__) || \
    defined(__amd64)  || defined(__amd64__)
  #define PLATFORM_ARCH_X86_64 1
  #define PLATFORM_ARCH_FAMILYNAME X86_64
  #define _PLATFORM_ARCH_64 1
  #define _PLATFORM_ARCH_LITTLE_ENDIAN 1

#elif defined(__ia64__) || defined(__ia64)
  #define PLATFORM_ARCH_IA64 1
  #define PLATFORM_ARCH_FAMILYNAME IA64
  #define _PLATFORM_ARCH_64 1
  #if defined(PLATFORM_OS_LINUX) || defined(PLATFORM_OS_FREEBSD)
    #define _PLATFORM_ARCH_LITTLE_ENDIAN 1
  #elif defined(PLATFORM_OS_HPUX)
    #define _PLATFORM_ARCH_BIG_ENDIAN 1
  #else
    /* Unknown.  Hope one of the other mechanisms can sort it out. */
  #endif

#elif defined(__i386__) || defined(__i386) || \
      defined(__i486__) || defined(__i486) || \
      defined(__i586__) || defined(__i586) || \
      defined(__i686__) || defined(__i686) || \
      defined(__pentiumpro) || defined(__pentiumpro__) || \
      defined(_M_IX86)
  #define PLATFORM_ARCH_X86 1
  #define PLATFORM_ARCH_FAMILYNAME X86
  #define _PLATFORM_ARCH_32 1
  #define _PLATFORM_ARCH_LITTLE_ENDIAN 1

#elif defined(__alpha) || defined(__alpha__)
  #define PLATFORM_ARCH_ALPHA 1
  #define PLATFORM_ARCH_FAMILYNAME ALPHA
  #define _PLATFORM_ARCH_64 1
  #define _PLATFORM_ARCH_LITTLE_ENDIAN 1

#elif defined(_mips) || defined(__mips) || defined(__mips__) || \
    defined(__host_mips) || defined(__host_mips__) || \
    defined(_MIPS_ARCH) || defined(__R4000)
  #define PLATFORM_ARCH_MIPS 1
  #define PLATFORM_ARCH_FAMILYNAME MIPS
  #ifdef _MIPSEL /* MIPS cores support both little and big endian modes */
    /* SiCortex */
    #define _PLATFORM_ARCH_LITTLE_ENDIAN 1
  #else
    /* IRIX */
    #define _PLATFORM_ARCH_BIG_ENDIAN 1
  #endif
  #ifdef _MIPS_SZPTR
    #if _MIPS_SZPTR == 32
      #define _PLATFORM_ARCH_32 1
    #elif _MIPS_SZPTR == 64
      #define _PLATFORM_ARCH_64 1
    #endif
  #endif

#elif defined(__sparc) || defined(__sparc__) || \
    defined(__sparclet__) || defined(__sparclite__) || \
    defined(__sparcv8) || defined(__sparcv9)
  #define PLATFORM_ARCH_SPARC 1
  #define PLATFORM_ARCH_FAMILYNAME SPARC
  #define _PLATFORM_ARCH_BIG_ENDIAN 1

#elif defined(__hppa) || defined(__hppa__) || \
    defined(__parisc) || defined(__parisc__) || \
    defined(_PA_RISC1_1) || defined(_PA_RISC2_0)
  #define PLATFORM_ARCH_PARISC 1
  #define PLATFORM_ARCH_FAMILYNAME PARISC
  #define _PLATFORM_ARCH_BIG_ENDIAN 1

#elif defined(__crayx1)
  #define PLATFORM_ARCH_CRAYX1 1
  #define PLATFORM_ARCH_FAMILYNAME CRAYX1
  #define _PLATFORM_ARCH_BIG_ENDIAN 1
  #define _PLATFORM_ARCH_64 1

#elif defined(_CRAYT3E)
  #define PLATFORM_ARCH_CRAYT3E 1
  #define PLATFORM_ARCH_FAMILYNAME CRAYT3E
  #define _PLATFORM_ARCH_BIG_ENDIAN 1
  #define _PLATFORM_ARCH_64 1

#elif defined(__MTA__)
  #define PLATFORM_ARCH_MTA 1
  #define PLATFORM_ARCH_FAMILYNAME MTA

#elif defined(_SX)
  #define PLATFORM_ARCH_NECSX 1
  #define PLATFORM_ARCH_FAMILYNAME NECSX

#elif defined(__MICROBLAZE__)
  #define PLATFORM_ARCH_MICROBLAZE 1
  #define PLATFORM_ARCH_FAMILYNAME MICROBLAZE
  #define _PLATFORM_ARCH_BIG_ENDIAN 1
  #define _PLATFORM_ARCH_32 1

#elif defined(__arm__)
  #define PLATFORM_ARCH_ARM 1
  #define PLATFORM_ARCH_FAMILYNAME ARM
  #define _PLATFORM_ARCH_32 1
  #if defined(__ARMEB__)
    #define _PLATFORM_ARCH_BIG_ENDIAN 1
  #elif defined(__ARMEL__)
    #define _PLATFORM_ARCH_LITTLE_ENDIAN 1
  #endif

#elif defined(__aarch64__)
  #define PLATFORM_ARCH_AARCH64 1
  #define PLATFORM_ARCH_FAMILYNAME AARCH64
  #if defined(__AARCH64EB__)
    #define _PLATFORM_ARCH_BIG_ENDIAN 1
  #elif defined(__AARCH64EL__)
    #define _PLATFORM_ARCH_LITTLE_ENDIAN 1
  #endif

#elif defined(__tile__)
  #define PLATFORM_ARCH_TILE 1
  #define PLATFORM_ARCH_FAMILYNAME TILE
  #define _PLATFORM_ARCH_LITTLE_ENDIAN 1
  #if defined(__tilegx__)
    #define _PLATFORM_ARCH_64 1
  #else
    #define _PLATFORM_ARCH_32 1
  #endif

#elif defined(__s390__)
  #define PLATFORM_ARCH_S390 1
  #define PLATFORM_ARCH_FAMILYNAME S390
  #define _PLATFORM_ARCH_BIG_ENDIAN 1
  #if defined(__s390x__)
    #define _PLATFORM_ARCH_64 1
  #else
    #define _PLATFORM_ARCH_32 1
  #endif

#else /* unknown CPU */
  #define PLATFORM_ARCH_UNKNOWN 1
  #define PLATFORM_ARCH_FAMILYNAME UNKNOWN
#endif

/* generic chip properties */

#if defined(PLATFORM_ARCH_BIG_ENDIAN) || defined(PLATFORM_ARCH_LITTLE_ENDIAN)
  #error internal error in endianness configuration
#endif

/* PLATFORM_ARCH_{BIG,LITTLE}_ENDIAN:
    first detect common preprocessor defines
    then default to any arch-specific value provided
 */

#if defined(__BIG_ENDIAN__) || defined(WORDS_BIGENDIAN) || \
    ( __BYTE_ORDER__ > 0 && __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__ )
  #define PLATFORM_ARCH_BIG_ENDIAN 1
#elif defined(__LITTLE_ENDIAN__) || defined(WORDS_LITTLEENDIAN) || \
    ( __BYTE_ORDER__ > 0 && __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__ )
  #define PLATFORM_ARCH_LITTLE_ENDIAN 1
#elif defined(_PLATFORM_ARCH_BIG_ENDIAN)
  #define PLATFORM_ARCH_BIG_ENDIAN 1
#elif defined(_PLATFORM_ARCH_LITTLE_ENDIAN)
  #define PLATFORM_ARCH_LITTLE_ENDIAN 1
#endif
#undef _PLATFORM_ARCH_BIG_ENDIAN
#undef _PLATFORM_ARCH_LITTLE_ENDIAN

#if defined(PLATFORM_ARCH_BIG_ENDIAN) && defined(PLATFORM_ARCH_LITTLE_ENDIAN)
  #error conflicting endianness information
#endif

/* PLATFORM_ARCH_{32,64}: 
    first trust SIZEOF_VOID_P, which is most likely to be accurate
    next, detect common 32/64 preprocessor defines
    finally default to any arch-specific value provided
 */
#if defined(PLATFORM_ARCH_64) || defined(PLATFORM_ARCH_32)
  #error internal error in bit width configuration
#endif

#if SIZEOF_VOID_P == 8
  #define PLATFORM_ARCH_64 1
#elif SIZEOF_VOID_P == 4
  #define PLATFORM_ARCH_32 1
#elif defined(_LP64) || defined(__LP64__) || \
      defined(__arch64__) || defined(__64BIT__) || \
      __INTPTR_MAX__ > 2147483647
  #define PLATFORM_ARCH_64 1
#elif defined(_ILP32) || defined(__ILP32__) || \
      defined(__arch32__) || defined(__32BIT__) || \
      __INTPTR_MAX__ == 2147483647
  #define PLATFORM_ARCH_32 1
#elif defined(_PLATFORM_ARCH_64)
  #define PLATFORM_ARCH_64 1
#elif defined(_PLATFORM_ARCH_32)
  #define PLATFORM_ARCH_32 1
#endif
#undef _PLATFORM_ARCH_64
#undef _PLATFORM_ARCH_32

#if defined(PLATFORM_ARCH_64) && defined(PLATFORM_ARCH_32)
  #error conflicting bit width information
#elif !defined(PLATFORM_ARCH_64) && !defined(PLATFORM_ARCH_32)
  #error missing bit width information
#endif

/* ------------------------------------------------------------------------------------ */
/* handy test code that can be parsed after preprocess or executed to show platform results */
#ifdef PLATFORM_SHOW
#include <stdio.h>
#include <assert.h>
const char *
COMPILER_FAMILYNAME = PLATFORM_STRINGIFY(PLATFORM_COMPILER_FAMILYNAME)
, *
COMPILER_FAMILYID = PLATFORM_STRINGIFY(PLATFORM_COMPILER_FAMILYID)
, *
COMPILER_VERSION_STR = PLATFORM_COMPILER_VERSION_STR
, *
COMPILER_IDSTR = PLATFORM_COMPILER_IDSTR
, *
OS_FAMILYNAME = PLATFORM_STRINGIFY(PLATFORM_OS_FAMILYNAME)
, *
ARCH_FAMILYNAME = PLATFORM_STRINGIFY(PLATFORM_ARCH_FAMILYNAME)
;
int main(void) {
  #define PLATFORM_DISP(x) printf("PLATFORM_"#x"=%s\n",x)
  #define PLATFORM_DISPI(x) printf("PLATFORM_"#x"=%li\n",(long int)PLATFORM_##x)
  #define PLATFORM_DISPX(x) printf("PLATFORM_"#x"=0x%lx\n",(long int)PLATFORM_##x)
  PLATFORM_DISP(COMPILER_FAMILYNAME);
  PLATFORM_DISP(COMPILER_FAMILYID);
  PLATFORM_DISPI(COMPILER_ID);
  PLATFORM_DISPX(COMPILER_VERSION);
  PLATFORM_DISP(COMPILER_VERSION_STR);
  PLATFORM_DISP(COMPILER_IDSTR);
  #if PLATFORM_COMPILER_C_LANGLVL
    PLATFORM_DISPI(COMPILER_C_LANGLVL);
  #elif PLATFORM_COMPILER_CXX_LANGLVL
    PLATFORM_DISPI(COMPILER_CXX_LANGLVL);
  #else
    printf("WARNING: Missing PLATFORM_COMPILER_C(XX)_LANGLVL!");
  #endif
  PLATFORM_DISP(OS_FAMILYNAME);
  PLATFORM_DISP(ARCH_FAMILYNAME);
  #if PLATFORM_ARCH_32
    PLATFORM_DISPI(ARCH_32);
    assert(sizeof(void *) == 4);
  #else
    PLATFORM_DISPI(ARCH_64);
    assert(sizeof(void *) == 8);
  #endif
  { int x = 0x00FF;
    unsigned char *p = (unsigned char *)&x;
  #if PLATFORM_ARCH_BIG_ENDIAN
    PLATFORM_DISPI(ARCH_BIG_ENDIAN);
    assert(*p == 0);
  #else
    PLATFORM_DISPI(ARCH_LITTLE_ENDIAN);
    assert(*p == 0xFF);
  #endif
  }
  return 0;
}
#endif
/* ------------------------------------------------------------------------------------ */
#endif

#if CLEANUP_SIZEOF_VOID_P
#define SIZEOF_VOID_P 8
#endif

     /*
      * If we're currently using the same compiler that was used to
      * build Open MPI, enable compile-time warning of user-level code
      * (e.g. usage of deprecated functions).
      */
#    if (OPAL_BUILD_PLATFORM_COMPILER_FAMILYID == PLATFORM_COMPILER_FAMILYID) && \
        (OPAL_BUILD_PLATFORM_COMPILER_VERSION == PLATFORM_COMPILER_VERSION)

#        if OMPI_WANT_MPI_INTERFACE_WARNING
#            if OPAL_HAVE_ATTRIBUTE_DEPRECATED
#                if OPAL_HAVE_ATTRIBUTE_DEPRECATED_ARGUMENT
#                    define __mpi_interface_deprecated__(msg) __attribute__((__deprecated__(msg)))
#                else
#                    define __mpi_interface_deprecated__(msg) __attribute__((__deprecated__))
#                endif
#            endif
#        endif

         /* For MPI removed APIs, there is no generally portable way to cause
          * the C compiler to error with a nice message, on the _usage_ of
          * one of these symbols.  We've gone with tiered approach:
          *
          * If the user configured with --enable-mpi1-compatibility,
          * just emit a compiletime warning (via the deprecation function
          * attribute) that they're using an MPI1 removed function.
          *
          * Otherwise, we'd like to issue a fatal error directing the
          * user that they've used an MPI1 removed function.  If the
          * user's compiler supports C11 _Static_assert() or
          * C++11 static_assert(), we #define the MPI routines to
          * instead be a call to an assert with an appropriate message
          * suggesting the new MPI3 equivalent.
          *
          * Otherwise, if the user's compiler supports the error function
          * attribute, define the MPI routines with that error attribute.
          * This is supported by most modern GNU compilers.
          *
          * Finally if the compiler doesn't support any of those, just
          * Don't declare those MPI routines at all in mpi.h
          *
          * Don't do MACRO magic for building Profiling library as it
          * interferes with the above.
          */
#        if defined(OMPI_OMIT_MPI1_COMPAT_DECLS)
             /* The user set OMPI_OMIT_MPI1_COMPAT_DECLS, do what he commands */
#        elif OMPI_ENABLE_MPI1_COMPAT
#            define OMPI_OMIT_MPI1_COMPAT_DECLS 0
#            define OMPI_REMOVED_USE_STATIC_ASSERT 0
#            define __mpi_interface_removed__(func, newfunc) __mpi_interface_deprecated__(#func " was removed in MPI-3.0.  Use " #newfunc " instead.  continuing...")
#        elif defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 201112L)
             /* This is the C11 (or later) case, which uses
                _Static_assert() */
#            define OMPI_OMIT_MPI1_COMPAT_DECLS 1
#            define OMPI_REMOVED_USE_STATIC_ASSERT 1
/* This macro definition may show up in compiler output.  So we both
 * outdent it back to column 0 and give it a user-friendly name to
 * help users grok what we are trying to tell them here.
 */
#define THIS_SYMBOL_WAS_REMOVED_IN_MPI30(symbol, new_symbol) 0; _Static_assert(0, #symbol " was removed in MPI-3.0.  Use " #new_symbol " instead.")
#define THIS_FUNCTION_WAS_REMOVED_IN_MPI30(func, newfunc) _Static_assert(0, #func " was removed in MPI-3.0.  Use " #newfunc " instead.")
#        elif defined(__cplusplus) && (__cplusplus >= 201103L)
             /* This is the C++11 (or later) case, which uses
                static_assert() */
#            define OMPI_OMIT_MPI1_COMPAT_DECLS 1
#            define OMPI_REMOVED_USE_STATIC_ASSERT 1
/* This macro definition may show up in compiler output.  So we both
 * outdent it back to column 0 and give it a user-friendly name to
 * help users grok what we are trying to tell them here.
 */
#define THIS_SYMBOL_WAS_REMOVED_IN_MPI30(symbol, new_symbol) 0; static_assert(0, #symbol " was removed in MPI-3.0.  Use " #new_symbol " instead.")
#define THIS_FUNCTION_WAS_REMOVED_IN_MPI30(func, newfunc) static_assert(0, #func " was removed in MPI-3.0.  Use " #newfunc " instead.")
#        elif OPAL_HAVE_ATTRIBUTE_ERROR
#            define OMPI_OMIT_MPI1_COMPAT_DECLS 0
#            define OMPI_REMOVED_USE_STATIC_ASSERT 0
#            define __mpi_interface_removed__(func, newfunc) __attribute__((__error__(#func " was removed in MPI-3.0.  Use " #newfunc " instead.")))
#        else
#            define OMPI_OMIT_MPI1_COMPAT_DECLS 1
#            define OMPI_REMOVED_USE_STATIC_ASSERT 0
#        endif
#    endif
#endif

/*
 * If we didn't define __mpi_interface_deprecated__ above, then we
 * don't want it, so define it to empty (can't use #undef in the logic
 * above because autoconf will comment it out).
 */
#if !defined(__mpi_interface_deprecated__)
#    define __mpi_interface_deprecated__(msg)
#endif

#if !defined(__mpi_interface_removed__)
#    define __mpi_interface_removed__(A,B)
#endif

#if !defined(THIS_SYMBOL_WAS_REMOVED_IN_MPI30)
#    define THIS_SYMBOL_WAS_REMOVED_IN_MPI30(symbol, newsymbol)
#endif
#if !defined(THIS_FUNCTION_WAS_REMOVED_IN_MPI30)
#    define THIS_FUNCTION_WAS_REMOVED_IN_MPI30(func, newfunc)
#endif

#if !defined(OMPI_REMOVED_USE_STATIC_ASSERT)
#    define OMPI_REMOVED_USE_STATIC_ASSERT 0
#endif

#if !defined(OMPI_OMIT_MPI1_COMPAT_DECLS)
#    define OMPI_OMIT_MPI1_COMPAT_DECLS (!(OMPI_ENABLE_MPI1_COMPAT || OMPI_BUILDING))
#endif

/*
 * To accommodate programs written for MPI implementations that use a
 * straight ROMIO import
 */
#if !OMPI_BUILDING
#define MPIO_Request MPI_Request
#define MPIO_Test MPI_Test
#define MPIO_Wait MPI_Wait
#endif

/*
 * When initializing global pointers to Open MPI internally-defined
 * structs, some compilers warn about type-punning to incomplete
 * types.  Therefore, when full struct definitions are unavailable
 * (when not building Open MPI), cast to an opaque (void *) pointer to
 * disable any strict-aliasing optimizations.  Don't cast to (void *)
 * when building Open MPI so that we actually get the benefit of type
 * checking (because we *do* have the full type definitions available
 * when building OMPI).
 */
#if !OMPI_BUILDING
#if defined(c_plusplus) || defined(__cplusplus)
#define OMPI_PREDEFINED_GLOBAL(type, global) (static_cast<type> (static_cast<void *> (&(global))))
#else
#define OMPI_PREDEFINED_GLOBAL(type, global) ((type) ((void *) &(global)))
#endif
#else
#define OMPI_PREDEFINED_GLOBAL(type, global) ((type) &(global))
#endif

#if defined(c_plusplus) || defined(__cplusplus)
extern "C" {
#endif

/*
 * Typedefs
 */

typedef OMPI_MPI_AINT_TYPE MPI_Aint;
typedef OMPI_MPI_OFFSET_TYPE MPI_Offset;
typedef OMPI_MPI_COUNT_TYPE MPI_Count;
typedef struct ompi_communicator_t *MPI_Comm;
typedef struct ompi_datatype_t *MPI_Datatype;
typedef struct ompi_errhandler_t *MPI_Errhandler;
typedef struct ompi_file_t *MPI_File;
typedef struct ompi_group_t *MPI_Group;
typedef struct ompi_info_t *MPI_Info;
typedef struct ompi_op_t *MPI_Op;
typedef struct ompi_request_t *MPI_Request;
typedef struct ompi_message_t *MPI_Message;
typedef struct ompi_status_public_t MPI_Status;
typedef struct ompi_f08_status_public_t MPI_F08_status;
typedef struct ompi_win_t *MPI_Win;
typedef struct mca_base_var_enum_t *MPI_T_enum;
typedef struct ompi_mpit_cvar_handle_t *MPI_T_cvar_handle;
typedef struct mca_base_pvar_handle_t *MPI_T_pvar_handle;
typedef struct mca_base_pvar_session_t *MPI_T_pvar_session;
typedef struct ompi_instance_t *MPI_Session;

/*
 * MPI_Status
 */
struct ompi_status_public_t {
    /* These fields are publicly defined in the MPI specification.
       User applications may freely read from these fields. */
    int MPI_SOURCE;
    int MPI_TAG;
    int MPI_ERROR;
    /* The following two fields are internal to the Open MPI
       implementation and should not be accessed by MPI applications.
       They are subject to change at any time.  These are not the
       droids you're looking for. */
    int _cancelled;
    size_t _ucount;
};
typedef struct ompi_status_public_t ompi_status_public_t;

/*
 * MPI_F08_status
 */
struct ompi_f08_status_public_t {
    /* These fields are publicly defined in the MPI specification.
       User applications may freely read from these fields. */
    MPI_Fint MPI_SOURCE;
    MPI_Fint MPI_TAG;
    MPI_Fint MPI_ERROR;
    MPI_Fint internal[OMPI_FORTRAN_STATUS_SIZE - 3];
};
typedef struct ompi_f08_status_public_t ompi_f08_status_public_t;

/*
 * User typedefs
 */
typedef int (MPI_Datarep_extent_function)(MPI_Datatype, MPI_Aint *, void *);
typedef int (MPI_Datarep_conversion_function)(void *, MPI_Datatype,
                                              int, void *, MPI_Offset, void *);
typedef void (MPI_Comm_errhandler_function)(MPI_Comm *, int *, ...);
typedef void (MPI_Session_errhandler_function) (MPI_Session *, int *, ...);

    /* This is a little hackish, but errhandler.h needs space for a
       MPI_File_errhandler_function.  While it could just be removed, this
       allows us to maintain a stable ABI within OMPI, at least for
       apps that don't use MPI I/O. */
typedef void (ompi_file_errhandler_function)(MPI_File *, int *, ...);
typedef void (MPI_Win_errhandler_function)(MPI_Win *, int *, ...);
typedef void (MPI_User_function)(void *, void *, int *, MPI_Datatype *);
typedef int (MPI_Comm_copy_attr_function)(MPI_Comm, int, void *,
                                            void *, void *, int *);
typedef int (MPI_Comm_delete_attr_function)(MPI_Comm, int, void *, void *);
typedef int (MPI_Type_copy_attr_function)(MPI_Datatype, int, void *,
                                            void *, void *, int *);
typedef int (MPI_Type_delete_attr_function)(MPI_Datatype, int,
                                              void *, void *);
typedef int (MPI_Win_copy_attr_function)(MPI_Win, int, void *,
                                           void *, void *, int *);
typedef int (MPI_Win_delete_attr_function)(MPI_Win, int, void *, void *);
typedef int (MPI_Grequest_query_function)(void *, MPI_Status *);
typedef int (MPI_Grequest_free_function)(void *);
typedef int (MPI_Grequest_cancel_function)(void *, int);

/*
 * Deprecated typedefs.  Usage is discouraged, as these may be deleted
 * in future versions of the MPI Standard.
 */
typedef MPI_Comm_errhandler_function MPI_Comm_errhandler_fn
        __mpi_interface_deprecated__("MPI_Comm_errhandler_fn was deprecated in MPI-2.2; use MPI_Comm_errhandler_function instead");
typedef ompi_file_errhandler_function MPI_File_errhandler_fn
        __mpi_interface_deprecated__("MPI_File_errhandler_fn was deprecated in MPI-2.2; use MPI_File_errhandler_function instead");
typedef ompi_file_errhandler_function MPI_File_errhandler_function;
typedef MPI_Win_errhandler_function MPI_Win_errhandler_fn
        __mpi_interface_deprecated__("MPI_Win_errhandler_fn was deprecated in MPI-2.2; use MPI_Win_errhandler_function instead");


/*
 * Miscellaneous constants
 *
 * NOTE: Many of the integer constants below *also* appear in
 * ompi/include/mpif-values.pl.  If you change any of these integer
 * values below, make sure to also change the corresponding values in
 * mpif-values.pl.
 */
#define MPI_ANY_SOURCE         -1                      /* match any source rank */
#define MPI_PROC_NULL          -2                      /* rank of null process */
#define MPI_ROOT               -4                      /* special value for intercomms */
#define MPI_ANY_TAG            -1                      /* match any message tag */
#define MPI_MAX_PROCESSOR_NAME OPAL_MAX_PROCESSOR_NAME /* max proc. name length */
#define MPI_MAX_ERROR_STRING   OPAL_MAX_ERROR_STRING   /* max error message length */
#define MPI_MAX_OBJECT_NAME    OPAL_MAX_OBJECT_NAME    /* max object name length */
#define MPI_MAX_LIBRARY_VERSION_STRING 256             /* max length of library version string */
#define MPI_UNDEFINED          -32766                  /* undefined stuff */
#define MPI_DIST_GRAPH         3                       /* dist graph topology */
#define MPI_CART               1                       /* cartesian topology */
#define MPI_GRAPH              2                       /* graph topology */
#define MPI_KEYVAL_INVALID     -1                      /* invalid key value */

/*
 * More constants
 */
#define MPI_UNWEIGHTED           ((int *) 2)           /* unweighted graph */
#define MPI_WEIGHTS_EMPTY        ((int *) 3)           /* empty weights */
#define MPI_BOTTOM               ((void *) 0)          /* base reference address */
#define MPI_IN_PLACE             ((void *) 1)          /* in place buffer */
#define MPI_BSEND_OVERHEAD       128                   /* size of bsend header + ptr */
#define MPI_MAX_INFO_KEY         OPAL_MAX_INFO_KEY     /* max info key length */
#define MPI_MAX_INFO_VAL         OPAL_MAX_INFO_VAL     /* max info value length */
#define MPI_ARGV_NULL            ((char **) 0)         /* NULL argument vector */
#define MPI_ARGVS_NULL           ((char ***) 0)        /* NULL argument vectors */
#define MPI_ERRCODES_IGNORE      ((int *) 0)           /* don't return error codes */
#define MPI_MAX_PORT_NAME        OPAL_MAX_PORT_NAME    /* max port name length */
#define MPI_ORDER_C              0                     /* C row major order */
#define MPI_ORDER_FORTRAN        1                     /* Fortran column major order */
#define MPI_DISTRIBUTE_BLOCK     0                     /* block distribution */
#define MPI_DISTRIBUTE_CYCLIC    1                     /* cyclic distribution */
#define MPI_DISTRIBUTE_NONE      2                     /* not distributed */
#define MPI_DISTRIBUTE_DFLT_DARG (-1)                  /* default distribution arg */
#define MPI_MAX_PSET_NAME_LEN    OPAL_MAX_PSET_NAME_LEN /* max pset name len */
#define MPI_MAX_STRINGTAG_LEN    OPAL_MAX_STRINGTAG_LEN /* max length of string arg to comm from group funcs*/

/*
 * Constants for C code to access elements in Fortran MPI status array.
 *
 * NOTE: The MPI_F_SOURCE, MPI_F_TAG, MPI_F_ERROR are intentionally 1
 * smaller than their Fortran equivalents in mpif-values.pl (because C
 * is 0-indexed and Fortran is 1-indexed).
 */
#define MPI_F_STATUS_SIZE OMPI_FORTRAN_STATUS_SIZE    /* Size of Fortran MPI status array */
#define MPI_F_SOURCE      0                           /* Index for MPI_SOURCE */
#define MPI_F_TAG         1                           /* Index for MPI_TAG */
#define MPI_F_ERROR       2                           /* Index for MPI_ERROR */

/*
 * Since these values are arbitrary to Open MPI, we might as well make
 * them the same as ROMIO for ease of mapping.  These values taken
 * from ROMIO's mpio.h file.
 */
#define MPI_MODE_CREATE              1  /* ADIO_CREATE */
#define MPI_MODE_RDONLY              2  /* ADIO_RDONLY */
#define MPI_MODE_WRONLY              4  /* ADIO_WRONLY  */
#define MPI_MODE_RDWR                8  /* ADIO_RDWR  */
#define MPI_MODE_DELETE_ON_CLOSE    16  /* ADIO_DELETE_ON_CLOSE */
#define MPI_MODE_UNIQUE_OPEN        32  /* ADIO_UNIQUE_OPEN */
#define MPI_MODE_EXCL               64  /* ADIO_EXCL */
#define MPI_MODE_APPEND            128  /* ADIO_APPEND */
#define MPI_MODE_SEQUENTIAL        256  /* ADIO_SEQUENTIAL */

#define MPI_DISPLACEMENT_CURRENT   -54278278

#define MPI_SEEK_SET               600
#define MPI_SEEK_CUR               602
#define MPI_SEEK_END               604

/* Max data representation length */
#define MPI_MAX_DATAREP_STRING OPAL_MAX_DATAREP_STRING

/*
 * MPI-2 One-Sided Communications asserts
 */
#define MPI_MODE_NOCHECK             1
#define MPI_MODE_NOPRECEDE           2
#define MPI_MODE_NOPUT               4
#define MPI_MODE_NOSTORE             8
#define MPI_MODE_NOSUCCEED          16

#define MPI_LOCK_EXCLUSIVE           1
#define MPI_LOCK_SHARED              2

#define MPI_WIN_FLAVOR_CREATE        1
#define MPI_WIN_FLAVOR_ALLOCATE      2
#define MPI_WIN_FLAVOR_DYNAMIC       3
#define MPI_WIN_FLAVOR_SHARED        4

#define MPI_WIN_UNIFIED              0
#define MPI_WIN_SEPARATE             1

/*
 * Predefined attribute keyvals
 *
 * DO NOT CHANGE THE ORDER WITHOUT ALSO CHANGING THE ORDER IN
 * ompi/attribute/attribute_predefined.c and mpif-constants.h (which
 * is included by mpif.h.in).
 */
enum {
    /* MPI-1 */
    MPI_TAG_UB,
    MPI_HOST,
    MPI_IO,
    MPI_WTIME_IS_GLOBAL,

    /* MPI-2 */
    MPI_APPNUM,
    MPI_LASTUSEDCODE,
    MPI_UNIVERSE_SIZE,
    MPI_WIN_BASE,
    MPI_WIN_SIZE,
    MPI_WIN_DISP_UNIT,
    MPI_WIN_CREATE_FLAVOR,
    MPI_WIN_MODEL,

    /* MPI-4 */
    MPI_FT, /* used by OPAL_ENABLE_FT_MPI */
    MPI_ATTR_PREDEFINED_KEY_MAX,
};

/*
 * Error classes and codes
 * Do not change the values of these without also modifying mpif.h.in.
 */
#define MPI_SUCCESS                   0
#define MPI_ERR_BUFFER                1
#define MPI_ERR_COUNT                 2
#define MPI_ERR_TYPE                  3
#define MPI_ERR_TAG                   4
#define MPI_ERR_COMM                  5
#define MPI_ERR_RANK                  6
#define MPI_ERR_REQUEST               7
#define MPI_ERR_ROOT                  8
#define MPI_ERR_GROUP                 9
#define MPI_ERR_OP                    10
#define MPI_ERR_TOPOLOGY              11
#define MPI_ERR_DIMS                  12
#define MPI_ERR_ARG                   13
#define MPI_ERR_UNKNOWN               14
#define MPI_ERR_TRUNCATE              15
#define MPI_ERR_OTHER                 16
#define MPI_ERR_INTERN                17
#define MPI_ERR_IN_STATUS             18
#define MPI_ERR_PENDING               19
#define MPI_ERR_ACCESS                20
#define MPI_ERR_AMODE                 21
#define MPI_ERR_ASSERT                22
#define MPI_ERR_BAD_FILE              23
#define MPI_ERR_BASE                  24
#define MPI_ERR_CONVERSION            25
#define MPI_ERR_DISP                  26
#define MPI_ERR_DUP_DATAREP           27
#define MPI_ERR_FILE_EXISTS           28
#define MPI_ERR_FILE_IN_USE           29
#define MPI_ERR_FILE                  30
#define MPI_ERR_INFO_KEY              31
#define MPI_ERR_INFO_NOKEY            32
#define MPI_ERR_INFO_VALUE            33
#define MPI_ERR_INFO                  34
#define MPI_ERR_IO                    35
#define MPI_ERR_KEYVAL                36
#define MPI_ERR_LOCKTYPE              37
#define MPI_ERR_NAME                  38
#define MPI_ERR_NO_MEM                39
#define MPI_ERR_NOT_SAME              40
#define MPI_ERR_NO_SPACE              41
#define MPI_ERR_NO_SUCH_FILE          42
#define MPI_ERR_PORT                  43
#define MPI_ERR_QUOTA                 44
#define MPI_ERR_READ_ONLY             45
#define MPI_ERR_RMA_CONFLICT          46
#define MPI_ERR_RMA_SYNC              47
#define MPI_ERR_SERVICE               48
#define MPI_ERR_SIZE                  49
#define MPI_ERR_SPAWN                 50
#define MPI_ERR_UNSUPPORTED_DATAREP   51
#define MPI_ERR_UNSUPPORTED_OPERATION 52
#define MPI_ERR_WIN                   53

#define MPI_T_ERR_MEMORY              54
#define MPI_T_ERR_NOT_INITIALIZED     55
#define MPI_T_ERR_CANNOT_INIT         56
#define MPI_T_ERR_INVALID_INDEX       57
#define MPI_T_ERR_INVALID_ITEM        58
#define MPI_T_ERR_INVALID_HANDLE      59
#define MPI_T_ERR_OUT_OF_HANDLES      60
#define MPI_T_ERR_OUT_OF_SESSIONS     61
#define MPI_T_ERR_INVALID_SESSION     62
#define MPI_T_ERR_CVAR_SET_NOT_NOW    63
#define MPI_T_ERR_CVAR_SET_NEVER      64
#define MPI_T_ERR_PVAR_NO_STARTSTOP   65
#define MPI_T_ERR_PVAR_NO_WRITE       66
#define MPI_T_ERR_PVAR_NO_ATOMIC      67
#define MPI_ERR_RMA_RANGE             68
#define MPI_ERR_RMA_ATTACH            69
#define MPI_ERR_RMA_FLAVOR            70
#define MPI_ERR_RMA_SHARED            71
#define MPI_T_ERR_INVALID             72
#define MPI_T_ERR_INVALID_NAME        73
#define MPI_ERR_PROC_ABORTED          74

/* not #if conditional on OPAL_ENABLE_FT_MPI for ABI */
#define MPI_ERR_PROC_FAILED           75
#define MPI_ERR_PROC_FAILED_PENDING   76
#define MPI_ERR_REVOKED               77
#define MPI_ERR_SESSION               78
#define MPI_ERR_VALUE_TOO_LARGE       79

/* Per MPI-3 p349 47, MPI_ERR_LASTCODE must be >= the last predefined
   MPI_ERR_<foo> code. Set the last code to allow some room for adding
   error codes without breaking ABI. */
#define MPI_ERR_LASTCODE              92

/*
 * Comparison results.  Don't change the order of these, the group
 * comparison functions rely on it.
 * Do not change the order of these without also modifying
 * mpif-values.pl.
 */
enum {
  MPI_IDENT,
  MPI_CONGRUENT,
  MPI_SIMILAR,
  MPI_UNEQUAL
};

/*
 * MPI_Init_thread constants
 * Do not change the order of these without also modifying
 * mpif-values.pl.
 */
enum {
  MPI_THREAD_SINGLE,
  MPI_THREAD_FUNNELED,
  MPI_THREAD_SERIALIZED,
  MPI_THREAD_MULTIPLE
};

/*
 * Datatype combiners.
 * Do not change the order of these without also modifying
 * mpif-values.pl.
 */
enum {
  MPI_COMBINER_NAMED,
  MPI_COMBINER_DUP,
  MPI_COMBINER_CONTIGUOUS,
  MPI_COMBINER_VECTOR,
#if (!OMPI_OMIT_MPI1_COMPAT_DECLS)
  MPI_COMBINER_HVECTOR_INTEGER,
#else
  OMPI_WAS_MPI_COMBINER_HVECTOR_INTEGER, /* preserve ABI compatibility */
#endif
  MPI_COMBINER_HVECTOR,
  MPI_COMBINER_INDEXED,
#if (!OMPI_OMIT_MPI1_COMPAT_DECLS)
  MPI_COMBINER_HINDEXED_INTEGER,
#else
  OMPI_WAS_MPI_COMBINER_HINDEXED_INTEGER, /* preserve ABI compatibility */
#endif
  MPI_COMBINER_HINDEXED,
  MPI_COMBINER_INDEXED_BLOCK,
#if (!OMPI_OMIT_MPI1_COMPAT_DECLS)
  MPI_COMBINER_STRUCT_INTEGER,
#else
  OMPI_WAS_MPI_COMBINER_STRUCT_INTEGER, /* preserve ABI compatibility */
#endif
  MPI_COMBINER_STRUCT,
  MPI_COMBINER_SUBARRAY,
  MPI_COMBINER_DARRAY,
  MPI_COMBINER_F90_REAL,
  MPI_COMBINER_F90_COMPLEX,
  MPI_COMBINER_F90_INTEGER,
  MPI_COMBINER_RESIZED,
  MPI_COMBINER_HINDEXED_BLOCK
};

#if (OMPI_OMIT_MPI1_COMPAT_DECLS)
/* If not building or configured --enable-mpi1-compatibility, then
 * we don't want these datatypes, instead we define MPI_COMBINER_*_INTEGER
 * to our Static Assert message if the compiler supports
 * that static assert with a nice message.
 */
#    if (OMPI_REMOVED_USE_STATIC_ASSERT)
#        define MPI_COMBINER_HVECTOR_INTEGER THIS_SYMBOL_WAS_REMOVED_IN_MPI30(MPI_COMBINER_HVECTOR_INTEGER, MPI_COMBINER_HVECTOR);
#        define MPI_COMBINER_HINDEXED_INTEGER THIS_SYMBOL_WAS_REMOVED_IN_MPI30(MPI_COMBINER_HINDEXED_INTEGER, MPI_COMBINER_HINDEXED);
#        define MPI_COMBINER_STRUCT_INTEGER THIS_SYMBOL_WAS_REMOVED_IN_MPI30(MPI_COMBINER_STRUCT_INTEGER, MPI_COMBINER_STRUCT);
#    endif /* OMPI_REMOVED_USE_STATIC_ASSERT */
#endif /* Removed datatypes */

/*
 * Communicator split type constants.
 * Do not change the order of these without also modifying
 * mpif-values.pl.
 */
enum {
  MPI_COMM_TYPE_SHARED,
  OMPI_COMM_TYPE_HWTHREAD,
  OMPI_COMM_TYPE_CORE,
  OMPI_COMM_TYPE_L1CACHE,
  OMPI_COMM_TYPE_L2CACHE,
  OMPI_COMM_TYPE_L3CACHE,
  OMPI_COMM_TYPE_SOCKET,
  OMPI_COMM_TYPE_NUMA,
  OMPI_COMM_TYPE_BOARD,
  OMPI_COMM_TYPE_HOST,
  OMPI_COMM_TYPE_CU,
  OMPI_COMM_TYPE_CLUSTER,
  MPI_COMM_TYPE_HW_UNGUIDED,
  MPI_COMM_TYPE_HW_GUIDED
};
#define OMPI_COMM_TYPE_NODE MPI_COMM_TYPE_SHARED

/*
 * MPIT Verbosity Levels
 */
enum {
  MPI_T_VERBOSITY_USER_BASIC,
  MPI_T_VERBOSITY_USER_DETAIL,
  MPI_T_VERBOSITY_USER_ALL,
  MPI_T_VERBOSITY_TUNER_BASIC,
  MPI_T_VERBOSITY_TUNER_DETAIL,
  MPI_T_VERBOSITY_TUNER_ALL,
  MPI_T_VERBOSITY_MPIDEV_BASIC,
  MPI_T_VERBOSITY_MPIDEV_DETAIL,
  MPI_T_VERBOSITY_MPIDEV_ALL
};

/*
 * MPIT Scopes
 */
enum {
  MPI_T_SCOPE_CONSTANT,
  MPI_T_SCOPE_READONLY,
  MPI_T_SCOPE_LOCAL,
  MPI_T_SCOPE_GROUP,
  MPI_T_SCOPE_GROUP_EQ,
  MPI_T_SCOPE_ALL,
  MPI_T_SCOPE_ALL_EQ
};

/*
 * MPIT Object Binding
 */
enum {
  MPI_T_BIND_NO_OBJECT,
  MPI_T_BIND_MPI_COMM,
  MPI_T_BIND_MPI_DATATYPE,
  MPI_T_BIND_MPI_ERRHANDLER,
  MPI_T_BIND_MPI_FILE,
  MPI_T_BIND_MPI_GROUP,
  MPI_T_BIND_MPI_OP,
  MPI_T_BIND_MPI_REQUEST,
  MPI_T_BIND_MPI_WIN,
  MPI_T_BIND_MPI_MESSAGE,
  MPI_T_BIND_MPI_INFO
};

/*
 * MPIT pvar classes
 */
enum {
  MPI_T_PVAR_CLASS_STATE,
  MPI_T_PVAR_CLASS_LEVEL,
  MPI_T_PVAR_CLASS_SIZE,
  MPI_T_PVAR_CLASS_PERCENTAGE,
  MPI_T_PVAR_CLASS_HIGHWATERMARK,
  MPI_T_PVAR_CLASS_LOWWATERMARK,
  MPI_T_PVAR_CLASS_COUNTER,
  MPI_T_PVAR_CLASS_AGGREGATE,
  MPI_T_PVAR_CLASS_TIMER,
  MPI_T_PVAR_CLASS_GENERIC
};

/*
 * NULL handles
 */
#define MPI_SESSION_NULL OMPI_PREDEFINED_GLOBAL(MPI_Session, ompi_mpi_instance_null)
#define MPI_GROUP_NULL OMPI_PREDEFINED_GLOBAL(MPI_Group, ompi_mpi_group_null)
#define MPI_COMM_NULL OMPI_PREDEFINED_GLOBAL(MPI_Comm, ompi_mpi_comm_null)
#define MPI_REQUEST_NULL OMPI_PREDEFINED_GLOBAL(MPI_Request, ompi_request_null)
#define MPI_MESSAGE_NULL OMPI_PREDEFINED_GLOBAL(MPI_Message, ompi_message_null)
#define MPI_OP_NULL OMPI_PREDEFINED_GLOBAL(MPI_Op, ompi_mpi_op_null)
#define MPI_ERRHANDLER_NULL OMPI_PREDEFINED_GLOBAL(MPI_Errhandler, ompi_mpi_errhandler_null)
#define MPI_INFO_NULL OMPI_PREDEFINED_GLOBAL(MPI_Info, ompi_mpi_info_null)
#define MPI_WIN_NULL OMPI_PREDEFINED_GLOBAL(MPI_Win, ompi_mpi_win_null)
#define MPI_FILE_NULL OMPI_PREDEFINED_GLOBAL(MPI_File, ompi_mpi_file_null)
#define MPI_T_ENUM_NULL ((MPI_T_enum) NULL)

/*
 * MPI_INFO_ENV handle
 */
#define MPI_INFO_ENV OMPI_PREDEFINED_GLOBAL(MPI_Info, ompi_mpi_info_env)

#if defined(c_plusplus) || defined(__cplusplus)
#define MPI_STATUS_IGNORE (static_cast<MPI_Status *> (0))
#define MPI_STATUSES_IGNORE (static_cast<MPI_Status *> (0))
#else
#define MPI_STATUS_IGNORE ((MPI_Status *) 0)
#define MPI_STATUSES_IGNORE ((MPI_Status *) 0)
#endif

/*
 * Special MPI_T handles
 */
#define MPI_T_PVAR_ALL_HANDLES ((MPI_T_pvar_handle) -1)
#define MPI_T_PVAR_HANDLE_NULL ((MPI_T_pvar_handle) 0)
#define MPI_T_PVAR_SESSION_NULL ((MPI_T_pvar_session) 0)
#define MPI_T_CVAR_HANDLE_NULL ((MPI_T_cvar_handle) 0)

/* MPI-2 specifies that the name "MPI_TYPE_NULL_DELETE_FN" (and all
   related friends) must be accessible in C, C++, and Fortran. This is
   unworkable if the back-end Fortran compiler uses all caps for its
   linker symbol convention -- it results in two functions with
   different signatures that have the same name (i.e., both C and
   Fortran use the symbol MPI_TYPE_NULL_DELETE_FN).  So we have to
   #define the C names to be something else, so that they names are
   *accessed* through MPI_TYPE_NULL_DELETE_FN, but their actual symbol
   name is different.

   However, this file is included when the fortran wrapper functions
   are compiled in Open MPI, so we do *not* want these #defines in
   this case (i.e., we need the Fortran wrapper function to be
   compiled as MPI_TYPE_NULL_DELETE_FN).  So add some #if kinds of
   protection for this case. */

#if !defined(OMPI_COMPILING_FORTRAN_WRAPPERS)

#define MPI_TYPE_NULL_DELETE_FN OMPI_C_MPI_TYPE_NULL_DELETE_FN
#define MPI_TYPE_NULL_COPY_FN OMPI_C_MPI_TYPE_NULL_COPY_FN
#define MPI_TYPE_DUP_FN OMPI_C_MPI_TYPE_DUP_FN

#define MPI_COMM_NULL_DELETE_FN OMPI_C_MPI_COMM_NULL_DELETE_FN
#define MPI_COMM_NULL_COPY_FN OMPI_C_MPI_COMM_NULL_COPY_FN
#define MPI_COMM_DUP_FN OMPI_C_MPI_COMM_DUP_FN

#define MPI_WIN_NULL_DELETE_FN OMPI_C_MPI_WIN_NULL_DELETE_FN
#define MPI_WIN_NULL_COPY_FN OMPI_C_MPI_WIN_NULL_COPY_FN
#define MPI_WIN_DUP_FN OMPI_C_MPI_WIN_DUP_FN

/* MPI_CONVERSION_FN_NULL is a sentinel value, but it has to be large
   enough to be the same size as a valid function pointer.  It
   therefore shares many characteristics between Fortran constants and
   Fortran sentinel functions.  For example, it shares the problem of
   having Fortran compilers have all-caps versions of the symbols that
   must be able to be present, and therefore has to be in this
   conditional block in mpi.h. */
#define MPI_CONVERSION_FN_NULL ((MPI_Datarep_conversion_function*) 0)
#endif

OMPI_DECLSPEC int OMPI_C_MPI_TYPE_NULL_DELETE_FN( MPI_Datatype datatype,
                                                  int type_keyval,
                                                  void* attribute_val_out,
                                                  void* extra_state );
OMPI_DECLSPEC int OMPI_C_MPI_TYPE_NULL_COPY_FN( MPI_Datatype datatype,
                                                int type_keyval,
                                                void* extra_state,
                                                void* attribute_val_in,
                                                void* attribute_val_out,
                                                int* flag );
OMPI_DECLSPEC int OMPI_C_MPI_TYPE_DUP_FN( MPI_Datatype datatype,
                                          int type_keyval,
                                          void* extra_state,
                                          void* attribute_val_in,
                                          void* attribute_val_out,
                                          int* flag );
OMPI_DECLSPEC int OMPI_C_MPI_COMM_NULL_DELETE_FN( MPI_Comm comm,
                                                  int comm_keyval,
                                                  void* attribute_val_out,
                                                  void* extra_state );
OMPI_DECLSPEC int OMPI_C_MPI_COMM_NULL_COPY_FN( MPI_Comm comm,
                                                int comm_keyval,
                                                void* extra_state,
                                                void* attribute_val_in,
                                                void* attribute_val_out,
                                                int* flag );
OMPI_DECLSPEC int OMPI_C_MPI_COMM_DUP_FN( MPI_Comm comm, int comm_keyval,
                                          void* extra_state,
                                          void* attribute_val_in,
                                          void* attribute_val_out,
                                          int* flag );
OMPI_DECLSPEC int OMPI_C_MPI_WIN_NULL_DELETE_FN( MPI_Win window,
                                                 int win_keyval,
                                                 void* attribute_val_out,
                                                 void* extra_state );
OMPI_DECLSPEC int OMPI_C_MPI_WIN_NULL_COPY_FN( MPI_Win window, int win_keyval,
                                               void* extra_state,
                                               void* attribute_val_in,
                                               void* attribute_val_out,
                                               int* flag );
OMPI_DECLSPEC int OMPI_C_MPI_WIN_DUP_FN( MPI_Win window, int win_keyval,
                                         void* extra_state,
                                         void* attribute_val_in,
                                         void* attribute_val_out,
                                         int* flag );

/*
 * External variables
 *
 * The below externs use the ompi_predefined_xxx_t structures to maintain
 * back compatibility between MPI library versions.
 * See ompi/communicator/communicator.h comments with struct ompi_communicator_t
 * for full explanation why we chose to use the ompi_predefined_xxx_t structure.
 */
OMPI_DECLSPEC extern struct ompi_predefined_communicator_t ompi_mpi_comm_world;
OMPI_DECLSPEC extern struct ompi_predefined_communicator_t ompi_mpi_comm_self;
OMPI_DECLSPEC extern struct ompi_predefined_communicator_t ompi_mpi_comm_null;

OMPI_DECLSPEC extern struct ompi_predefined_group_t ompi_mpi_group_empty;
OMPI_DECLSPEC extern struct ompi_predefined_group_t ompi_mpi_group_null;

OMPI_DECLSPEC extern struct ompi_predefined_instance_t ompi_mpi_instance_null;

OMPI_DECLSPEC extern struct ompi_predefined_request_t ompi_request_null;

OMPI_DECLSPEC extern struct ompi_predefined_message_t ompi_message_null;
OMPI_DECLSPEC extern struct ompi_predefined_message_t ompi_message_no_proc;

OMPI_DECLSPEC extern struct ompi_predefined_op_t ompi_mpi_op_null;
OMPI_DECLSPEC extern struct ompi_predefined_op_t ompi_mpi_op_min;
OMPI_DECLSPEC extern struct ompi_predefined_op_t ompi_mpi_op_max;
OMPI_DECLSPEC extern struct ompi_predefined_op_t ompi_mpi_op_sum;
OMPI_DECLSPEC extern struct ompi_predefined_op_t ompi_mpi_op_prod;
OMPI_DECLSPEC extern struct ompi_predefined_op_t ompi_mpi_op_land;
OMPI_DECLSPEC extern struct ompi_predefined_op_t ompi_mpi_op_band;
OMPI_DECLSPEC extern struct ompi_predefined_op_t ompi_mpi_op_lor;
OMPI_DECLSPEC extern struct ompi_predefined_op_t ompi_mpi_op_bor;
OMPI_DECLSPEC extern struct ompi_predefined_op_t ompi_mpi_op_lxor;
OMPI_DECLSPEC extern struct ompi_predefined_op_t ompi_mpi_op_bxor;
OMPI_DECLSPEC extern struct ompi_predefined_op_t ompi_mpi_op_maxloc;
OMPI_DECLSPEC extern struct ompi_predefined_op_t ompi_mpi_op_minloc;
OMPI_DECLSPEC extern struct ompi_predefined_op_t ompi_mpi_op_replace;
OMPI_DECLSPEC extern struct ompi_predefined_op_t ompi_mpi_op_no_op;


OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_datatype_null;

OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_char;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_signed_char;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_unsigned_char;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_byte;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_short;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_unsigned_short;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_int;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_unsigned;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_long;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_unsigned_long;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_long_long_int;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_unsigned_long_long;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_float;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_double;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_long_double;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_wchar;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_packed;

/*
 * Following are the C++/C99 datatypes
 */
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_cxx_bool;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_cxx_cplex;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_cxx_dblcplex;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_cxx_ldblcplex;

/*
 * Following are the Fortran datatypes
 */
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_logical;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_character;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_integer;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_real;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_dblprec;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_cplex;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_dblcplex;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_ldblcplex;

/* Aggregate struct datatypes are not const */
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_2int;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_2integer;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_2real;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_2dblprec;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_2cplex;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_2dblcplex;

OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_float_int;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_double_int;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_longdbl_int;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_short_int;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_long_int;

/* Optional MPI2 datatypes, always declared and defined, but not "exported" as MPI_LOGICAL1 */
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_logical1;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_logical2;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_logical4;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_logical8;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_integer1;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_integer2;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_integer4;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_integer8;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_integer16;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_real2;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_real4;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_real8;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_real16;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_complex4;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_complex8;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_complex16;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_complex32;

/* New datatypes from the MPI 2.2 standard */
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_int8_t;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_uint8_t;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_int16_t;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_uint16_t;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_int32_t;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_uint32_t;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_int64_t;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_uint64_t;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_aint;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_offset;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_count;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_c_bool;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_c_float_complex;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_c_double_complex;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_c_long_double_complex;

OMPI_DECLSPEC extern struct ompi_predefined_errhandler_t ompi_mpi_errhandler_null;
OMPI_DECLSPEC extern struct ompi_predefined_errhandler_t ompi_mpi_errors_are_fatal;
OMPI_DECLSPEC extern struct ompi_predefined_errhandler_t ompi_mpi_errors_abort;
OMPI_DECLSPEC extern struct ompi_predefined_errhandler_t ompi_mpi_errors_return;

OMPI_DECLSPEC extern struct ompi_predefined_win_t ompi_mpi_win_null;
OMPI_DECLSPEC extern struct ompi_predefined_file_t ompi_mpi_file_null;

OMPI_DECLSPEC extern struct ompi_predefined_info_t ompi_mpi_info_null;
OMPI_DECLSPEC extern struct ompi_predefined_info_t ompi_mpi_info_env;

OMPI_DECLSPEC extern MPI_Fint *MPI_F_STATUS_IGNORE;
OMPI_DECLSPEC extern MPI_Fint *MPI_F_STATUSES_IGNORE;

OMPI_DECLSPEC extern MPI_Fint *MPI_F08_STATUS_IGNORE;
OMPI_DECLSPEC extern MPI_Fint *MPI_F08_STATUSES_IGNORE;

/*
 * Removed datatypes.  These datatypes are only available if Open MPI
 * was configured with --enable-mpi1-compatibility.
 *
 * These datatypes were formally removed from the MPI specification
 * and should no longer be used in MPI applications.
 */
#if (!OMPI_OMIT_MPI1_COMPAT_DECLS)
#    define MPI_UB OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_ub)
#    define MPI_LB OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_lb)

OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_lb;
OMPI_DECLSPEC extern struct ompi_predefined_datatype_t ompi_mpi_ub;

#else
/* If not building or configured --enable-mpi1-compatibility, then
 * we don't want these datatypes, instead we define MPI_UB and
 * MPI_LB to our Static Assert message if the compiler supports
 * that static assert with a nice message.
 */
#    if (OMPI_REMOVED_USE_STATIC_ASSERT)
#        define MPI_UB THIS_SYMBOL_WAS_REMOVED_IN_MPI30(MPI_UB, MPI_Type_create_resized);
#        define MPI_LB THIS_SYMBOL_WAS_REMOVED_IN_MPI30(MPI_LB, MPI_Type_create_resized);
#    endif /* OMPI_REMOVED_USE_STATIC_ASSERT */
#endif /* Removed datatypes */


/*
 * MPI predefined handles
 */
#define MPI_COMM_WORLD OMPI_PREDEFINED_GLOBAL( MPI_Comm, ompi_mpi_comm_world)
#define MPI_COMM_SELF OMPI_PREDEFINED_GLOBAL(MPI_Comm, ompi_mpi_comm_self)

#define MPI_GROUP_EMPTY OMPI_PREDEFINED_GLOBAL(MPI_Group, ompi_mpi_group_empty)

#define MPI_MESSAGE_NO_PROC OMPI_PREDEFINED_GLOBAL(MPI_Message, ompi_message_no_proc)

#define MPI_MAX OMPI_PREDEFINED_GLOBAL(MPI_Op, ompi_mpi_op_max)
#define MPI_MIN OMPI_PREDEFINED_GLOBAL(MPI_Op, ompi_mpi_op_min)
#define MPI_SUM OMPI_PREDEFINED_GLOBAL(MPI_Op, ompi_mpi_op_sum)
#define MPI_PROD OMPI_PREDEFINED_GLOBAL(MPI_Op, ompi_mpi_op_prod)
#define MPI_LAND OMPI_PREDEFINED_GLOBAL(MPI_Op, ompi_mpi_op_land)
#define MPI_BAND OMPI_PREDEFINED_GLOBAL(MPI_Op, ompi_mpi_op_band)
#define MPI_LOR OMPI_PREDEFINED_GLOBAL(MPI_Op, ompi_mpi_op_lor)
#define MPI_BOR OMPI_PREDEFINED_GLOBAL(MPI_Op, ompi_mpi_op_bor)
#define MPI_LXOR OMPI_PREDEFINED_GLOBAL(MPI_Op, ompi_mpi_op_lxor)
#define MPI_BXOR OMPI_PREDEFINED_GLOBAL(MPI_Op, ompi_mpi_op_bxor)
#define MPI_MAXLOC OMPI_PREDEFINED_GLOBAL(MPI_Op, ompi_mpi_op_maxloc)
#define MPI_MINLOC OMPI_PREDEFINED_GLOBAL(MPI_Op, ompi_mpi_op_minloc)
#define MPI_REPLACE OMPI_PREDEFINED_GLOBAL(MPI_Op, ompi_mpi_op_replace)
#define MPI_NO_OP OMPI_PREDEFINED_GLOBAL(MPI_Op, ompi_mpi_op_no_op)

/* C datatypes */
#define MPI_DATATYPE_NULL OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_datatype_null)
#define MPI_BYTE OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_byte)
#define MPI_PACKED OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_packed)
#define MPI_CHAR OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_char)
#define MPI_SHORT OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_short)
#define MPI_INT OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_int)
#define MPI_LONG OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_long)
#define MPI_FLOAT OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_float)
#define MPI_DOUBLE OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_double)
#define MPI_LONG_DOUBLE OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_long_double)
#define MPI_UNSIGNED_CHAR OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_unsigned_char)
#define MPI_SIGNED_CHAR OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_signed_char)
#define MPI_UNSIGNED_SHORT OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_unsigned_short)
#define MPI_UNSIGNED_LONG OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_unsigned_long)
#define MPI_UNSIGNED OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_unsigned)
#define MPI_FLOAT_INT OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_float_int)
#define MPI_DOUBLE_INT OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_double_int)
#define MPI_LONG_DOUBLE_INT OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_longdbl_int)
#define MPI_LONG_INT OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_long_int)
#define MPI_SHORT_INT OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_short_int)
#define MPI_2INT OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_2int)

#define MPI_WCHAR OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_wchar)
#if OPAL_HAVE_LONG_LONG
#define MPI_LONG_LONG_INT OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_long_long_int)
#define MPI_LONG_LONG OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_long_long_int)
#define MPI_UNSIGNED_LONG_LONG OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_unsigned_long_long)
#endif  /* OPAL_HAVE_LONG_LONG */
#define MPI_2COMPLEX OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_2cplex)
#define MPI_2DOUBLE_COMPLEX OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_2dblcplex)

/* Fortran datatype bindings */
#define MPI_CHARACTER OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_character)
#define MPI_LOGICAL OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_logical)
#if OMPI_HAVE_FORTRAN_LOGICAL1
#define MPI_LOGICAL1 OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_logical1)
#endif
#if OMPI_HAVE_FORTRAN_LOGICAL2
#define MPI_LOGICAL2 OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_logical2)
#endif
#if OMPI_HAVE_FORTRAN_LOGICAL4
#define MPI_LOGICAL4 OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_logical4)
#endif
#if OMPI_HAVE_FORTRAN_LOGICAL8
#define MPI_LOGICAL8 OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_logical8)
#endif
#define MPI_INTEGER OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_integer)
#if OMPI_HAVE_FORTRAN_INTEGER1
#define MPI_INTEGER1 OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_integer1)
#endif
#if OMPI_HAVE_FORTRAN_INTEGER2
#define MPI_INTEGER2 OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_integer2)
#endif
#if OMPI_HAVE_FORTRAN_INTEGER4
#define MPI_INTEGER4 OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_integer4)
#endif
#if OMPI_HAVE_FORTRAN_INTEGER8
#define MPI_INTEGER8 OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_integer8)
#endif
#if OMPI_HAVE_FORTRAN_INTEGER16
#define MPI_INTEGER16 OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_integer16)
#endif
#define MPI_REAL OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_real)
#if OMPI_HAVE_FORTRAN_REAL2
#define MPI_REAL2 OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_real2)
#endif
#if OMPI_HAVE_FORTRAN_REAL4
#define MPI_REAL4 OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_real4)
#endif
#if OMPI_HAVE_FORTRAN_REAL8
#define MPI_REAL8 OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_real8)
#endif
#if OMPI_HAVE_FORTRAN_REAL16
#define MPI_REAL16 OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_real16)
#endif
#define MPI_DOUBLE_PRECISION OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_dblprec)
#define MPI_COMPLEX OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_cplex)
#if OMPI_HAVE_FORTRAN_REAL2
#define MPI_COMPLEX4 OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_complex4)
#endif
#if OMPI_HAVE_FORTRAN_REAL4
#define MPI_COMPLEX8 OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_complex8)
#endif
#if OMPI_HAVE_FORTRAN_REAL8
#define MPI_COMPLEX16 OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_complex16)
#endif
#if OMPI_HAVE_FORTRAN_REAL16
#define MPI_COMPLEX32 OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_complex32)
#endif
#define MPI_DOUBLE_COMPLEX OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_dblcplex)
#define MPI_2REAL OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_2real)
#define MPI_2DOUBLE_PRECISION OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_2dblprec)
#define MPI_2INTEGER OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_2integer)

/* New datatypes from the MPI 2.2 standard */
#define MPI_INT8_T                OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_int8_t)
#define MPI_UINT8_T               OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_uint8_t)
#define MPI_INT16_T               OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_int16_t)
#define MPI_UINT16_T              OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_uint16_t)
#define MPI_INT32_T               OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_int32_t)
#define MPI_UINT32_T              OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_uint32_t)
#define MPI_INT64_T               OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_int64_t)
#define MPI_UINT64_T              OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_uint64_t)
#define MPI_AINT                  OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_aint)
#define MPI_OFFSET                OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_offset)
#define MPI_C_BOOL                OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_c_bool)
#if HAVE_FLOAT__COMPLEX
#define MPI_C_COMPLEX             OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_c_float_complex)
#define MPI_C_FLOAT_COMPLEX       OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_c_float_complex)
#endif
#if HAVE_DOUBLE__COMPLEX
#define MPI_C_DOUBLE_COMPLEX      OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_c_double_complex)
#endif
#if HAVE_LONG_DOUBLE__COMPLEX
#define MPI_C_LONG_DOUBLE_COMPLEX OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_c_long_double_complex)
#endif
#define MPI_CXX_BOOL              OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_cxx_bool)
#define MPI_CXX_COMPLEX           OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_cxx_cplex)
#define MPI_CXX_FLOAT_COMPLEX     OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_cxx_cplex)
#define MPI_CXX_DOUBLE_COMPLEX    OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_cxx_dblcplex)
#define MPI_CXX_LONG_DOUBLE_COMPLEX OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_cxx_ldblcplex)

/* New datatypes from the 3.0 standard */
#define MPI_COUNT                 OMPI_PREDEFINED_GLOBAL(MPI_Datatype, ompi_mpi_count)

#define MPI_ERRORS_ARE_FATAL OMPI_PREDEFINED_GLOBAL(MPI_Errhandler, ompi_mpi_errors_are_fatal)
#define MPI_ERRORS_ABORT OMPI_PREDEFINED_GLOBAL(MPI_Errhandler, ompi_mpi_errors_abort)
#define MPI_ERRORS_RETURN OMPI_PREDEFINED_GLOBAL(MPI_Errhandler, ompi_mpi_errors_return)

/* Typeclass definition for MPI_Type_match_size */
#define MPI_TYPECLASS_INTEGER    1
#define MPI_TYPECLASS_REAL       2
#define MPI_TYPECLASS_COMPLEX    3

/* Aint helper macros (MPI-3.1) */
#define MPI_Aint_add(base, disp) ((MPI_Aint) ((char *) (base) + (disp)))
#define MPI_Aint_diff(addr1, addr2) ((MPI_Aint) ((char *) (addr1) - (char *) (addr2)))
#define PMPI_Aint_add(base, disp) MPI_Aint_add(base, disp)
#define PMPI_Aint_diff(addr1, addr2) MPI_Aint_diff(addr1, addr2)

/*
 * Predefined info keys
 */
#define MPI_INFO_KEY_SESSION_PSET_SIZE  "mpi_size"

/*
 * MPI API
 */

OMPI_DECLSPEC  int MPI_Abort(MPI_Comm comm, int errorcode);
OMPI_DECLSPEC  int MPI_Accumulate(const void *origin_addr, int origin_count, MPI_Datatype origin_datatype,
                                  int target_rank, MPI_Aint target_disp, int target_count,
                                  MPI_Datatype target_datatype, MPI_Op op, MPI_Win win);
OMPI_DECLSPEC  int MPI_Add_error_class(int *errorclass);
OMPI_DECLSPEC  int MPI_Add_error_code(int errorclass, int *errorcode);
OMPI_DECLSPEC  int MPI_Add_error_string(int errorcode, const char *string);
OMPI_DECLSPEC  int MPI_Allgather(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                 void *recvbuf, int recvcount,
                                 MPI_Datatype recvtype, MPI_Comm comm);
OMPI_DECLSPEC  int MPI_Iallgather(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                  void *recvbuf, int recvcount,
                                  MPI_Datatype recvtype, MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Allgather_init(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                      void *recvbuf, int recvcount, MPI_Datatype recvtype,
                                      MPI_Comm comm, MPI_Info info, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Allgatherv(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                  void *recvbuf, const int recvcounts[], const int displs[], MPI_Datatype recvtype,
                                  MPI_Comm comm);
OMPI_DECLSPEC  int MPI_Iallgatherv(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                   void *recvbuf, const int recvcounts[], const int displs[], MPI_Datatype recvtype,
                                   MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Allgatherv_init(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                       void *recvbuf, const int recvcounts[], const int displs[], MPI_Datatype recvtype,
                                       MPI_Comm comm, MPI_Info info, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Alloc_mem(MPI_Aint size, MPI_Info info,
                                 void *baseptr);
OMPI_DECLSPEC  int MPI_Allreduce(const void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype,
                                 MPI_Op op, MPI_Comm comm);
OMPI_DECLSPEC  int MPI_Iallreduce(const void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype,
                                  MPI_Op op, MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Allreduce_init(const void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype,
                                      MPI_Op op, MPI_Comm comm, MPI_Info info, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Alltoall(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                void *recvbuf, int recvcount,
                                MPI_Datatype recvtype, MPI_Comm comm);
OMPI_DECLSPEC  int MPI_Ialltoall(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                 void *recvbuf, int recvcount, MPI_Datatype recvtype,
                                 MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Alltoall_init(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                 void *recvbuf, int recvcount, MPI_Datatype recvtype,
                                 MPI_Comm comm, MPI_Info info, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Alltoallv(const void *sendbuf, const int sendcounts[], const int sdispls[], MPI_Datatype sendtype,
                                 void *recvbuf, const int recvcounts[], const int rdispls[], MPI_Datatype recvtype,
                                 MPI_Comm comm);
OMPI_DECLSPEC  int MPI_Ialltoallv(const void *sendbuf, const int sendcounts[], const int sdispls[], MPI_Datatype sendtype,
                                  void *recvbuf, const int recvcounts[], const int rdispls[], MPI_Datatype recvtype,
                                  MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Alltoallv_init(const void *sendbuf, const int sendcounts[], const int sdispls[], MPI_Datatype sendtype,
                                      void *recvbuf, const int recvcounts[], const int rdispls[], MPI_Datatype recvtype,
                                      MPI_Comm comm, MPI_Info info, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Alltoallw(const void *sendbuf, const int sendcounts[], const int sdispls[], const MPI_Datatype sendtypes[],
                                 void *recvbuf, const int recvcounts[], const int rdispls[], const MPI_Datatype recvtypes[],
                                 MPI_Comm comm);
OMPI_DECLSPEC  int MPI_Ialltoallw(const void *sendbuf, const int sendcounts[], const int sdispls[], const MPI_Datatype sendtypes[],
                                  void *recvbuf, const int recvcounts[], const int rdispls[], const MPI_Datatype recvtypes[],
                                  MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Alltoallw_init(const void *sendbuf, const int sendcounts[], const int sdispls[], const MPI_Datatype sendtypes[],
                                      void *recvbuf, const int recvcounts[], const int rdispls[], const MPI_Datatype recvtypes[],
                                      MPI_Comm comm, MPI_Info info, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Barrier(MPI_Comm comm);
OMPI_DECLSPEC  int MPI_Ibarrier(MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Barrier_init(MPI_Comm comm, MPI_Info info, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Bcast(void *buffer, int count, MPI_Datatype datatype,
                             int root, MPI_Comm comm);
OMPI_DECLSPEC  int MPI_Ibcast(void *buffer, int count, MPI_Datatype datatype,
                              int root, MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Bcast_init(void *buffer, int count, MPI_Datatype datatype,
                                  int root, MPI_Comm comm, MPI_Info info, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Bsend(const void *buf, int count, MPI_Datatype datatype,
                             int dest, int tag, MPI_Comm comm);
OMPI_DECLSPEC  int MPI_Bsend_init(const void *buf, int count, MPI_Datatype datatype,
                                  int dest, int tag, MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Buffer_attach(void *buffer, int size);
OMPI_DECLSPEC  int MPI_Buffer_detach(void *buffer, int *size);
OMPI_DECLSPEC  int MPI_Cancel(MPI_Request *request);
OMPI_DECLSPEC  int MPI_Cart_coords(MPI_Comm comm, int rank, int maxdims, int coords[]);
OMPI_DECLSPEC  int MPI_Cart_create(MPI_Comm old_comm, int ndims, const int dims[],
                                   const int periods[], int reorder, MPI_Comm *comm_cart);
OMPI_DECLSPEC  int MPI_Cart_get(MPI_Comm comm, int maxdims, int dims[],
                                int periods[], int coords[]);
OMPI_DECLSPEC  int MPI_Cart_map(MPI_Comm comm, int ndims, const int dims[],
                                const int periods[], int *newrank);
OMPI_DECLSPEC  int MPI_Cart_rank(MPI_Comm comm, const int coords[], int *rank);
OMPI_DECLSPEC  int MPI_Cart_shift(MPI_Comm comm, int direction, int disp,
                                  int *rank_source, int *rank_dest);
OMPI_DECLSPEC  int MPI_Cart_sub(MPI_Comm comm, const int remain_dims[], MPI_Comm *new_comm);
OMPI_DECLSPEC  int MPI_Cartdim_get(MPI_Comm comm, int *ndims);
OMPI_DECLSPEC  int MPI_Close_port(const char *port_name);
OMPI_DECLSPEC  int MPI_Comm_accept(const char *port_name, MPI_Info info, int root,
                                   MPI_Comm comm, MPI_Comm *newcomm);
OMPI_DECLSPEC  MPI_Fint MPI_Comm_c2f(MPI_Comm comm);
OMPI_DECLSPEC  int MPI_Comm_call_errhandler(MPI_Comm comm, int errorcode);
OMPI_DECLSPEC  int MPI_Comm_compare(MPI_Comm comm1, MPI_Comm comm2, int *result);
OMPI_DECLSPEC  int MPI_Comm_connect(const char *port_name, MPI_Info info, int root,
                                    MPI_Comm comm, MPI_Comm *newcomm);
OMPI_DECLSPEC  int MPI_Comm_create_errhandler(MPI_Comm_errhandler_function *function,
                                              MPI_Errhandler *errhandler);
OMPI_DECLSPEC  int MPI_Comm_create_keyval(MPI_Comm_copy_attr_function *comm_copy_attr_fn,
                                          MPI_Comm_delete_attr_function *comm_delete_attr_fn,
                                          int *comm_keyval, void *extra_state);
OMPI_DECLSPEC  int MPI_Comm_create_group(MPI_Comm comm, MPI_Group group, int tag, MPI_Comm *newcomm);
OMPI_DECLSPEC  int MPI_Comm_create_from_group(MPI_Group group, const char *tag, MPI_Info info,
					      MPI_Errhandler errhandler, MPI_Comm *newcomm);
OMPI_DECLSPEC  int MPI_Comm_create(MPI_Comm comm, MPI_Group group, MPI_Comm *newcomm);
OMPI_DECLSPEC  int MPI_Comm_delete_attr(MPI_Comm comm, int comm_keyval);
OMPI_DECLSPEC  int MPI_Comm_disconnect(MPI_Comm *comm);
OMPI_DECLSPEC  int MPI_Comm_dup(MPI_Comm comm, MPI_Comm *newcomm);
OMPI_DECLSPEC  int MPI_Comm_idup(MPI_Comm comm, MPI_Comm *newcomm, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Comm_dup_with_info(MPI_Comm comm, MPI_Info info, MPI_Comm *newcomm);
OMPI_DECLSPEC  int MPI_Comm_idup_with_info(MPI_Comm comm, MPI_Info info, MPI_Comm *newcomm,
                                           MPI_Request *request);
OMPI_DECLSPEC  MPI_Comm MPI_Comm_f2c(MPI_Fint comm);
OMPI_DECLSPEC  int MPI_Comm_free_keyval(int *comm_keyval);
OMPI_DECLSPEC  int MPI_Comm_free(MPI_Comm *comm);
OMPI_DECLSPEC  int MPI_Comm_get_attr(MPI_Comm comm, int comm_keyval,
                                     void *attribute_val, int *flag);
OMPI_DECLSPEC  int MPI_Dist_graph_create(MPI_Comm comm_old, int n, const int nodes[],
                                         const int degrees[], const int targets[],
                                         const int weights[], MPI_Info info,
                                         int reorder, MPI_Comm * newcomm);
OMPI_DECLSPEC  int MPI_Dist_graph_create_adjacent(MPI_Comm comm_old,
                                                  int indegree, const int sources[],
                                                  const int sourceweights[],
                                                  int outdegree,
                                                  const int destinations[],
                                                  const int destweights[],
                                                  MPI_Info info, int reorder,
                                                  MPI_Comm *comm_dist_graph);
OMPI_DECLSPEC int MPI_Dist_graph_neighbors(MPI_Comm comm, int maxindegree,
                                           int sources[], int sourceweights[],
                                           int maxoutdegree,
                                           int destinations[],
                                           int destweights[]);
OMPI_DECLSPEC  int MPI_Dist_graph_neighbors_count(MPI_Comm comm,
                                                  int *inneighbors,
                                                  int *outneighbors,
                                                  int *weighted);
OMPI_DECLSPEC  int MPI_Comm_get_errhandler(MPI_Comm comm, MPI_Errhandler *erhandler);
OMPI_DECLSPEC  int MPI_Comm_get_info(MPI_Comm comm, MPI_Info *info_used);
OMPI_DECLSPEC  int MPI_Comm_get_name(MPI_Comm comm, char *comm_name, int *resultlen);
OMPI_DECLSPEC  int MPI_Comm_get_parent(MPI_Comm *parent);
OMPI_DECLSPEC  int MPI_Comm_group(MPI_Comm comm, MPI_Group *group);
OMPI_DECLSPEC  int MPI_Comm_join(int fd, MPI_Comm *intercomm);
OMPI_DECLSPEC  int MPI_Comm_rank(MPI_Comm comm, int *rank);
OMPI_DECLSPEC  int MPI_Comm_remote_group(MPI_Comm comm, MPI_Group *group);
OMPI_DECLSPEC  int MPI_Comm_remote_size(MPI_Comm comm, int *size);
OMPI_DECLSPEC  int MPI_Comm_set_attr(MPI_Comm comm, int comm_keyval, void *attribute_val);
OMPI_DECLSPEC  int MPI_Comm_set_errhandler(MPI_Comm comm, MPI_Errhandler errhandler);
OMPI_DECLSPEC  int MPI_Comm_set_info(MPI_Comm comm, MPI_Info info);
OMPI_DECLSPEC  int MPI_Comm_set_name(MPI_Comm comm, const char *comm_name);
OMPI_DECLSPEC  int MPI_Comm_size(MPI_Comm comm, int *size);
OMPI_DECLSPEC  int MPI_Comm_spawn(const char *command, char *argv[], int maxprocs, MPI_Info info,
                                  int root, MPI_Comm comm, MPI_Comm *intercomm,
                                  int array_of_errcodes[]);
OMPI_DECLSPEC  int MPI_Comm_spawn_multiple(int count, char *array_of_commands[], char **array_of_argv[],
                                           const int array_of_maxprocs[], const MPI_Info array_of_info[],
                                           int root, MPI_Comm comm, MPI_Comm *intercomm,
                                           int array_of_errcodes[]);
OMPI_DECLSPEC  int MPI_Comm_split(MPI_Comm comm, int color, int key, MPI_Comm *newcomm);
OMPI_DECLSPEC  int MPI_Comm_split_type(MPI_Comm comm, int split_type, int key, MPI_Info info, MPI_Comm *newcomm);
OMPI_DECLSPEC  int MPI_Comm_test_inter(MPI_Comm comm, int *flag);
OMPI_DECLSPEC  int MPI_Compare_and_swap(const void *origin_addr, const void *compare_addr,
                                        void *result_addr, MPI_Datatype datatype, int target_rank,
                                        MPI_Aint target_disp, MPI_Win win);
OMPI_DECLSPEC  int MPI_Dims_create(int nnodes, int ndims, int dims[]);
OMPI_DECLSPEC  MPI_Fint MPI_Errhandler_c2f(MPI_Errhandler errhandler);
OMPI_DECLSPEC  MPI_Errhandler MPI_Errhandler_f2c(MPI_Fint errhandler);
OMPI_DECLSPEC  int MPI_Errhandler_free(MPI_Errhandler *errhandler);
OMPI_DECLSPEC  int MPI_Error_class(int errorcode, int *errorclass);
OMPI_DECLSPEC  int MPI_Error_string(int errorcode, char *string, int *resultlen);
OMPI_DECLSPEC  int MPI_Exscan(const void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype,
                              MPI_Op op, MPI_Comm comm);
OMPI_DECLSPEC  int MPI_Iexscan(const void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype,
                               MPI_Op op, MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Exscan_init(const void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype,
                                   MPI_Op op, MPI_Comm comm, MPI_Info info, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Fetch_and_op(const void *origin_addr, void *result_addr, MPI_Datatype datatype,
                                    int target_rank, MPI_Aint target_disp, MPI_Op op, MPI_Win win);
OMPI_DECLSPEC  MPI_Fint MPI_File_c2f(MPI_File file);
OMPI_DECLSPEC  MPI_File MPI_File_f2c(MPI_Fint file);
OMPI_DECLSPEC  int MPI_File_call_errhandler(MPI_File fh, int errorcode);
OMPI_DECLSPEC  int MPI_File_create_errhandler(MPI_File_errhandler_function *function,
                                              MPI_Errhandler *errhandler);
OMPI_DECLSPEC  int MPI_File_set_errhandler( MPI_File file, MPI_Errhandler errhandler);
OMPI_DECLSPEC  int MPI_File_get_errhandler( MPI_File file, MPI_Errhandler *errhandler);
OMPI_DECLSPEC  int MPI_File_open(MPI_Comm comm, const char *filename, int amode,
                                 MPI_Info info, MPI_File *fh);
OMPI_DECLSPEC  int MPI_File_close(MPI_File *fh);
OMPI_DECLSPEC  int MPI_File_delete(const char *filename, MPI_Info info);
OMPI_DECLSPEC  int MPI_File_set_size(MPI_File fh, MPI_Offset size);
OMPI_DECLSPEC  int MPI_File_preallocate(MPI_File fh, MPI_Offset size);
OMPI_DECLSPEC  int MPI_File_get_size(MPI_File fh, MPI_Offset *size);
OMPI_DECLSPEC  int MPI_File_get_group(MPI_File fh, MPI_Group *group);
OMPI_DECLSPEC  int MPI_File_get_amode(MPI_File fh, int *amode);
OMPI_DECLSPEC  int MPI_File_set_info(MPI_File fh, MPI_Info info);
OMPI_DECLSPEC  int MPI_File_get_info(MPI_File fh, MPI_Info *info_used);
OMPI_DECLSPEC  int MPI_File_set_view(MPI_File fh, MPI_Offset disp, MPI_Datatype etype,
                                     MPI_Datatype filetype, const char *datarep, MPI_Info info);
OMPI_DECLSPEC  int MPI_File_get_view(MPI_File fh, MPI_Offset *disp,
                                     MPI_Datatype *etype,
                                     MPI_Datatype *filetype, char *datarep);
OMPI_DECLSPEC  int MPI_File_read_at(MPI_File fh, MPI_Offset offset, void *buf,
                                    int count, MPI_Datatype datatype, MPI_Status *status);
OMPI_DECLSPEC  int MPI_File_read_at_all(MPI_File fh, MPI_Offset offset, void *buf,
                                        int count, MPI_Datatype datatype, MPI_Status *status);
OMPI_DECLSPEC  int MPI_File_write_at(MPI_File fh, MPI_Offset offset, const void *buf,
                                     int count, MPI_Datatype datatype, MPI_Status *status);
OMPI_DECLSPEC  int MPI_File_write_at_all(MPI_File fh, MPI_Offset offset, const void *buf,
                                         int count, MPI_Datatype datatype, MPI_Status *status);
OMPI_DECLSPEC  int MPI_File_iread_at(MPI_File fh, MPI_Offset offset, void *buf,
                                     int count, MPI_Datatype datatype, MPI_Request *request);
OMPI_DECLSPEC  int MPI_File_iwrite_at(MPI_File fh, MPI_Offset offset, const void *buf,
                                      int count, MPI_Datatype datatype, MPI_Request *request);
OMPI_DECLSPEC  int MPI_File_iread_at_all(MPI_File fh, MPI_Offset offset, void *buf,
                                     int count, MPI_Datatype datatype, MPI_Request *request);
OMPI_DECLSPEC  int MPI_File_iwrite_at_all(MPI_File fh, MPI_Offset offset, const void *buf,
                                      int count, MPI_Datatype datatype, MPI_Request *request);
OMPI_DECLSPEC  int MPI_File_read(MPI_File fh, void *buf, int count,
                                 MPI_Datatype datatype, MPI_Status *status);
OMPI_DECLSPEC  int MPI_File_read_all(MPI_File fh, void *buf, int count,
                                     MPI_Datatype datatype, MPI_Status *status);
OMPI_DECLSPEC  int MPI_File_write(MPI_File fh, const void *buf, int count,
                                  MPI_Datatype datatype, MPI_Status *status);
OMPI_DECLSPEC  int MPI_File_write_all(MPI_File fh, const void *buf, int count,
                                      MPI_Datatype datatype, MPI_Status *status);
OMPI_DECLSPEC  int MPI_File_iread(MPI_File fh, void *buf, int count,
                                  MPI_Datatype datatype, MPI_Request *request);
OMPI_DECLSPEC  int MPI_File_iwrite(MPI_File fh, const void *buf, int count,
                                   MPI_Datatype datatype, MPI_Request *request);
OMPI_DECLSPEC  int MPI_File_iread_all(MPI_File fh, void *buf, int count,
                                  MPI_Datatype datatype, MPI_Request *request);
OMPI_DECLSPEC  int MPI_File_iwrite_all(MPI_File fh, const void *buf, int count,
                                   MPI_Datatype datatype, MPI_Request *request);
OMPI_DECLSPEC  int MPI_File_seek(MPI_File fh, MPI_Offset offset, int whence);
OMPI_DECLSPEC  int MPI_File_get_position(MPI_File fh, MPI_Offset *offset);
OMPI_DECLSPEC  int MPI_File_get_byte_offset(MPI_File fh, MPI_Offset offset,
                                            MPI_Offset *disp);
OMPI_DECLSPEC  int MPI_File_read_shared(MPI_File fh, void *buf, int count,
                                        MPI_Datatype datatype, MPI_Status *status);
OMPI_DECLSPEC  int MPI_File_write_shared(MPI_File fh, const void *buf, int count,
                                         MPI_Datatype datatype, MPI_Status *status);
OMPI_DECLSPEC  int MPI_File_iread_shared(MPI_File fh, void *buf, int count,
                                         MPI_Datatype datatype, MPI_Request *request);
OMPI_DECLSPEC  int MPI_File_iwrite_shared(MPI_File fh, const void *buf, int count,
                                          MPI_Datatype datatype, MPI_Request *request);
OMPI_DECLSPEC  int MPI_File_read_ordered(MPI_File fh, void *buf, int count,
                                         MPI_Datatype datatype, MPI_Status *status);
OMPI_DECLSPEC  int MPI_File_write_ordered(MPI_File fh, const void *buf, int count,
                                          MPI_Datatype datatype, MPI_Status *status);
OMPI_DECLSPEC  int MPI_File_seek_shared(MPI_File fh, MPI_Offset offset, int whence);
OMPI_DECLSPEC  int MPI_File_get_position_shared(MPI_File fh, MPI_Offset *offset);
OMPI_DECLSPEC  int MPI_File_read_at_all_begin(MPI_File fh, MPI_Offset offset, void *buf,
                                              int count, MPI_Datatype datatype);
OMPI_DECLSPEC  int MPI_File_read_at_all_end(MPI_File fh, void *buf, MPI_Status *status);
OMPI_DECLSPEC  int MPI_File_write_at_all_begin(MPI_File fh, MPI_Offset offset, const void *buf,
                                               int count, MPI_Datatype datatype);
OMPI_DECLSPEC  int MPI_File_write_at_all_end(MPI_File fh, const void *buf, MPI_Status *status);
OMPI_DECLSPEC  int MPI_File_read_all_begin(MPI_File fh, void *buf, int count,
                                           MPI_Datatype datatype);
OMPI_DECLSPEC  int MPI_File_read_all_end(MPI_File fh, void *buf, MPI_Status *status);
OMPI_DECLSPEC  int MPI_File_write_all_begin(MPI_File fh, const void *buf, int count,
                                            MPI_Datatype datatype);
OMPI_DECLSPEC  int MPI_File_write_all_end(MPI_File fh, const void *buf, MPI_Status *status);
OMPI_DECLSPEC  int MPI_File_read_ordered_begin(MPI_File fh, void *buf, int count,
                                               MPI_Datatype datatype);
OMPI_DECLSPEC  int MPI_File_read_ordered_end(MPI_File fh, void *buf, MPI_Status *status);
OMPI_DECLSPEC  int MPI_File_write_ordered_begin(MPI_File fh, const void *buf, int count,
                                                MPI_Datatype datatype);
OMPI_DECLSPEC  int MPI_File_write_ordered_end(MPI_File fh, const void *buf, MPI_Status *status);
OMPI_DECLSPEC  int MPI_File_get_type_extent(MPI_File fh, MPI_Datatype datatype,
                                            MPI_Aint *extent);
OMPI_DECLSPEC  int MPI_File_set_atomicity(MPI_File fh, int flag);
OMPI_DECLSPEC  int MPI_File_get_atomicity(MPI_File fh, int *flag);
OMPI_DECLSPEC  int MPI_File_sync(MPI_File fh);
OMPI_DECLSPEC  int MPI_Finalize(void);
OMPI_DECLSPEC  int MPI_Finalized(int *flag);
OMPI_DECLSPEC  int MPI_Free_mem(void *base);
OMPI_DECLSPEC  int MPI_Gather(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                              void *recvbuf, int recvcount, MPI_Datatype recvtype,
                              int root, MPI_Comm comm);
OMPI_DECLSPEC  int MPI_Igather(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                               void *recvbuf, int recvcount, MPI_Datatype recvtype,
                               int root, MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Gather_init(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                   void *recvbuf, int recvcount, MPI_Datatype recvtype,
                                   int root, MPI_Comm comm, MPI_Info info, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Gatherv(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                               void *recvbuf, const int recvcounts[], const int displs[],
                               MPI_Datatype recvtype, int root, MPI_Comm comm);
OMPI_DECLSPEC  int MPI_Igatherv(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                void *recvbuf, const int recvcounts[], const int displs[], MPI_Datatype recvtype,
                                int root, MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Gatherv_init(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                    void *recvbuf, const int recvcounts[], const int displs[], MPI_Datatype recvtype,
                                    int root, MPI_Comm comm, MPI_Info info, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Get_address(const void *location, MPI_Aint *address);
OMPI_DECLSPEC  int MPI_Get_count(const MPI_Status *status, MPI_Datatype datatype, int *count);
OMPI_DECLSPEC  int MPI_Get_elements(const MPI_Status *status, MPI_Datatype datatype, int *count);
OMPI_DECLSPEC  int MPI_Get_elements_x(const MPI_Status *status, MPI_Datatype datatype, MPI_Count *count);
OMPI_DECLSPEC  int MPI_Get(void *origin_addr, int origin_count,
                           MPI_Datatype origin_datatype, int target_rank,
                           MPI_Aint target_disp, int target_count,
                           MPI_Datatype target_datatype, MPI_Win win);
OMPI_DECLSPEC  int MPI_Get_accumulate(const void *origin_addr, int origin_count, MPI_Datatype origin_datatype,
                                      void *result_addr, int result_count, MPI_Datatype result_datatype,
                                      int target_rank, MPI_Aint target_disp, int target_count,
                                      MPI_Datatype target_datatype, MPI_Op op, MPI_Win win);
OMPI_DECLSPEC  int MPI_Get_library_version(char *version, int *resultlen);
OMPI_DECLSPEC  int MPI_Get_processor_name(char *name, int *resultlen);
OMPI_DECLSPEC  int MPI_Get_version(int *version, int *subversion);
OMPI_DECLSPEC  int MPI_Graph_create(MPI_Comm comm_old, int nnodes, const int index[],
                                    const int edges[], int reorder, MPI_Comm *comm_graph);
OMPI_DECLSPEC  int MPI_Graph_get(MPI_Comm comm, int maxindex, int maxedges,
                                 int index[], int edges[]);
OMPI_DECLSPEC  int MPI_Graph_map(MPI_Comm comm, int nnodes, const int index[], const int edges[],
                                 int *newrank);
OMPI_DECLSPEC  int MPI_Graph_neighbors_count(MPI_Comm comm, int rank, int *nneighbors);
OMPI_DECLSPEC  int MPI_Graph_neighbors(MPI_Comm comm, int rank, int maxneighbors,
                                       int neighbors[]);
OMPI_DECLSPEC  int MPI_Graphdims_get(MPI_Comm comm, int *nnodes, int *nedges);
OMPI_DECLSPEC  int MPI_Grequest_complete(MPI_Request request);
OMPI_DECLSPEC  int MPI_Grequest_start(MPI_Grequest_query_function *query_fn,
                                      MPI_Grequest_free_function *free_fn,
                                      MPI_Grequest_cancel_function *cancel_fn,
                                      void *extra_state, MPI_Request *request);
OMPI_DECLSPEC  MPI_Fint MPI_Group_c2f(MPI_Group group);
OMPI_DECLSPEC  int MPI_Group_compare(MPI_Group group1, MPI_Group group2, int *result);
OMPI_DECLSPEC  int MPI_Group_difference(MPI_Group group1, MPI_Group group2,
                                        MPI_Group *newgroup);
OMPI_DECLSPEC  int MPI_Group_excl(MPI_Group group, int n, const int ranks[],
                                  MPI_Group *newgroup);
OMPI_DECLSPEC  MPI_Group MPI_Group_f2c(MPI_Fint group);
OMPI_DECLSPEC  int MPI_Group_free(MPI_Group *group);
OMPI_DECLSPEC  int MPI_Group_from_session_pset (MPI_Session session, const char *pset_name, MPI_Group *newgroup);
OMPI_DECLSPEC  int MPI_Group_incl(MPI_Group group, int n, const int ranks[],
                                  MPI_Group *newgroup);
OMPI_DECLSPEC  int MPI_Group_intersection(MPI_Group group1, MPI_Group group2,
                                          MPI_Group *newgroup);
OMPI_DECLSPEC  int MPI_Group_range_excl(MPI_Group group, int n, int ranges[][3],
                                        MPI_Group *newgroup);
OMPI_DECLSPEC  int MPI_Group_range_incl(MPI_Group group, int n, int ranges[][3],
                                        MPI_Group *newgroup);
OMPI_DECLSPEC  int MPI_Group_rank(MPI_Group group, int *rank);
OMPI_DECLSPEC  int MPI_Group_size(MPI_Group group, int *size);
OMPI_DECLSPEC  int MPI_Group_translate_ranks(MPI_Group group1, int n, const int ranks1[],
                                             MPI_Group group2, int ranks2[]);
OMPI_DECLSPEC  int MPI_Group_union(MPI_Group group1, MPI_Group group2,
                                   MPI_Group *newgroup);
OMPI_DECLSPEC  int MPI_Ibsend(const void *buf, int count, MPI_Datatype datatype, int dest,
                              int tag, MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Improbe(int source, int tag, MPI_Comm comm,
                               int *flag, MPI_Message *message,
                               MPI_Status *status);
OMPI_DECLSPEC  int MPI_Imrecv(void *buf, int count, MPI_Datatype type,
                              MPI_Message *message, MPI_Request *request);
OMPI_DECLSPEC  MPI_Fint MPI_Info_c2f(MPI_Info info);
OMPI_DECLSPEC  int MPI_Info_create(MPI_Info *info);
OMPI_DECLSPEC  int MPI_Info_create_env(int argc, char *argv[], MPI_Info *info);
OMPI_DECLSPEC  int MPI_Info_delete(MPI_Info info, const char *key);
OMPI_DECLSPEC  int MPI_Info_dup(MPI_Info info, MPI_Info *newinfo);
OMPI_DECLSPEC  MPI_Info MPI_Info_f2c(MPI_Fint info);
OMPI_DECLSPEC  int MPI_Info_free(MPI_Info *info);
#if MPI_VERSION < 4
OMPI_DECLSPEC  int MPI_Info_get(MPI_Info info, const char *key, int valuelen,
                                char *value, int *flag);
#endif
OMPI_DECLSPEC  int MPI_Info_get_nkeys(MPI_Info info, int *nkeys);
OMPI_DECLSPEC  int MPI_Info_get_nthkey(MPI_Info info, int n, char *key);
OMPI_DECLSPEC  int MPI_Info_get_string(MPI_Info info, const char *key, int *buflen,
                                       char *value, int *flag);
#if MPI_VERSION < 4
OMPI_DECLSPEC  int MPI_Info_get_valuelen(MPI_Info info, const char *key, int *valuelen,
                                         int *flag);
#endif
OMPI_DECLSPEC  int MPI_Info_set(MPI_Info info, const char *key, const char *value);
OMPI_DECLSPEC  int MPI_Init(int *argc, char ***argv);
OMPI_DECLSPEC  int MPI_Initialized(int *flag);
OMPI_DECLSPEC  int MPI_Init_thread(int *argc, char ***argv, int required,
                                   int *provided);
OMPI_DECLSPEC  int MPI_Intercomm_create(MPI_Comm local_comm, int local_leader,
                                        MPI_Comm bridge_comm, int remote_leader,
                                        int tag, MPI_Comm *newintercomm);
OMPI_DECLSPEC  int MPI_Intercomm_create_from_groups (MPI_Group local_group, int local_leader, MPI_Group remote_group,
                                                     int remote_leader, const char *tag, MPI_Info info, MPI_Errhandler errhandler,
                                                     MPI_Comm *newintercomm);
OMPI_DECLSPEC  int MPI_Intercomm_merge(MPI_Comm intercomm, int high,
                                       MPI_Comm *newintracomm);
OMPI_DECLSPEC  int MPI_Iprobe(int source, int tag, MPI_Comm comm, int *flag,
                              MPI_Status *status);
OMPI_DECLSPEC  int MPI_Irecv(void *buf, int count, MPI_Datatype datatype, int source,
                             int tag, MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Irsend(const void *buf, int count, MPI_Datatype datatype, int dest,
                              int tag, MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Isend(const void *buf, int count, MPI_Datatype datatype, int dest,
                             int tag, MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Isendrecv(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                 int dest, int sendtag, void *recvbuf, int recvcount,
                                 MPI_Datatype recvtype, int source, int recvtag,
                                 MPI_Comm comm,  MPI_Request *request);
OMPI_DECLSPEC  int MPI_Isendrecv_replace(void * buf, int count, MPI_Datatype datatype,
                                         int dest, int sendtag, int source, int recvtag,
                                         MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Issend(const void *buf, int count, MPI_Datatype datatype, int dest,
                              int tag, MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Is_thread_main(int *flag);
OMPI_DECLSPEC  int MPI_Lookup_name(const char *service_name, MPI_Info info, char *port_name);
OMPI_DECLSPEC  MPI_Fint MPI_Message_c2f(MPI_Message message);
OMPI_DECLSPEC  MPI_Message MPI_Message_f2c(MPI_Fint message);
OMPI_DECLSPEC  int MPI_Mprobe(int source, int tag, MPI_Comm comm,
                               MPI_Message *message,
                               MPI_Status *status);
OMPI_DECLSPEC  int MPI_Mrecv(void *buf, int count, MPI_Datatype type,
                             MPI_Message *message, MPI_Status *status);
OMPI_DECLSPEC  int MPI_Neighbor_allgather(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                          void *recvbuf, int recvcount, MPI_Datatype recvtype,
                                          MPI_Comm comm);
OMPI_DECLSPEC  int MPI_Ineighbor_allgather(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                           void *recvbuf, int recvcount, MPI_Datatype recvtype,
                                           MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Neighbor_allgatherv(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                           void *recvbuf, const int recvcounts[], const int displs[],
                                           MPI_Datatype recvtype, MPI_Comm comm);
OMPI_DECLSPEC  int MPI_Neighbor_allgather_init(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                               void *recvbuf, int recvcount, MPI_Datatype recvtype,
                                               MPI_Comm comm, MPI_Info info, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Ineighbor_allgatherv(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                            void *recvbuf, const int recvcounts[], const int displs[], MPI_Datatype recvtype,
                                            MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Neighbor_allgatherv_init(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                                void *recvbuf, const int recvcounts[], const int displs[], MPI_Datatype recvtype,
                                                MPI_Comm comm, MPI_Info info, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Neighbor_alltoall(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                         void *recvbuf, int recvcount, MPI_Datatype recvtype,
                                         MPI_Comm comm);
OMPI_DECLSPEC  int MPI_Ineighbor_alltoall(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                          void *recvbuf, int recvcount, MPI_Datatype recvtype,
                                          MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Neighbor_alltoall_init(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                              void *recvbuf, int recvcount, MPI_Datatype recvtype,
                                              MPI_Comm comm, MPI_Info info, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Neighbor_alltoallv(const void *sendbuf, const int sendcounts[], const int sdispls[],  MPI_Datatype sendtype,
                                          void *recvbuf, const int recvcounts[], const int rdispls[], MPI_Datatype recvtype,
                                          MPI_Comm comm);
OMPI_DECLSPEC  int MPI_Ineighbor_alltoallv(const void *sendbuf, const int sendcounts[], const int sdispls[], MPI_Datatype sendtype,
                                           void *recvbuf, const int recvcounts[], const int rdispls[], MPI_Datatype recvtype,
                                           MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Neighbor_alltoallv_init(const void *sendbuf, const int sendcounts[], const int sdispls[], MPI_Datatype sendtype,
                                               void *recvbuf, const int recvcounts[], const int rdispls[], MPI_Datatype recvtype,
                                               MPI_Comm comm, MPI_Info info, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Neighbor_alltoallw(const void *sendbuf, const int sendcounts[], const MPI_Aint sdispls[], const MPI_Datatype sendtypes[],
                                          void *recvbuf, const int recvcounts[], const MPI_Aint rdispls[], const MPI_Datatype recvtypes[],
                                          MPI_Comm comm);
OMPI_DECLSPEC  int MPI_Ineighbor_alltoallw(const void *sendbuf, const int sendcounts[], const MPI_Aint sdispls[], const MPI_Datatype sendtypes[],
                                           void *recvbuf, const int recvcounts[], const MPI_Aint rdispls[], const MPI_Datatype recvtypes[],
                                           MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Neighbor_alltoallw_init(const void *sendbuf, const int sendcounts[], const MPI_Aint sdispls[], const MPI_Datatype sendtypes[],
                                               void *recvbuf, const int recvcounts[], const MPI_Aint rdispls[], const MPI_Datatype recvtypes[],
                                               MPI_Comm comm, MPI_Info info, MPI_Request *request);
OMPI_DECLSPEC  MPI_Fint MPI_Op_c2f(MPI_Op op);
OMPI_DECLSPEC  int MPI_Op_commutative(MPI_Op op, int *commute);
OMPI_DECLSPEC  int MPI_Op_create(MPI_User_function *function, int commute, MPI_Op *op);
OMPI_DECLSPEC  int MPI_Open_port(MPI_Info info, char *port_name);
OMPI_DECLSPEC  MPI_Op MPI_Op_f2c(MPI_Fint op);
OMPI_DECLSPEC  int MPI_Op_free(MPI_Op *op);
OMPI_DECLSPEC  int MPI_Pack_external(const char datarep[], const void *inbuf, int incount,
                                     MPI_Datatype datatype, void *outbuf,
                                     MPI_Aint outsize, MPI_Aint *position);
OMPI_DECLSPEC  int MPI_Pack_external_size(const char datarep[], int incount,
                                          MPI_Datatype datatype, MPI_Aint *size);
OMPI_DECLSPEC  int MPI_Pack(const void *inbuf, int incount, MPI_Datatype datatype,
                            void *outbuf, int outsize, int *position, MPI_Comm comm);
OMPI_DECLSPEC  int MPI_Pack_size(int incount, MPI_Datatype datatype, MPI_Comm comm,
                                 int *size);
OMPI_DECLSPEC  int MPI_Parrived(MPI_Request request, int partition, int *flag);
OMPI_DECLSPEC  int MPI_Pcontrol(const int level, ...);
OMPI_DECLSPEC  int MPI_Pready(int partitions, MPI_Request request);
OMPI_DECLSPEC  int MPI_Pready_range(int partition_low, int partition_high,
                                    MPI_Request request);
OMPI_DECLSPEC  int MPI_Pready_list(int length, int partition_list[], MPI_Request request);
OMPI_DECLSPEC  int MPI_Precv_init(void* buf, int partitions, MPI_Count count,
                                  MPI_Datatype datatype, int source, int tag, MPI_Comm comm,
                                  MPI_Info info, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Probe(int source, int tag, MPI_Comm comm, MPI_Status *status);
OMPI_DECLSPEC  int MPI_Psend_init(const void* buf, int partitions, MPI_Count count,
                                  MPI_Datatype datatype, int dest, int tag, MPI_Comm comm,
                                  MPI_Info info, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Publish_name(const char *service_name, MPI_Info info,
                                    const char *port_name);
OMPI_DECLSPEC  int MPI_Put(const void *origin_addr, int origin_count, MPI_Datatype origin_datatype,
                           int target_rank, MPI_Aint target_disp, int target_count,
                           MPI_Datatype target_datatype, MPI_Win win);
OMPI_DECLSPEC  int MPI_Query_thread(int *provided);
OMPI_DECLSPEC  int MPI_Raccumulate(const void *origin_addr, int origin_count, MPI_Datatype origin_datatype,
                                   int target_rank, MPI_Aint target_disp, int target_count,
                                   MPI_Datatype target_datatype, MPI_Op op, MPI_Win win, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Recv_init(void *buf, int count, MPI_Datatype datatype, int source,
                                 int tag, MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Recv(void *buf, int count, MPI_Datatype datatype, int source,
                            int tag, MPI_Comm comm, MPI_Status *status);
OMPI_DECLSPEC  int MPI_Reduce(const void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype,
                              MPI_Op op, int root, MPI_Comm comm);
OMPI_DECLSPEC  int MPI_Ireduce(const void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype,
                               MPI_Op op, int root, MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Reduce_init(const void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype,
                                   MPI_Op op, int root, MPI_Comm comm, MPI_Info info, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Reduce_local(const void *inbuf, void *inoutbuf, int count,
                                    MPI_Datatype datatype, MPI_Op op);
OMPI_DECLSPEC  int MPI_Reduce_scatter(const void *sendbuf, void *recvbuf, const int recvcounts[], MPI_Datatype datatype,
                                      MPI_Op op, MPI_Comm comm);
OMPI_DECLSPEC  int MPI_Ireduce_scatter(const void *sendbuf, void *recvbuf, const int recvcounts[], MPI_Datatype datatype,
                                       MPI_Op op, MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Reduce_scatter_init(const void *sendbuf, void *recvbuf, const int recvcounts[], MPI_Datatype datatype,
                                           MPI_Op op, MPI_Comm comm, MPI_Info info, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Reduce_scatter_block(const void *sendbuf, void *recvbuf, int recvcount, MPI_Datatype datatype,
                                            MPI_Op op, MPI_Comm comm);
OMPI_DECLSPEC  int MPI_Ireduce_scatter_block(const void *sendbuf, void *recvbuf, int recvcount, MPI_Datatype datatype,
                                             MPI_Op op, MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Reduce_scatter_block_init(const void *sendbuf, void *recvbuf, int recvcount, MPI_Datatype datatype,
                                                 MPI_Op op, MPI_Comm comm, MPI_Info info, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Register_datarep(const char *datarep,
                                        MPI_Datarep_conversion_function *read_conversion_fn,
                                        MPI_Datarep_conversion_function *write_conversion_fn,
                                        MPI_Datarep_extent_function *dtype_file_extent_fn,
                                        void *extra_state);
OMPI_DECLSPEC  MPI_Fint MPI_Request_c2f(MPI_Request request);
OMPI_DECLSPEC  MPI_Request MPI_Request_f2c(MPI_Fint request);
OMPI_DECLSPEC  int MPI_Request_free(MPI_Request *request);
OMPI_DECLSPEC  int MPI_Request_get_status(MPI_Request request, int *flag,
                                          MPI_Status *status);
OMPI_DECLSPEC  int MPI_Rget(void *origin_addr, int origin_count, MPI_Datatype origin_datatype,
                            int target_rank, MPI_Aint target_disp, int target_count, MPI_Datatype target_datatype,
                            MPI_Win win, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Rget_accumulate(const void *origin_addr, int origin_count, MPI_Datatype origin_datatype,
                                       void *result_addr, int result_count, MPI_Datatype result_datatype,
                                       int target_rank, MPI_Aint target_disp, int target_count,
                                       MPI_Datatype target_datatype, MPI_Op op,
                                       MPI_Win win, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Rput(const void *origin_addr, int origin_count, MPI_Datatype origin_datatype,
                            int target_rank, MPI_Aint target_disp, int target_cout,
                            MPI_Datatype target_datatype, MPI_Win win, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Rsend(const void *ibuf, int count, MPI_Datatype datatype, int dest,
                             int tag, MPI_Comm comm);
OMPI_DECLSPEC  int MPI_Rsend_init(const void *buf, int count, MPI_Datatype datatype,
                                  int dest, int tag, MPI_Comm comm,
                                  MPI_Request *request);
OMPI_DECLSPEC  int MPI_Scan(const void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype,
                            MPI_Op op, MPI_Comm comm);
OMPI_DECLSPEC  int MPI_Iscan(const void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype,
                             MPI_Op op, MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Scan_init(const void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype,
                                 MPI_Op op, MPI_Comm comm, MPI_Info info, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Scatter(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                               void *recvbuf, int recvcount, MPI_Datatype recvtype,
                               int root, MPI_Comm comm);
OMPI_DECLSPEC  int MPI_Iscatter(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                void *recvbuf, int recvcount, MPI_Datatype recvtype,
                                int root, MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Scatter_init(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                    void *recvbuf, int recvcount, MPI_Datatype recvtype,
                                    int root, MPI_Comm comm, MPI_Info info, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Scatterv(const void *sendbuf, const int sendcounts[], const int displs[], MPI_Datatype sendtype,
                                void *recvbuf, int recvcount, MPI_Datatype recvtype,
                                int root, MPI_Comm comm);
OMPI_DECLSPEC  int MPI_Iscatterv(const void *sendbuf, const int sendcounts[], const int displs[], MPI_Datatype sendtype,
                                 void *recvbuf, int recvcount, MPI_Datatype recvtype,
                                 int root, MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Scatterv_init(const void *sendbuf, const int sendcounts[], const int displs[], MPI_Datatype sendtype,
                                     void *recvbuf, int recvcount, MPI_Datatype recvtype,
                                     int root, MPI_Comm comm, MPI_Info info, MPI_Request *request);
OMPI_DECLSPEC  int MPI_Send_init(const void *buf, int count, MPI_Datatype datatype,
                                 int dest, int tag, MPI_Comm comm,
                                 MPI_Request *request);
OMPI_DECLSPEC  int MPI_Send(const void *buf, int count, MPI_Datatype datatype, int dest,
                            int tag, MPI_Comm comm);
OMPI_DECLSPEC  int MPI_Sendrecv(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                int dest, int sendtag, void *recvbuf, int recvcount,
                                MPI_Datatype recvtype, int source, int recvtag,
                                MPI_Comm comm,  MPI_Status *status);
OMPI_DECLSPEC  int MPI_Sendrecv_replace(void * buf, int count, MPI_Datatype datatype,
                                        int dest, int sendtag, int source, int recvtag,
                                        MPI_Comm comm, MPI_Status *status);
OMPI_DECLSPEC  MPI_Fint MPI_Session_c2f (const MPI_Session session);
OMPI_DECLSPEC  int MPI_Session_call_errhandler(MPI_Session session, int errorcode);
OMPI_DECLSPEC  int MPI_Session_create_errhandler (MPI_Session_errhandler_function *session_errhandler_fn,
                                                  MPI_Errhandler *errhandler);
OMPI_DECLSPEC  int MPI_Session_finalize (MPI_Session *session);
OMPI_DECLSPEC  int MPI_Session_get_errhandler(MPI_Session session, MPI_Errhandler *erhandler);
OMPI_DECLSPEC  int MPI_Session_get_info (MPI_Session session, MPI_Info *info_used);
OMPI_DECLSPEC  int MPI_Session_get_num_psets (MPI_Session session, MPI_Info info, int *npset_names);
OMPI_DECLSPEC  int MPI_Session_get_nth_pset (MPI_Session session, MPI_Info info, int n, int *len, char *pset_name);
OMPI_DECLSPEC  int MPI_Session_get_pset_info (MPI_Session session, const char *pset_name, MPI_Info *info_used);
OMPI_DECLSPEC  int MPI_Session_init (MPI_Info info, MPI_Errhandler errhandler,
                                     MPI_Session *session);
OMPI_DECLSPEC  MPI_Session MPI_Session_f2c (MPI_Fint session);
OMPI_DECLSPEC  int MPI_Session_set_errhandler(MPI_Session session, MPI_Errhandler errhandler);
OMPI_DECLSPEC  int MPI_Session_set_info (MPI_Session session, MPI_Info info);
OMPI_DECLSPEC  int MPI_Ssend_init(const void *buf, int count, MPI_Datatype datatype,
                                  int dest, int tag, MPI_Comm comm,
                                  MPI_Request *request);
OMPI_DECLSPEC  int MPI_Ssend(const void *buf, int count, MPI_Datatype datatype, int dest,
                             int tag, MPI_Comm comm);
OMPI_DECLSPEC  int MPI_Start(MPI_Request *request);
OMPI_DECLSPEC  int MPI_Startall(int count, MPI_Request array_of_requests[]);
OMPI_DECLSPEC  int MPI_Status_c2f(const MPI_Status *c_status, MPI_Fint *f_status);
OMPI_DECLSPEC  int MPI_Status_c2f08(const MPI_Status *c_status, MPI_F08_status *f08_status);
OMPI_DECLSPEC  int MPI_Status_f082c(const MPI_F08_status *f08_status, MPI_Status *c_status);
OMPI_DECLSPEC  int MPI_Status_f082f(const MPI_F08_status *f08_status, MPI_Fint *f_status);
OMPI_DECLSPEC  int MPI_Status_f2c(const MPI_Fint *f_status, MPI_Status *c_status);
OMPI_DECLSPEC  int MPI_Status_f2f08(const MPI_Fint *f_status, MPI_F08_status *f08_status);
OMPI_DECLSPEC  int MPI_Status_set_cancelled(MPI_Status *status, int flag);
OMPI_DECLSPEC  int MPI_Status_set_elements(MPI_Status *status, MPI_Datatype datatype,
                                           int count);
OMPI_DECLSPEC  int MPI_Status_set_elements_x(MPI_Status *status, MPI_Datatype datatype,
                                             MPI_Count count);
OMPI_DECLSPEC  int MPI_Testall(int count, MPI_Request array_of_requests[], int *flag,
                               MPI_Status array_of_statuses[]);
OMPI_DECLSPEC  int MPI_Testany(int count, MPI_Request array_of_requests[], int *index,
                               int *flag, MPI_Status *status);
OMPI_DECLSPEC  int MPI_Test(MPI_Request *request, int *flag, MPI_Status *status);
OMPI_DECLSPEC  int MPI_Test_cancelled(const MPI_Status *status, int *flag);
OMPI_DECLSPEC  int MPI_Testsome(int incount, MPI_Request array_of_requests[],
                                int *outcount, int array_of_indices[],
                                MPI_Status array_of_statuses[]);
OMPI_DECLSPEC  int MPI_Topo_test(MPI_Comm comm, int *status);
OMPI_DECLSPEC  MPI_Fint MPI_Type_c2f(MPI_Datatype datatype);
OMPI_DECLSPEC  int MPI_Type_commit(MPI_Datatype *type);
OMPI_DECLSPEC  int MPI_Type_contiguous(int count, MPI_Datatype oldtype,
                                       MPI_Datatype *newtype);
OMPI_DECLSPEC  int MPI_Type_create_darray(int size, int rank, int ndims,
                                          const int gsize_array[], const int distrib_array[],
                                          const int darg_array[], const int psize_array[],
                                          int order, MPI_Datatype oldtype,
                                          MPI_Datatype *newtype);
OMPI_DECLSPEC  int MPI_Type_create_f90_complex(int p, int r, MPI_Datatype *newtype);
OMPI_DECLSPEC  int MPI_Type_create_f90_integer(int r, MPI_Datatype *newtype);
OMPI_DECLSPEC  int MPI_Type_create_f90_real(int p, int r, MPI_Datatype *newtype);
OMPI_DECLSPEC  int MPI_Type_create_hindexed_block(int count, int blocklength,
                                                  const MPI_Aint array_of_displacements[],
                                                  MPI_Datatype oldtype,
                                                  MPI_Datatype *newtype);
OMPI_DECLSPEC  int MPI_Type_create_hindexed(int count, const int array_of_blocklengths[],
                                            const MPI_Aint array_of_displacements[],
                                            MPI_Datatype oldtype,
                                            MPI_Datatype *newtype);
OMPI_DECLSPEC  int MPI_Type_create_hvector(int count, int blocklength, MPI_Aint stride,
                                           MPI_Datatype oldtype,
                                           MPI_Datatype *newtype);
OMPI_DECLSPEC  int MPI_Type_create_keyval(MPI_Type_copy_attr_function *type_copy_attr_fn,
                                          MPI_Type_delete_attr_function *type_delete_attr_fn,
                                          int *type_keyval, void *extra_state);
OMPI_DECLSPEC  int MPI_Type_create_indexed_block(int count, int blocklength,
                                                 const int array_of_displacements[],
                                                 MPI_Datatype oldtype,
                                                 MPI_Datatype *newtype);
OMPI_DECLSPEC  int MPI_Type_create_struct(int count, const int array_of_block_lengths[],
                                          const MPI_Aint array_of_displacements[],
                                          const MPI_Datatype array_of_types[],
                                          MPI_Datatype *newtype);
OMPI_DECLSPEC  int MPI_Type_create_subarray(int ndims, const int size_array[], const int subsize_array[],
                                            const int start_array[], int order,
                                            MPI_Datatype oldtype, MPI_Datatype *newtype);
OMPI_DECLSPEC  int MPI_Type_create_resized(MPI_Datatype oldtype, MPI_Aint lb,
                                           MPI_Aint extent, MPI_Datatype *newtype);
OMPI_DECLSPEC  int MPI_Type_delete_attr(MPI_Datatype type, int type_keyval);
OMPI_DECLSPEC  int MPI_Type_dup(MPI_Datatype type, MPI_Datatype *newtype);
OMPI_DECLSPEC  int MPI_Type_free(MPI_Datatype *type);
OMPI_DECLSPEC  int MPI_Type_free_keyval(int *type_keyval);
OMPI_DECLSPEC  MPI_Datatype MPI_Type_f2c(MPI_Fint datatype);
OMPI_DECLSPEC  int MPI_Type_get_attr(MPI_Datatype type, int type_keyval,
                                     void *attribute_val, int *flag);
OMPI_DECLSPEC  int MPI_Type_get_contents(MPI_Datatype mtype, int max_integers,
                                         int max_addresses, int max_datatypes,
                                         int array_of_integers[],
                                         MPI_Aint array_of_addresses[],
                                         MPI_Datatype array_of_datatypes[]);
OMPI_DECLSPEC  int MPI_Type_get_envelope(MPI_Datatype type, int *num_integers,
                                         int *num_addresses, int *num_datatypes,
                                         int *combiner);
OMPI_DECLSPEC  int MPI_Type_get_extent(MPI_Datatype type, MPI_Aint *lb,
                                       MPI_Aint *extent);
OMPI_DECLSPEC  int MPI_Type_get_extent_x(MPI_Datatype type, MPI_Count *lb,
                                         MPI_Count *extent);
OMPI_DECLSPEC  int MPI_Type_get_name(MPI_Datatype type, char *type_name,
                                     int *resultlen);
OMPI_DECLSPEC  int MPI_Type_get_true_extent(MPI_Datatype datatype, MPI_Aint *true_lb,
                                            MPI_Aint *true_extent);
OMPI_DECLSPEC  int MPI_Type_get_true_extent_x(MPI_Datatype datatype, MPI_Count *true_lb,
                                              MPI_Count *true_extent);
OMPI_DECLSPEC  int MPI_Type_indexed(int count, const int array_of_blocklengths[],
                                    const int array_of_displacements[],
                                    MPI_Datatype oldtype, MPI_Datatype *newtype);
OMPI_DECLSPEC  int MPI_Type_match_size(int typeclass, int size, MPI_Datatype *type);
OMPI_DECLSPEC  int MPI_Type_set_attr(MPI_Datatype type, int type_keyval,
                                     void *attr_val);
OMPI_DECLSPEC  int MPI_Type_set_name(MPI_Datatype type, const char *type_name);
OMPI_DECLSPEC  int MPI_Type_size(MPI_Datatype type, int *size);
OMPI_DECLSPEC  int MPI_Type_size_x(MPI_Datatype type, MPI_Count *size);
OMPI_DECLSPEC  int MPI_Type_vector(int count, int blocklength, int stride,
                                   MPI_Datatype oldtype, MPI_Datatype *newtype);
OMPI_DECLSPEC  int MPI_Unpack(const void *inbuf, int insize, int *position,
                              void *outbuf, int outcount, MPI_Datatype datatype,
                              MPI_Comm comm);
OMPI_DECLSPEC  int MPI_Unpublish_name(const char *service_name, MPI_Info info, const char *port_name);
OMPI_DECLSPEC  int MPI_Unpack_external (const char datarep[], const void *inbuf, MPI_Aint insize,
                                        MPI_Aint *position, void *outbuf, int outcount,
                                        MPI_Datatype datatype);
OMPI_DECLSPEC  int MPI_Waitall(int count, MPI_Request array_of_requests[],
                               MPI_Status *array_of_statuses);
OMPI_DECLSPEC  int MPI_Waitany(int count, MPI_Request array_of_requests[],
                               int *index, MPI_Status *status);
OMPI_DECLSPEC  int MPI_Wait(MPI_Request *request, MPI_Status *status);
OMPI_DECLSPEC  int MPI_Waitsome(int incount, MPI_Request array_of_requests[],
                                int *outcount, int array_of_indices[],
                                MPI_Status array_of_statuses[]);
OMPI_DECLSPEC  int MPI_Win_allocate(MPI_Aint size, int disp_unit, MPI_Info info,
                                    MPI_Comm comm, void *baseptr, MPI_Win *win);
OMPI_DECLSPEC  int MPI_Win_allocate_shared(MPI_Aint size, int disp_unit, MPI_Info info,
                                           MPI_Comm comm, void *baseptr, MPI_Win *win);
OMPI_DECLSPEC  int MPI_Win_attach(MPI_Win win, void *base, MPI_Aint size);
OMPI_DECLSPEC  MPI_Fint MPI_Win_c2f(MPI_Win win);
OMPI_DECLSPEC  int MPI_Win_call_errhandler(MPI_Win win, int errorcode);
OMPI_DECLSPEC  int MPI_Win_complete(MPI_Win win);
OMPI_DECLSPEC  int MPI_Win_create(void *base, MPI_Aint size, int disp_unit,
                                  MPI_Info info, MPI_Comm comm, MPI_Win *win);
OMPI_DECLSPEC  int MPI_Win_create_dynamic(MPI_Info info, MPI_Comm comm, MPI_Win *win);
OMPI_DECLSPEC  int MPI_Win_create_errhandler(MPI_Win_errhandler_function *function,
                                             MPI_Errhandler *errhandler);
OMPI_DECLSPEC  int MPI_Win_create_keyval(MPI_Win_copy_attr_function *win_copy_attr_fn,
                                         MPI_Win_delete_attr_function *win_delete_attr_fn,
                                         int *win_keyval, void *extra_state);
OMPI_DECLSPEC  int MPI_Win_delete_attr(MPI_Win win, int win_keyval);
OMPI_DECLSPEC  int MPI_Win_detach(MPI_Win win, const void *base);
OMPI_DECLSPEC  MPI_Win MPI_Win_f2c(MPI_Fint win);
OMPI_DECLSPEC  int MPI_Win_fence(int mpi_assert, MPI_Win win);
OMPI_DECLSPEC  int MPI_Win_flush(int rank, MPI_Win win);
OMPI_DECLSPEC  int MPI_Win_flush_all(MPI_Win win);
OMPI_DECLSPEC  int MPI_Win_flush_local(int rank, MPI_Win win);
OMPI_DECLSPEC  int MPI_Win_flush_local_all(MPI_Win win);
OMPI_DECLSPEC  int MPI_Win_free(MPI_Win *win);
OMPI_DECLSPEC  int MPI_Win_free_keyval(int *win_keyval);
OMPI_DECLSPEC  int MPI_Win_get_attr(MPI_Win win, int win_keyval,
                                    void *attribute_val, int *flag);
OMPI_DECLSPEC  int MPI_Win_get_errhandler(MPI_Win win, MPI_Errhandler *errhandler);
OMPI_DECLSPEC  int MPI_Win_get_group(MPI_Win win, MPI_Group *group);
OMPI_DECLSPEC  int MPI_Win_get_info(MPI_Win win, MPI_Info *info_used);
OMPI_DECLSPEC  int MPI_Win_get_name(MPI_Win win, char *win_name, int *resultlen);
OMPI_DECLSPEC  int MPI_Win_lock(int lock_type, int rank, int mpi_assert, MPI_Win win);
OMPI_DECLSPEC  int MPI_Win_lock_all(int mpi_assert, MPI_Win win);
OMPI_DECLSPEC  int MPI_Win_post(MPI_Group group, int mpi_assert, MPI_Win win);
OMPI_DECLSPEC  int MPI_Win_set_attr(MPI_Win win, int win_keyval, void *attribute_val);
OMPI_DECLSPEC  int MPI_Win_set_errhandler(MPI_Win win, MPI_Errhandler errhandler);
OMPI_DECLSPEC  int MPI_Win_set_info(MPI_Win win, MPI_Info info);
OMPI_DECLSPEC  int MPI_Win_set_name(MPI_Win win, const char *win_name);
OMPI_DECLSPEC  int MPI_Win_shared_query(MPI_Win win, int rank, MPI_Aint *size, int *disp_unit, void *baseptr);
OMPI_DECLSPEC  int MPI_Win_start(MPI_Group group, int mpi_assert, MPI_Win win);
OMPI_DECLSPEC  int MPI_Win_sync(MPI_Win win);
OMPI_DECLSPEC  int MPI_Win_test(MPI_Win win, int *flag);
OMPI_DECLSPEC  int MPI_Win_unlock(int rank, MPI_Win win);
OMPI_DECLSPEC  int MPI_Win_unlock_all(MPI_Win win);
OMPI_DECLSPEC  int MPI_Win_wait(MPI_Win win);
OMPI_DECLSPEC  double MPI_Wtick(void);
OMPI_DECLSPEC  double MPI_Wtime(void);

  /*
   * Profiling MPI API
   */
OMPI_DECLSPEC  int PMPI_Abort(MPI_Comm comm, int errorcode);
OMPI_DECLSPEC  int PMPI_Accumulate(const void *origin_addr, int origin_count, MPI_Datatype origin_datatype,
                                   int target_rank, MPI_Aint target_disp, int target_count,
                                   MPI_Datatype target_datatype, MPI_Op op, MPI_Win win);
OMPI_DECLSPEC  int PMPI_Add_error_class(int *errorclass);
OMPI_DECLSPEC  int PMPI_Add_error_code(int errorclass, int *errorcode);
OMPI_DECLSPEC  int PMPI_Add_error_string(int errorcode, const char *string);
OMPI_DECLSPEC  int PMPI_Allgather(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                  void *recvbuf, int recvcount,
                                  MPI_Datatype recvtype, MPI_Comm comm);
OMPI_DECLSPEC  int PMPI_Iallgather(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                   void *recvbuf, int recvcount,
                                   MPI_Datatype recvtype, MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Allgather_init(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                       void *recvbuf, int recvcount, MPI_Datatype recvtype,
                                       MPI_Comm comm, MPI_Info info, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Allgatherv(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                   void *recvbuf, const int recvcounts[],
                                   const int displs[], MPI_Datatype recvtype, MPI_Comm comm);
OMPI_DECLSPEC  int PMPI_Iallgatherv(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                    void *recvbuf, const int recvcounts[], const int displs[], MPI_Datatype recvtype,
                                    MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Allgatherv_init(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                        void *recvbuf, const int recvcounts[], const int displs[], MPI_Datatype recvtype,
                                        MPI_Comm comm, MPI_Info info, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Alloc_mem(MPI_Aint size, MPI_Info info,
                                  void *baseptr);
OMPI_DECLSPEC  int PMPI_Allreduce(const void *sendbuf, void *recvbuf, int count,
                                  MPI_Datatype datatype, MPI_Op op, MPI_Comm comm);
OMPI_DECLSPEC  int PMPI_Iallreduce(const void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype,
                                   MPI_Op op, MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Allreduce_init(const void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype,
                                       MPI_Op op, MPI_Comm comm, MPI_Info info, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Alltoall(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                 void *recvbuf, int recvcount,
                                 MPI_Datatype recvtype, MPI_Comm comm);
OMPI_DECLSPEC  int PMPI_Ialltoall(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                  void *recvbuf, int recvcount, MPI_Datatype recvtype,
                                  MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Alltoall_init(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                  void *recvbuf, int recvcount, MPI_Datatype recvtype,
                                  MPI_Comm comm, MPI_Info info, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Alltoallv(const void *sendbuf, const int sendcounts[], const int sdispls[], MPI_Datatype sendtype,
                                  void *recvbuf, const int recvcounts[], const int rdispls[], MPI_Datatype recvtype,
                                  MPI_Comm comm);
OMPI_DECLSPEC  int PMPI_Ialltoallv(const void *sendbuf, const int sendcounts[], const int sdispls[], MPI_Datatype sendtype,
                                   void *recvbuf, const int recvcounts[], const int rdispls[], MPI_Datatype recvtype,
                                   MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Alltoallv_init(const void *sendbuf, const int sendcounts[], const int sdispls[], MPI_Datatype sendtype,
                                       void *recvbuf, const int recvcounts[], const int rdispls[], MPI_Datatype recvtype,
                                       MPI_Comm comm, MPI_Info info, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Alltoallw(const void *sendbuf, const int sendcounts[], const int sdispls[], const MPI_Datatype sendtypes[],
                                  void *recvbuf, const int recvcounts[], const int rdispls[], const MPI_Datatype recvtypes[],
                                  MPI_Comm comm);
OMPI_DECLSPEC  int PMPI_Ialltoallw(const void *sendbuf, const int sendcounts[], const int sdispls[], const MPI_Datatype sendtypes[],
                                   void *recvbuf, const int recvcounts[], const int rdispls[], const MPI_Datatype recvtypes[],
                                   MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Alltoallw_init(const void *sendbuf, const int sendcounts[], const int sdispls[], const MPI_Datatype sendtypes[],
                                       void *recvbuf, const int recvcounts[], const int rdispls[], const MPI_Datatype recvtypes[],
                                       MPI_Comm comm, MPI_Info info, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Dist_graph_create(MPI_Comm comm_old, int n, const int nodes[],
                                          const int degrees[], const int targets[],
                                          const int weights[], MPI_Info info,
                                          int reorder, MPI_Comm * newcomm);
OMPI_DECLSPEC  int PMPI_Dist_graph_create_adjacent(MPI_Comm comm_old,
                                                   int indegree, const int sources[],
                                                   const int sourceweights[],
                                                   int outdegree,
                                                   const int destinations[],
                                                   const int destweights[],
                                                   MPI_Info info, int reorder,
                                                   MPI_Comm *comm_dist_graph);
OMPI_DECLSPEC int PMPI_Dist_graph_neighbors(MPI_Comm comm, int maxindegree,
                                            int sources[], int sourceweights[],
                                            int maxoutdegree,
                                             int destinations[],
                                            int destweights[]);
OMPI_DECLSPEC  int PMPI_Dist_graph_neighbors_count(MPI_Comm comm,
                                                   int *inneighbors,
                                                   int *outneighbors,
                                                   int *weighted);
OMPI_DECLSPEC  int PMPI_Barrier(MPI_Comm comm);
OMPI_DECLSPEC  int PMPI_Ibarrier(MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Barrier_init(MPI_Comm comm, MPI_Info info, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Bcast(void *buffer, int count, MPI_Datatype datatype,
                              int root, MPI_Comm comm);
OMPI_DECLSPEC  int PMPI_Ibcast(void *buffer, int count, MPI_Datatype datatype,
                               int root, MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Bcast_init(void *buffer, int count, MPI_Datatype datatype,
                                   int root, MPI_Comm comm, MPI_Info info, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Bsend(const void *buf, int count, MPI_Datatype datatype,
                              int dest, int tag, MPI_Comm comm);
OMPI_DECLSPEC  int PMPI_Bsend_init(const void *buf, int count, MPI_Datatype datatype,
                                   int dest, int tag, MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Buffer_attach(void *buffer, int size);
OMPI_DECLSPEC  int PMPI_Buffer_detach(void *buffer, int *size);
OMPI_DECLSPEC  int PMPI_Cancel(MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Cart_coords(MPI_Comm comm, int rank, int maxdims, int coords[]);
OMPI_DECLSPEC  int PMPI_Cart_create(MPI_Comm old_comm, int ndims, const int dims[],
                                    const int periods[], int reorder, MPI_Comm *comm_cart);
OMPI_DECLSPEC  int PMPI_Cart_get(MPI_Comm comm, int maxdims, int dims[],
                                 int periods[], int coords[]);
OMPI_DECLSPEC  int PMPI_Cart_map(MPI_Comm comm, int ndims, const int dims[],
                                 const int periods[], int *newrank);
OMPI_DECLSPEC  int PMPI_Cart_rank(MPI_Comm comm, const int coords[], int *rank);
OMPI_DECLSPEC  int PMPI_Cart_shift(MPI_Comm comm, int direction, int disp,
                                   int *rank_source, int *rank_dest);
OMPI_DECLSPEC  int PMPI_Cart_sub(MPI_Comm comm, const int remain_dims[], MPI_Comm *new_comm);
OMPI_DECLSPEC  int PMPI_Cartdim_get(MPI_Comm comm, int *ndims);
OMPI_DECLSPEC  int PMPI_Close_port(const char *port_name);
OMPI_DECLSPEC  int PMPI_Comm_accept(const char *port_name, MPI_Info info, int root,
                                    MPI_Comm comm, MPI_Comm *newcomm);
OMPI_DECLSPEC  MPI_Fint PMPI_Comm_c2f(MPI_Comm comm);
OMPI_DECLSPEC  int PMPI_Comm_call_errhandler(MPI_Comm comm, int errorcode);
OMPI_DECLSPEC  int PMPI_Comm_compare(MPI_Comm comm1, MPI_Comm comm2, int *result);
OMPI_DECLSPEC  int PMPI_Comm_connect(const char *port_name, MPI_Info info, int root,
                                     MPI_Comm comm, MPI_Comm *newcomm);
OMPI_DECLSPEC  int PMPI_Comm_create_errhandler(MPI_Comm_errhandler_function *function,
                                               MPI_Errhandler *errhandler);
OMPI_DECLSPEC  int PMPI_Comm_create_keyval(MPI_Comm_copy_attr_function *comm_copy_attr_fn,
                                           MPI_Comm_delete_attr_function *comm_delete_attr_fn,
                                           int *comm_keyval, void *extra_state);
OMPI_DECLSPEC  int PMPI_Comm_create_group(MPI_Comm comm, MPI_Group group, int tag, MPI_Comm *newcomm);
OMPI_DECLSPEC  int PMPI_Comm_create_from_group(MPI_Group group, const char *tag, MPI_Info info,
					       MPI_Errhandler errhandler, MPI_Comm *newcomm);
OMPI_DECLSPEC  int PMPI_Comm_create(MPI_Comm comm, MPI_Group group, MPI_Comm *newcomm);
OMPI_DECLSPEC  int PMPI_Comm_delete_attr(MPI_Comm comm, int comm_keyval);
OMPI_DECLSPEC  int PMPI_Comm_disconnect(MPI_Comm *comm);
OMPI_DECLSPEC  int PMPI_Comm_dup(MPI_Comm comm, MPI_Comm *newcomm);
OMPI_DECLSPEC  int PMPI_Comm_idup(MPI_Comm comm, MPI_Comm *newcomm, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Comm_dup_with_info(MPI_Comm comm, MPI_Info info, MPI_Comm *newcomm);
OMPI_DECLSPEC  int PMPI_Comm_idup_with_info(MPI_Comm comm, MPI_Info info, MPI_Comm *newcomm,
                                            MPI_Request *request);
OMPI_DECLSPEC  MPI_Comm PMPI_Comm_f2c(MPI_Fint comm);
OMPI_DECLSPEC  int PMPI_Comm_free_keyval(int *comm_keyval);
OMPI_DECLSPEC  int PMPI_Comm_free(MPI_Comm *comm);
OMPI_DECLSPEC  int PMPI_Comm_get_attr(MPI_Comm comm, int comm_keyval,
                                      void *attribute_val, int *flag);
OMPI_DECLSPEC  int PMPI_Comm_get_errhandler(MPI_Comm comm, MPI_Errhandler *erhandler);
OMPI_DECLSPEC  int PMPI_Comm_get_info(MPI_Comm comm, MPI_Info *info_used);
OMPI_DECLSPEC  int PMPI_Comm_get_name(MPI_Comm comm, char *comm_name, int *resultlen);
OMPI_DECLSPEC  int PMPI_Comm_get_parent(MPI_Comm *parent);
OMPI_DECLSPEC  int PMPI_Comm_group(MPI_Comm comm, MPI_Group *group);
OMPI_DECLSPEC  int PMPI_Comm_join(int fd, MPI_Comm *intercomm);
OMPI_DECLSPEC  int PMPI_Comm_rank(MPI_Comm comm, int *rank);
OMPI_DECLSPEC  int PMPI_Comm_remote_group(MPI_Comm comm, MPI_Group *group);
OMPI_DECLSPEC  int PMPI_Comm_remote_size(MPI_Comm comm, int *size);
OMPI_DECLSPEC  int PMPI_Comm_set_attr(MPI_Comm comm, int comm_keyval, void *attribute_val);
OMPI_DECLSPEC  int PMPI_Comm_set_errhandler(MPI_Comm comm, MPI_Errhandler errhandler);
OMPI_DECLSPEC  int PMPI_Comm_set_info(MPI_Comm comm, MPI_Info info);
OMPI_DECLSPEC  int PMPI_Comm_set_name(MPI_Comm comm, const char *comm_name);
OMPI_DECLSPEC  int PMPI_Comm_size(MPI_Comm comm, int *size);
OMPI_DECLSPEC  int PMPI_Comm_spawn(const char *command, char *argv[], int maxprocs, MPI_Info info,
                                   int root, MPI_Comm comm, MPI_Comm *intercomm,
                                   int array_of_errcodes[]);
OMPI_DECLSPEC  int PMPI_Comm_spawn_multiple(int count, char *array_of_commands[], char **array_of_argv[],
                                            const int array_of_maxprocs[], const MPI_Info array_of_info[],
                                            int root, MPI_Comm comm, MPI_Comm *intercomm,
                                            int array_of_errcodes[]);
OMPI_DECLSPEC  int PMPI_Comm_split(MPI_Comm comm, int color, int key, MPI_Comm *newcomm);
OMPI_DECLSPEC  int PMPI_Comm_split_type(MPI_Comm comm, int split_type, int key, MPI_Info info, MPI_Comm *newcomm);
OMPI_DECLSPEC  int PMPI_Comm_test_inter(MPI_Comm comm, int *flag);
OMPI_DECLSPEC  int PMPI_Compare_and_swap(const void *origin_addr, const void *compare_addr,
                                         void *result_addr, MPI_Datatype datatype, int target_rank,
                                         MPI_Aint target_disp, MPI_Win win);
OMPI_DECLSPEC  int PMPI_Dims_create(int nnodes, int ndims, int dims[]);
OMPI_DECLSPEC  MPI_Fint PMPI_Errhandler_c2f(MPI_Errhandler errhandler);
OMPI_DECLSPEC  MPI_Errhandler PMPI_Errhandler_f2c(MPI_Fint errhandler);
OMPI_DECLSPEC  int PMPI_Errhandler_free(MPI_Errhandler *errhandler);
OMPI_DECLSPEC  int PMPI_Error_class(int errorcode, int *errorclass);
OMPI_DECLSPEC  int PMPI_Error_string(int errorcode, char *string, int *resultlen);
OMPI_DECLSPEC  int PMPI_Exscan(const void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype,
                               MPI_Op op, MPI_Comm comm);
OMPI_DECLSPEC  int PMPI_Iexscan(const void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype,
                                MPI_Op op, MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Exscan_init(const void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype,
                                    MPI_Op op, MPI_Comm comm, MPI_Info info, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Fetch_and_op(const void *origin_addr, void *result_addr, MPI_Datatype datatype,
                                     int target_rank, MPI_Aint target_disp, MPI_Op op, MPI_Win win);
OMPI_DECLSPEC  MPI_Fint PMPI_File_c2f(MPI_File file);
OMPI_DECLSPEC  MPI_File PMPI_File_f2c(MPI_Fint file);
OMPI_DECLSPEC  int PMPI_File_call_errhandler(MPI_File fh, int errorcode);
OMPI_DECLSPEC  int PMPI_File_create_errhandler(MPI_File_errhandler_function *function,
                                               MPI_Errhandler *errhandler);
OMPI_DECLSPEC  int PMPI_File_set_errhandler( MPI_File file, MPI_Errhandler errhandler);
OMPI_DECLSPEC  int PMPI_File_get_errhandler( MPI_File file, MPI_Errhandler *errhandler);
OMPI_DECLSPEC  int PMPI_File_open(MPI_Comm comm, const char *filename, int amode,
                                  MPI_Info info, MPI_File *fh);
OMPI_DECLSPEC  int PMPI_File_close(MPI_File *fh);
OMPI_DECLSPEC  int PMPI_File_delete(const char *filename, MPI_Info info);
OMPI_DECLSPEC  int PMPI_File_set_size(MPI_File fh, MPI_Offset size);
OMPI_DECLSPEC  int PMPI_File_preallocate(MPI_File fh, MPI_Offset size);
OMPI_DECLSPEC  int PMPI_File_get_size(MPI_File fh, MPI_Offset *size);
OMPI_DECLSPEC  int PMPI_File_get_group(MPI_File fh, MPI_Group *group);
OMPI_DECLSPEC  int PMPI_File_get_amode(MPI_File fh, int *amode);
OMPI_DECLSPEC  int PMPI_File_set_info(MPI_File fh, MPI_Info info);
OMPI_DECLSPEC  int PMPI_File_get_info(MPI_File fh, MPI_Info *info_used);
OMPI_DECLSPEC  int PMPI_File_set_view(MPI_File fh, MPI_Offset disp, MPI_Datatype etype,
                                      MPI_Datatype filetype, const char *datarep, MPI_Info info);
OMPI_DECLSPEC  int PMPI_File_get_view(MPI_File fh, MPI_Offset *disp,
                                      MPI_Datatype *etype,
                                      MPI_Datatype *filetype, char *datarep);
OMPI_DECLSPEC  int PMPI_File_read_at(MPI_File fh, MPI_Offset offset, void *buf,
                                     int count, MPI_Datatype datatype, MPI_Status *status);
OMPI_DECLSPEC  int PMPI_File_read_at_all(MPI_File fh, MPI_Offset offset, void *buf,
                                         int count, MPI_Datatype datatype, MPI_Status *status);
OMPI_DECLSPEC  int PMPI_File_write_at(MPI_File fh, MPI_Offset offset, const void *buf,
                                      int count, MPI_Datatype datatype, MPI_Status *status);
OMPI_DECLSPEC  int PMPI_File_write_at_all(MPI_File fh, MPI_Offset offset, const void *buf,
                                          int count, MPI_Datatype datatype, MPI_Status *status);
OMPI_DECLSPEC  int PMPI_File_iread_at(MPI_File fh, MPI_Offset offset, void *buf,
                                      int count, MPI_Datatype datatype, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_File_iwrite_at(MPI_File fh, MPI_Offset offset, const void *buf,
                                       int count, MPI_Datatype datatype, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_File_iread_at_all(MPI_File fh, MPI_Offset offset, void *buf,
                                          int count, MPI_Datatype datatype, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_File_iwrite_at_all(MPI_File fh, MPI_Offset offset, const void *buf,
                                           int count, MPI_Datatype datatype, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_File_read(MPI_File fh, void *buf, int count,
                                  MPI_Datatype datatype, MPI_Status *status);
OMPI_DECLSPEC  int PMPI_File_read_all(MPI_File fh, void *buf, int count,
                                      MPI_Datatype datatype, MPI_Status *status);
OMPI_DECLSPEC  int PMPI_File_write(MPI_File fh, const void *buf, int count,
                                   MPI_Datatype datatype, MPI_Status *status);
OMPI_DECLSPEC  int PMPI_File_write_all(MPI_File fh, const void *buf, int count,
                                       MPI_Datatype datatype, MPI_Status *status);
OMPI_DECLSPEC  int PMPI_File_iread(MPI_File fh, void *buf, int count,
                                   MPI_Datatype datatype, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_File_iwrite(MPI_File fh, const void *buf, int count,
                                    MPI_Datatype datatype, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_File_iread_all(MPI_File fh, void *buf, int count,
                                       MPI_Datatype datatype, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_File_iwrite_all(MPI_File fh, const void *buf, int count,
                                        MPI_Datatype datatype, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_File_seek(MPI_File fh, MPI_Offset offset, int whence);
OMPI_DECLSPEC  int PMPI_File_get_position(MPI_File fh, MPI_Offset *offset);
OMPI_DECLSPEC  int PMPI_File_get_byte_offset(MPI_File fh, MPI_Offset offset,
                                             MPI_Offset *disp);
OMPI_DECLSPEC  int PMPI_File_read_shared(MPI_File fh, void *buf, int count,
                                         MPI_Datatype datatype, MPI_Status *status);
OMPI_DECLSPEC  int PMPI_File_write_shared(MPI_File fh, const void *buf, int count,
                                          MPI_Datatype datatype, MPI_Status *status);
OMPI_DECLSPEC  int PMPI_File_iread_shared(MPI_File fh, void *buf, int count,
                                          MPI_Datatype datatype, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_File_iwrite_shared(MPI_File fh, const void *buf, int count,
                                           MPI_Datatype datatype, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_File_read_ordered(MPI_File fh, void *buf, int count,
                                          MPI_Datatype datatype, MPI_Status *status);
OMPI_DECLSPEC  int PMPI_File_write_ordered(MPI_File fh, const void *buf, int count,
                                           MPI_Datatype datatype, MPI_Status *status);
OMPI_DECLSPEC  int PMPI_File_seek_shared(MPI_File fh, MPI_Offset offset, int whence);
OMPI_DECLSPEC  int PMPI_File_get_position_shared(MPI_File fh, MPI_Offset *offset);
OMPI_DECLSPEC  int PMPI_File_read_at_all_begin(MPI_File fh, MPI_Offset offset, void *buf,
                                               int count, MPI_Datatype datatype);
OMPI_DECLSPEC  int PMPI_File_read_at_all_end(MPI_File fh, void *buf, MPI_Status *status);
OMPI_DECLSPEC  int PMPI_File_write_at_all_begin(MPI_File fh, MPI_Offset offset, const void *buf,
                                                int count, MPI_Datatype datatype);
OMPI_DECLSPEC  int PMPI_File_write_at_all_end(MPI_File fh, const void *buf, MPI_Status *status);
OMPI_DECLSPEC  int PMPI_File_read_all_begin(MPI_File fh, void *buf, int count,
                                            MPI_Datatype datatype);
OMPI_DECLSPEC  int PMPI_File_read_all_end(MPI_File fh, void *buf, MPI_Status *status);
OMPI_DECLSPEC  int PMPI_File_write_all_begin(MPI_File fh, const void *buf, int count,
                                             MPI_Datatype datatype);
OMPI_DECLSPEC  int PMPI_File_write_all_end(MPI_File fh, const void *buf, MPI_Status *status);
OMPI_DECLSPEC  int PMPI_File_read_ordered_begin(MPI_File fh, void *buf, int count,
                                                MPI_Datatype datatype);
OMPI_DECLSPEC  int PMPI_File_read_ordered_end(MPI_File fh, void *buf, MPI_Status *status);
OMPI_DECLSPEC  int PMPI_File_write_ordered_begin(MPI_File fh, const void *buf, int count,
                                                 MPI_Datatype datatype);
OMPI_DECLSPEC  int PMPI_File_write_ordered_end(MPI_File fh, const void *buf, MPI_Status *status);
OMPI_DECLSPEC  int PMPI_File_get_type_extent(MPI_File fh, MPI_Datatype datatype,
                                             MPI_Aint *extent);
OMPI_DECLSPEC  int PMPI_File_set_atomicity(MPI_File fh, int flag);
OMPI_DECLSPEC  int PMPI_File_get_atomicity(MPI_File fh, int *flag);
OMPI_DECLSPEC  int PMPI_File_sync(MPI_File fh);
OMPI_DECLSPEC  int PMPI_Finalize(void);
OMPI_DECLSPEC  int PMPI_Finalized(int *flag);
OMPI_DECLSPEC  int PMPI_Free_mem(void *base);
OMPI_DECLSPEC  int PMPI_Gather(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                               void *recvbuf, int recvcount, MPI_Datatype recvtype,
                               int root, MPI_Comm comm);
OMPI_DECLSPEC  int PMPI_Igather(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                void *recvbuf, int recvcount, MPI_Datatype recvtype,
                                int root, MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Gather_init(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                    void *recvbuf, int recvcount, MPI_Datatype recvtype,
                                    int root, MPI_Comm comm, MPI_Info info, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Gatherv(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                void *recvbuf, const int recvcounts[], const int displs[],
                                MPI_Datatype recvtype, int root, MPI_Comm comm);
OMPI_DECLSPEC  int PMPI_Igatherv(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                 void *recvbuf, const int recvcounts[], const int displs[], MPI_Datatype recvtype,
                                 int root, MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Gatherv_init(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                     void *recvbuf, const int recvcounts[], const int displs[], MPI_Datatype recvtype,
                                     int root, MPI_Comm comm, MPI_Info info, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Get_address(const void *location, MPI_Aint *address);
OMPI_DECLSPEC  int PMPI_Get_count(const MPI_Status *status, MPI_Datatype datatype, int *count);
OMPI_DECLSPEC  int PMPI_Get_elements(const MPI_Status *status, MPI_Datatype datatype,
                                     int *count);
OMPI_DECLSPEC  int PMPI_Get_elements_x(const MPI_Status *status, MPI_Datatype datatype,
                                       MPI_Count *count);
OMPI_DECLSPEC  int PMPI_Get(void *origin_addr, int origin_count,
                            MPI_Datatype origin_datatype, int target_rank,
                            MPI_Aint target_disp, int target_count,
                            MPI_Datatype target_datatype, MPI_Win win);
OMPI_DECLSPEC  int PMPI_Get_accumulate(const void *origin_addr, int origin_count, MPI_Datatype origin_datatype,
                                       void *result_addr, int result_count, MPI_Datatype result_datatype,
                                       int target_rank, MPI_Aint target_disp, int target_count,
                                       MPI_Datatype target_datatype, MPI_Op op, MPI_Win win);
OMPI_DECLSPEC  int PMPI_Get_library_version(char *version, int *resultlen);
OMPI_DECLSPEC  int PMPI_Get_processor_name(char *name, int *resultlen);
OMPI_DECLSPEC  int PMPI_Get_version(int *version, int *subversion);
OMPI_DECLSPEC  int PMPI_Graph_create(MPI_Comm comm_old, int nnodes, const int index[],
                                     const int edges[], int reorder, MPI_Comm *comm_graph);
OMPI_DECLSPEC  int PMPI_Graph_get(MPI_Comm comm, int maxindex, int maxedges,
                                  int index[], int edges[]);
OMPI_DECLSPEC  int PMPI_Graph_map(MPI_Comm comm, int nnodes, const int index[], const int edges[],
                                  int *newrank);
OMPI_DECLSPEC  int PMPI_Graph_neighbors_count(MPI_Comm comm, int rank, int *nneighbors);
OMPI_DECLSPEC  int PMPI_Graph_neighbors(MPI_Comm comm, int rank, int maxneighbors,
                                        int neighbors[]);
OMPI_DECLSPEC  int PMPI_Graphdims_get(MPI_Comm comm, int *nnodes, int *nedges);
OMPI_DECLSPEC  int PMPI_Grequest_complete(MPI_Request request);
OMPI_DECLSPEC  int PMPI_Grequest_start(MPI_Grequest_query_function *query_fn,
                                       MPI_Grequest_free_function *free_fn,
                                       MPI_Grequest_cancel_function *cancel_fn,
                                       void *extra_state, MPI_Request *request);
OMPI_DECLSPEC  MPI_Fint PMPI_Group_c2f(MPI_Group group);
OMPI_DECLSPEC  int PMPI_Group_compare(MPI_Group group1, MPI_Group group2, int *result);
OMPI_DECLSPEC  int PMPI_Group_difference(MPI_Group group1, MPI_Group group2,
                                         MPI_Group *newgroup);
OMPI_DECLSPEC  int PMPI_Group_excl(MPI_Group group, int n, const int ranks[],
                                   MPI_Group *newgroup);
OMPI_DECLSPEC  MPI_Group PMPI_Group_f2c(MPI_Fint group);
OMPI_DECLSPEC  int PMPI_Group_free(MPI_Group *group);
OMPI_DECLSPEC  int PMPI_Group_from_session_pset (MPI_Session session, const char *pset_name, MPI_Group *newgroup);
OMPI_DECLSPEC  int PMPI_Group_incl(MPI_Group group, int n, const int ranks[],
                                   MPI_Group *newgroup);
OMPI_DECLSPEC  int PMPI_Group_intersection(MPI_Group group1, MPI_Group group2,
                                           MPI_Group *newgroup);
OMPI_DECLSPEC  int PMPI_Group_range_excl(MPI_Group group, int n, int ranges[][3],
                                         MPI_Group *newgroup);
OMPI_DECLSPEC  int PMPI_Group_range_incl(MPI_Group group, int n, int ranges[][3],
                                         MPI_Group *newgroup);
OMPI_DECLSPEC  int PMPI_Group_rank(MPI_Group group, int *rank);
OMPI_DECLSPEC  int PMPI_Group_size(MPI_Group group, int *size);
OMPI_DECLSPEC  int PMPI_Group_translate_ranks(MPI_Group group1, int n, const int ranks1[],
                                              MPI_Group group2, int ranks2[]);
OMPI_DECLSPEC  int PMPI_Group_union(MPI_Group group1, MPI_Group group2,
                                    MPI_Group *newgroup);
OMPI_DECLSPEC  int PMPI_Ibsend(const void *buf, int count, MPI_Datatype datatype, int dest,
                               int tag, MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Improbe(int source, int tag, MPI_Comm comm,
                                int *flag, MPI_Message *message,
                                MPI_Status *status);
OMPI_DECLSPEC  int PMPI_Imrecv(void *buf, int count, MPI_Datatype type,
                               MPI_Message *message, MPI_Request *request);
OMPI_DECLSPEC  MPI_Fint PMPI_Info_c2f(MPI_Info info);
OMPI_DECLSPEC  int PMPI_Info_create(MPI_Info *info);
OMPI_DECLSPEC  int PMPI_Info_create_env(int argc, char *argv[], MPI_Info *info);
OMPI_DECLSPEC  int PMPI_Info_delete(MPI_Info info, const char *key);
OMPI_DECLSPEC  int PMPI_Info_dup(MPI_Info info, MPI_Info *newinfo);
OMPI_DECLSPEC  MPI_Info PMPI_Info_f2c(MPI_Fint info);
OMPI_DECLSPEC  int PMPI_Info_free(MPI_Info *info);
#if MPI_VERSION < 4
OMPI_DECLSPEC  int PMPI_Info_get(MPI_Info info, const char *key, int valuelen,
                                 char *value, int *flag);
#endif
OMPI_DECLSPEC  int PMPI_Info_get_nkeys(MPI_Info info, int *nkeys);
OMPI_DECLSPEC  int PMPI_Info_get_nthkey(MPI_Info info, int n, char *key);
OMPI_DECLSPEC  int PMPI_Info_get_string(MPI_Info info, const char *key, int *buflen,
                                        char *value, int *flag);
#if MPI_VERSION < 4
OMPI_DECLSPEC  int PMPI_Info_get_valuelen(MPI_Info info, const char *key, int *valuelen,
                                          int *flag);
#endif
OMPI_DECLSPEC  int PMPI_Info_set(MPI_Info info, const char *key, const char *value);
OMPI_DECLSPEC  int PMPI_Init(int *argc, char ***argv);
OMPI_DECLSPEC  int PMPI_Initialized(int *flag);
OMPI_DECLSPEC  int PMPI_Init_thread(int *argc, char ***argv, int required,
                                    int *provided);
OMPI_DECLSPEC  int PMPI_Intercomm_create(MPI_Comm local_comm, int local_leader,
                                         MPI_Comm bridge_comm, int remote_leader,
                                         int tag, MPI_Comm *newintercomm);
OMPI_DECLSPEC  int PMPI_Intercomm_create_from_groups (MPI_Group local_group, int local_leader, MPI_Group remote_group,
                                                      int remote_leader, const char *tag, MPI_Info info, MPI_Errhandler errhandler,
                                                      MPI_Comm *newintercomm);
OMPI_DECLSPEC  int PMPI_Intercomm_merge(MPI_Comm intercomm, int high,
                                        MPI_Comm *newintercomm);
OMPI_DECLSPEC  int PMPI_Iprobe(int source, int tag, MPI_Comm comm, int *flag,
                               MPI_Status *status);
OMPI_DECLSPEC  int PMPI_Irecv(void *buf, int count, MPI_Datatype datatype, int source,
                              int tag, MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Irsend(const void *buf, int count, MPI_Datatype datatype, int dest,
                               int tag, MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Isend(const void *buf, int count, MPI_Datatype datatype, int dest,
                              int tag, MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Isendrecv(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                  int dest, int sendtag, void *recvbuf, int recvcount,
                                  MPI_Datatype recvtype, int source, int recvtag,
                                  MPI_Comm comm,  MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Isendrecv_replace(void * buf, int count, MPI_Datatype datatype,
                                          int dest, int sendtag, int source, int recvtag,
                                          MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Issend(const void *buf, int count, MPI_Datatype datatype, int dest,
                               int tag, MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Precv_init(void* buf, int partitions, MPI_Count count,
                                  MPI_Datatype datatype, int source, int tag, MPI_Comm comm,
                                  MPI_Info info, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Psend_init(const void* buf, int partitions, MPI_Count count,
                                  MPI_Datatype datatype, int dest, int tag, MPI_Comm comm,
                                  MPI_Info info, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Pready(int partitions, MPI_Request request);
OMPI_DECLSPEC  int PMPI_Pready_range(int partition_low, int partition_high,
                                    MPI_Request request);
OMPI_DECLSPEC  int PMPI_Pready_list(int length, int partition_list[], MPI_Request request);
OMPI_DECLSPEC  int PMPI_Parrived(MPI_Request request, int partition, int *flag);
OMPI_DECLSPEC  int PMPI_Is_thread_main(int *flag);
OMPI_DECLSPEC  int PMPI_Lookup_name(const char *service_name, MPI_Info info, char *port_name);
OMPI_DECLSPEC  MPI_Fint PMPI_Message_c2f(MPI_Message message);
OMPI_DECLSPEC  MPI_Message PMPI_Message_f2c(MPI_Fint message);
OMPI_DECLSPEC  int PMPI_Mprobe(int source, int tag, MPI_Comm comm,
                               MPI_Message *message,
                               MPI_Status *status);
OMPI_DECLSPEC  int PMPI_Mrecv(void *buf, int count, MPI_Datatype type,
                              MPI_Message *message, MPI_Status *status);
OMPI_DECLSPEC  int PMPI_Neighbor_allgather(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                           void *recvbuf, int recvcount, MPI_Datatype recvtype,
                                           MPI_Comm comm);
OMPI_DECLSPEC  int PMPI_Ineighbor_allgather(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                            void *recvbuf, int recvcount, MPI_Datatype recvtype,
                                            MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Neighbor_allgather_init(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                                void *recvbuf, int recvcount, MPI_Datatype recvtype,
                                                MPI_Comm comm, MPI_Info info, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Neighbor_allgatherv(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                            void *recvbuf, const int recvcounts[], const int displs[],
                                            MPI_Datatype recvtype, MPI_Comm comm);
OMPI_DECLSPEC  int PMPI_Ineighbor_allgatherv(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                             void *recvbuf, const int recvcounts[], const int displs[], MPI_Datatype recvtype,
                                             MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Neighbor_allgatherv_init(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                                 void *recvbuf, const int recvcounts[], const int displs[], MPI_Datatype recvtype,
                                                 MPI_Comm comm, MPI_Info info, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Neighbor_alltoall(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                          void *recvbuf, int recvcount, MPI_Datatype recvtype,
                                          MPI_Comm comm);
OMPI_DECLSPEC  int PMPI_Ineighbor_alltoall(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                           void *recvbuf, int recvcount, MPI_Datatype recvtype,
                                           MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Neighbor_alltoall_init(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                               void *recvbuf, int recvcount, MPI_Datatype recvtype,
                                               MPI_Comm comm, MPI_Info info, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Neighbor_alltoallv(const void *sendbuf, const int sendcounts[], const int sdispls[],  MPI_Datatype sendtype,
                                           void *recvbuf, const int recvcounts[], const int rdispls[], MPI_Datatype recvtype,
                                           MPI_Comm comm);
OMPI_DECLSPEC  int PMPI_Ineighbor_alltoallv(const void *sendbuf, const int sendcounts[], const int sdispls[], MPI_Datatype sendtype,
                                            void *recvbuf, const int recvcounts[], const int rdispls[], MPI_Datatype recvtype,
                                            MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Neighbor_alltoallv_init(const void *sendbuf, const int sendcounts[], const int sdispls[], MPI_Datatype sendtype,
                                                void *recvbuf, const int recvcounts[], const int rdispls[], MPI_Datatype recvtype,
                                                MPI_Comm comm, MPI_Info info, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Neighbor_alltoallw(const void *sendbuf, const int sendcounts[], const MPI_Aint sdispls[], const MPI_Datatype sendtypes[],
                                           void *recvbuf, const int recvcounts[], const MPI_Aint rdispls[], const MPI_Datatype recvtypes[],
                                           MPI_Comm comm);
OMPI_DECLSPEC  int PMPI_Ineighbor_alltoallw(const void *sendbuf, const int sendcounts[], const MPI_Aint sdispls[], const MPI_Datatype sendtypes[],
                                            void *recvbuf, const int recvcounts[], const MPI_Aint rdispls[], const MPI_Datatype recvtypes[],
                                            MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Neighbor_alltoallw_init(const void *sendbuf, const int sendcounts[], const MPI_Aint sdispls[], const MPI_Datatype sendtypes[],
                                                void *recvbuf, const int recvcounts[], const MPI_Aint rdispls[], const MPI_Datatype recvtypes[],
                                                MPI_Comm comm, MPI_Info info, MPI_Request *request);
OMPI_DECLSPEC  MPI_Fint PMPI_Op_c2f(MPI_Op op);
OMPI_DECLSPEC  int PMPI_Op_commutative(MPI_Op op, int *commute);
OMPI_DECLSPEC  int PMPI_Op_create(MPI_User_function *function, int commute, MPI_Op *op);
OMPI_DECLSPEC  int PMPI_Open_port(MPI_Info info, char *port_name);
OMPI_DECLSPEC  MPI_Op PMPI_Op_f2c(MPI_Fint op);
OMPI_DECLSPEC  int PMPI_Op_free(MPI_Op *op);
OMPI_DECLSPEC  int PMPI_Pack_external(const char datarep[], const void *inbuf, int incount,
                                      MPI_Datatype datatype, void *outbuf,
                                      MPI_Aint outsize, MPI_Aint *position);
OMPI_DECLSPEC  int PMPI_Pack_external_size(const char datarep[], int incount,
                                           MPI_Datatype datatype, MPI_Aint *size);
OMPI_DECLSPEC  int PMPI_Pack(const void *inbuf, int incount, MPI_Datatype datatype,
                             void *outbuf, int outsize, int *position, MPI_Comm comm);
OMPI_DECLSPEC  int PMPI_Pack_size(int incount, MPI_Datatype datatype, MPI_Comm comm,
                                  int *size);
OMPI_DECLSPEC  int PMPI_Pcontrol(const int level, ...);
OMPI_DECLSPEC  int PMPI_Probe(int source, int tag, MPI_Comm comm, MPI_Status *status);
OMPI_DECLSPEC  int PMPI_Publish_name(const char *service_name, MPI_Info info,
                                     const char *port_name);
OMPI_DECLSPEC  int PMPI_Put(const void *origin_addr, int origin_count, MPI_Datatype origin_datatype,
                            int target_rank, MPI_Aint target_disp, int target_count,
                            MPI_Datatype target_datatype, MPI_Win win);
OMPI_DECLSPEC  int PMPI_Query_thread(int *provided);
OMPI_DECLSPEC  int PMPI_Raccumulate(const void *origin_addr, int origin_count, MPI_Datatype origin_datatype,
                                    int target_rank, MPI_Aint target_disp, int target_count,
                                    MPI_Datatype target_datatype, MPI_Op op, MPI_Win win, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Recv_init(void *buf, int count, MPI_Datatype datatype, int source,
                                  int tag, MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Recv(void *buf, int count, MPI_Datatype datatype, int source,
                             int tag, MPI_Comm comm, MPI_Status *status);
OMPI_DECLSPEC  int PMPI_Reduce(const void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype,
                               MPI_Op op, int root, MPI_Comm comm);
OMPI_DECLSPEC  int PMPI_Ireduce(const void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype,
                                MPI_Op op, int root, MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Reduce_init(const void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype,
                                    MPI_Op op, int root, MPI_Comm comm, MPI_Info info, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Reduce_local(const void *inbuf, void *inoutbuf, int count,
                                     MPI_Datatype datatype, MPI_Op op);
OMPI_DECLSPEC  int PMPI_Reduce_scatter(const void *sendbuf, void *recvbuf, const int recvcounts[], MPI_Datatype datatype,
                                       MPI_Op op, MPI_Comm comm);
OMPI_DECLSPEC  int PMPI_Ireduce_scatter(const void *sendbuf, void *recvbuf, const int recvcounts[], MPI_Datatype datatype,
                                        MPI_Op op, MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Reduce_scatter_init(const void *sendbuf, void *recvbuf, const int recvcounts[], MPI_Datatype datatype,
                                            MPI_Op op, MPI_Comm comm, MPI_Info info, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Reduce_scatter_block(const void *sendbuf, void *recvbuf, int recvcount, MPI_Datatype datatype,
                                             MPI_Op op, MPI_Comm comm);
OMPI_DECLSPEC  int PMPI_Ireduce_scatter_block(const void *sendbuf, void *recvbuf, int recvcount, MPI_Datatype datatype,
                                              MPI_Op op, MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Reduce_scatter_block_init(const void *sendbuf, void *recvbuf, int recvcount, MPI_Datatype datatype,
                                                  MPI_Op op, MPI_Comm comm, MPI_Info info, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Register_datarep(const char *datarep,
                                         MPI_Datarep_conversion_function *read_conversion_fn,
                                         MPI_Datarep_conversion_function *write_conversion_fn,
                                         MPI_Datarep_extent_function *dtype_file_extent_fn,
                                         void *extra_state);
OMPI_DECLSPEC  MPI_Fint PMPI_Request_c2f(MPI_Request request);
OMPI_DECLSPEC  MPI_Request PMPI_Request_f2c(MPI_Fint request);
OMPI_DECLSPEC  int PMPI_Request_free(MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Request_get_status(MPI_Request request, int *flag,
                                           MPI_Status *status);
OMPI_DECLSPEC  int PMPI_Rget(void *origin_addr, int origin_count, MPI_Datatype origin_datatype,
                             int target_rank, MPI_Aint target_disp, int target_count, MPI_Datatype target_datatype,
                             MPI_Win win, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Rget_accumulate(const void *origin_addr, int origin_count, MPI_Datatype origin_datatype,
                                        void *result_addr, int result_count, MPI_Datatype result_datatype,
                                        int target_rank, MPI_Aint target_disp, int target_count,
                                        MPI_Datatype target_datatype, MPI_Op op,
                                        MPI_Win win, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Rput(const void *origin_addr, int origin_count, MPI_Datatype origin_datatype,
                             int target_rank, MPI_Aint target_disp, int target_cout,
                             MPI_Datatype target_datatype, MPI_Win win, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Rsend(const void *ibuf, int count, MPI_Datatype datatype, int dest,
                              int tag, MPI_Comm comm);
OMPI_DECLSPEC  int PMPI_Rsend_init(const void *buf, int count, MPI_Datatype datatype,
                                   int dest, int tag, MPI_Comm comm,
                                   MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Scan(const void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype,
                             MPI_Op op, MPI_Comm comm);
OMPI_DECLSPEC  int PMPI_Iscan(const void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype,
                              MPI_Op op, MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Scan_init(const void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype,
                                  MPI_Op op, MPI_Comm comm, MPI_Info info, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Scatter(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                void *recvbuf, int recvcount, MPI_Datatype recvtype,
                                int root, MPI_Comm comm);
OMPI_DECLSPEC  int PMPI_Iscatter(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                 void *recvbuf, int recvcount, MPI_Datatype recvtype,
                                 int root, MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Scatter_init(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                     void *recvbuf, int recvcount, MPI_Datatype recvtype,
                                     int root, MPI_Comm comm, MPI_Info info, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Scatterv(const void *sendbuf, const int sendcounts[], const int displs[], MPI_Datatype sendtype,
                                 void *recvbuf, int recvcount, MPI_Datatype recvtype,
                                 int root, MPI_Comm comm);
OMPI_DECLSPEC  int PMPI_Iscatterv(const void *sendbuf, const int sendcounts[], const int displs[], MPI_Datatype sendtype,
                                  void *recvbuf, int recvcount, MPI_Datatype recvtype,
                                  int root, MPI_Comm comm, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Scatterv_init(const void *sendbuf, const int sendcounts[], const int displs[], MPI_Datatype sendtype,
                                      void *recvbuf, int recvcount, MPI_Datatype recvtype,
                                      int root, MPI_Comm comm, MPI_Info info, MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Send_init(const void *buf, int count, MPI_Datatype datatype,
                                  int dest, int tag, MPI_Comm comm,
                                  MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Send(const void *buf, int count, MPI_Datatype datatype, int dest,
                             int tag, MPI_Comm comm);
OMPI_DECLSPEC  int PMPI_Sendrecv(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                 int dest, int sendtag, void *recvbuf, int recvcount,
                                 MPI_Datatype recvtype, int source, int recvtag,
                                 MPI_Comm comm,  MPI_Status *status);
OMPI_DECLSPEC  int PMPI_Sendrecv_replace(void * buf, int count, MPI_Datatype datatype,
                                         int dest, int sendtag, int source, int recvtag,
                                         MPI_Comm comm, MPI_Status *status);
OMPI_DECLSPEC  MPI_Fint PMPI_Session_c2f (const MPI_Session session);
OMPI_DECLSPEC  int PMPI_Session_call_errhandler(MPI_Session session, int errorcode);
OMPI_DECLSPEC  int PMPI_Session_create_errhandler (MPI_Session_errhandler_function *session_errhandler_fn,
                                                   MPI_Errhandler *errhandler);
OMPI_DECLSPEC  int PMPI_Session_finalize (MPI_Session *session);
OMPI_DECLSPEC  int PMPI_Session_get_errhandler(MPI_Session session, MPI_Errhandler *erhandler);
OMPI_DECLSPEC  int PMPI_Session_get_info (MPI_Session session, MPI_Info *info_used);
OMPI_DECLSPEC  int PMPI_Session_get_num_psets (MPI_Session session, MPI_Info info, int *npset_names);
OMPI_DECLSPEC  int PMPI_Session_get_nth_pset (MPI_Session session, MPI_Info info, int n, int *len, char *pset_name);
OMPI_DECLSPEC  int PMPI_Session_get_pset_info (MPI_Session session, const char *pset_name, MPI_Info *info_used);
OMPI_DECLSPEC  int PMPI_Session_init (MPI_Info info, MPI_Errhandler errhandler,
                                     MPI_Session *session);
OMPI_DECLSPEC  MPI_Session PMPI_Session_f2c (MPI_Fint session);
OMPI_DECLSPEC  int PMPI_Session_set_errhandler(MPI_Session session, MPI_Errhandler erhandler);
OMPI_DECLSPEC  int PMPI_Session_set_info (MPI_Session session, MPI_Info info);
OMPI_DECLSPEC  int PMPI_Ssend_init(const void *buf, int count, MPI_Datatype datatype,
                                   int dest, int tag, MPI_Comm comm,
                                   MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Ssend(const void *buf, int count, MPI_Datatype datatype, int dest,
                              int tag, MPI_Comm comm);
OMPI_DECLSPEC  int PMPI_Start(MPI_Request *request);
OMPI_DECLSPEC  int PMPI_Startall(int count, MPI_Request array_of_requests[]);
OMPI_DECLSPEC  int PMPI_Status_c2f(const MPI_Status *c_status, MPI_Fint *f_status);
OMPI_DECLSPEC  int PMPI_Status_c2f08(const MPI_Status *c_status, MPI_F08_status *f08_status);
OMPI_DECLSPEC  int PMPI_Status_f082f(const MPI_F08_status *f08_status, MPI_Fint *f_status);
OMPI_DECLSPEC  int PMPI_Status_f082c(const MPI_F08_status *f08_status, MPI_Status *c_status);
OMPI_DECLSPEC  int PMPI_Status_f2c(const MPI_Fint *f_status, MPI_Status *c_status);
OMPI_DECLSPEC  int PMPI_Status_f2f08(const MPI_Fint *f_status, MPI_F08_status *f08_status);
OMPI_DECLSPEC  int PMPI_Status_set_cancelled(MPI_Status *status, int flag);
OMPI_DECLSPEC  int PMPI_Status_set_elements(MPI_Status *status, MPI_Datatype datatype,
                                            int count);
OMPI_DECLSPEC  int PMPI_Status_set_elements_x(MPI_Status *status, MPI_Datatype datatype,
                                              MPI_Count count);
OMPI_DECLSPEC  int PMPI_Testall(int count, MPI_Request array_of_requests[], int *flag,
                                MPI_Status array_of_statuses[]);
OMPI_DECLSPEC  int PMPI_Testany(int count, MPI_Request array_of_requests[], int *index, int *flag, MPI_Status *status);
OMPI_DECLSPEC  int PMPI_Test(MPI_Request *request, int *flag, MPI_Status *status);
OMPI_DECLSPEC  int PMPI_Test_cancelled(const MPI_Status *status, int *flag);
OMPI_DECLSPEC  int PMPI_Testsome(int incount, MPI_Request array_of_requests[],
                                 int *outcount, int array_of_indices[],
                                 MPI_Status array_of_statuses[]);
OMPI_DECLSPEC  int PMPI_Topo_test(MPI_Comm comm, int *status);
OMPI_DECLSPEC  MPI_Fint PMPI_Type_c2f(MPI_Datatype datatype);
OMPI_DECLSPEC  int PMPI_Type_commit(MPI_Datatype *type);
OMPI_DECLSPEC  int PMPI_Type_contiguous(int count, MPI_Datatype oldtype,
                                        MPI_Datatype *newtype);
OMPI_DECLSPEC  int PMPI_Type_create_darray(int size, int rank, int ndims,
                                           const int gsize_array[], const int distrib_array[],
                                           const int darg_array[], const int psize_array[],
                                           int order, MPI_Datatype oldtype,
                                           MPI_Datatype *newtype);
OMPI_DECLSPEC  int PMPI_Type_create_f90_complex(int p, int r, MPI_Datatype *newtype);
OMPI_DECLSPEC  int PMPI_Type_create_f90_integer(int r, MPI_Datatype *newtype);
OMPI_DECLSPEC  int PMPI_Type_create_f90_real(int p, int r, MPI_Datatype *newtype);
OMPI_DECLSPEC  int PMPI_Type_create_hindexed(int count, const int array_of_blocklengths[],
                                             const MPI_Aint array_of_displacements[],
                                             MPI_Datatype oldtype,
                                             MPI_Datatype *newtype);
OMPI_DECLSPEC  int PMPI_Type_create_hvector(int count, int blocklength, MPI_Aint stride,
                                            MPI_Datatype oldtype,
                                            MPI_Datatype *newtype);
OMPI_DECLSPEC  int PMPI_Type_create_keyval(MPI_Type_copy_attr_function *type_copy_attr_fn,
                                           MPI_Type_delete_attr_function *type_delete_attr_fn,
                                           int *type_keyval, void *extra_state);
OMPI_DECLSPEC  int PMPI_Type_create_hindexed_block(int count, int blocklength,
                                                   const MPI_Aint array_of_displacements[],
                                                   MPI_Datatype oldtype,
                                                   MPI_Datatype *newtype);
OMPI_DECLSPEC  int PMPI_Type_create_indexed_block(int count, int blocklength,
                                                  const int array_of_displacements[],
                                                  MPI_Datatype oldtype,
                                                  MPI_Datatype *newtype);
OMPI_DECLSPEC  int PMPI_Type_create_struct(int count, const int array_of_block_lengths[],
                                           const MPI_Aint array_of_displacements[],
                                           const MPI_Datatype array_of_types[],
                                           MPI_Datatype *newtype);
OMPI_DECLSPEC  int PMPI_Type_create_subarray(int ndims, const int size_array[], const int subsize_array[],
                                             const int start_array[], int order,
                                             MPI_Datatype oldtype, MPI_Datatype *newtype);
OMPI_DECLSPEC  int PMPI_Type_create_resized(MPI_Datatype oldtype, MPI_Aint lb,
                                            MPI_Aint extent, MPI_Datatype *newtype);
OMPI_DECLSPEC  int PMPI_Type_delete_attr(MPI_Datatype type, int type_keyval);
OMPI_DECLSPEC  int PMPI_Type_dup(MPI_Datatype type, MPI_Datatype *newtype);
OMPI_DECLSPEC  int PMPI_Type_free(MPI_Datatype *type);
OMPI_DECLSPEC  int PMPI_Type_free_keyval(int *type_keyval);
OMPI_DECLSPEC  MPI_Datatype PMPI_Type_f2c(MPI_Fint datatype);
OMPI_DECLSPEC  int PMPI_Type_get_attr(MPI_Datatype type, int type_keyval,
                                      void *attribute_val, int *flag);
OMPI_DECLSPEC  int PMPI_Type_get_contents(MPI_Datatype mtype, int max_integers,
                                          int max_addresses, int max_datatypes,
                                          int array_of_integers[],
                                          MPI_Aint array_of_addresses[],
                                          MPI_Datatype array_of_datatypes[]);
OMPI_DECLSPEC  int PMPI_Type_get_envelope(MPI_Datatype type, int *num_integers,
                                          int *num_addresses, int *num_datatypes,
                                          int *combiner);
OMPI_DECLSPEC  int PMPI_Type_get_extent(MPI_Datatype type, MPI_Aint *lb,
                                        MPI_Aint *extent);
OMPI_DECLSPEC  int PMPI_Type_get_extent_x(MPI_Datatype type, MPI_Count *lb,
                                          MPI_Count *extent);
OMPI_DECLSPEC  int PMPI_Type_get_name(MPI_Datatype type, char *type_name,
                                      int *resultlen);
OMPI_DECLSPEC  int PMPI_Type_get_true_extent(MPI_Datatype datatype, MPI_Aint *true_lb,
                                             MPI_Aint *true_extent);
OMPI_DECLSPEC  int PMPI_Type_get_true_extent_x(MPI_Datatype datatype, MPI_Count *true_lb,
                                               MPI_Count *true_extent);
OMPI_DECLSPEC  int PMPI_Type_indexed(int count, const int array_of_blocklengths[],
                                     const int array_of_displacements[],
                                     MPI_Datatype oldtype, MPI_Datatype *newtype);
OMPI_DECLSPEC  int PMPI_Type_match_size(int typeclass, int size, MPI_Datatype *type);
OMPI_DECLSPEC  int PMPI_Type_set_attr(MPI_Datatype type, int type_keyval,
                                      void *attr_val);
OMPI_DECLSPEC  int PMPI_Type_set_name(MPI_Datatype type, const char *type_name);
OMPI_DECLSPEC  int PMPI_Type_size(MPI_Datatype type, int *size);
OMPI_DECLSPEC  int PMPI_Type_size_x(MPI_Datatype type, MPI_Count *size);
OMPI_DECLSPEC  int PMPI_Type_vector(int count, int blocklength, int stride,
                                    MPI_Datatype oldtype, MPI_Datatype *newtype);
OMPI_DECLSPEC  int PMPI_Unpack(const void *inbuf, int insize, int *position,
                               void *outbuf, int outcount, MPI_Datatype datatype,
                               MPI_Comm comm);
OMPI_DECLSPEC  int PMPI_Unpublish_name(const char *service_name, MPI_Info info,
                                       const char *port_name);
OMPI_DECLSPEC  int PMPI_Unpack_external (const char datarep[], const void *inbuf, MPI_Aint insize,
                                         MPI_Aint *position, void *outbuf, int outcount,
                                         MPI_Datatype datatype);
OMPI_DECLSPEC  int PMPI_Waitall(int count, MPI_Request array_of_requests[],
                                MPI_Status array_of_statuses[]);
OMPI_DECLSPEC  int PMPI_Waitany(int count, MPI_Request array_of_requests[],
                                int *index, MPI_Status *status);
OMPI_DECLSPEC  int PMPI_Wait(MPI_Request *request, MPI_Status *status);
OMPI_DECLSPEC  int PMPI_Waitsome(int incount, MPI_Request array_of_requests[],
                                 int *outcount, int array_of_indices[],
                                 MPI_Status array_of_statuses[]);
OMPI_DECLSPEC  int PMPI_Win_allocate(MPI_Aint size, int disp_unit, MPI_Info info,
                                     MPI_Comm comm, void *baseptr, MPI_Win *win);
OMPI_DECLSPEC  int PMPI_Win_allocate_shared(MPI_Aint size, int disp_unit, MPI_Info info,
                                            MPI_Comm comm, void *baseptr, MPI_Win *win);
OMPI_DECLSPEC  int PMPI_Win_attach(MPI_Win win, void *base, MPI_Aint size);
OMPI_DECLSPEC  MPI_Fint PMPI_Win_c2f(MPI_Win win);
OMPI_DECLSPEC  int PMPI_Win_call_errhandler(MPI_Win win, int errorcode);
OMPI_DECLSPEC  int PMPI_Win_complete(MPI_Win win);
OMPI_DECLSPEC  int PMPI_Win_create(void *base, MPI_Aint size, int disp_unit,
                                   MPI_Info info, MPI_Comm comm, MPI_Win *win);
OMPI_DECLSPEC  int PMPI_Win_create_dynamic(MPI_Info info, MPI_Comm comm, MPI_Win *win);
OMPI_DECLSPEC  int PMPI_Win_create_errhandler(MPI_Win_errhandler_function *function,
                                              MPI_Errhandler *errhandler);
OMPI_DECLSPEC  int PMPI_Win_create_keyval(MPI_Win_copy_attr_function *win_copy_attr_fn,
                                          MPI_Win_delete_attr_function *win_delete_attr_fn,
                                          int *win_keyval, void *extra_state);
OMPI_DECLSPEC  int PMPI_Win_delete_attr(MPI_Win win, int win_keyval);
OMPI_DECLSPEC  int PMPI_Win_detach(MPI_Win win, const void *base);
OMPI_DECLSPEC  MPI_Win PMPI_Win_f2c(MPI_Fint win);
OMPI_DECLSPEC  int PMPI_Win_fence(int mpi_assert, MPI_Win win);
OMPI_DECLSPEC  int PMPI_Win_flush(int rank, MPI_Win win);
OMPI_DECLSPEC  int PMPI_Win_flush_all(MPI_Win win);
OMPI_DECLSPEC  int PMPI_Win_flush_local(int rank, MPI_Win win);
OMPI_DECLSPEC  int PMPI_Win_flush_local_all(MPI_Win win);
OMPI_DECLSPEC  int PMPI_Win_free(MPI_Win *win);
OMPI_DECLSPEC  int PMPI_Win_free_keyval(int *win_keyval);
OMPI_DECLSPEC  int PMPI_Win_get_attr(MPI_Win win, int win_keyval,
                                     void *attribute_val, int *flag);
OMPI_DECLSPEC  int PMPI_Win_get_errhandler(MPI_Win win, MPI_Errhandler *errhandler);
OMPI_DECLSPEC  int PMPI_Win_get_group(MPI_Win win, MPI_Group *group);
OMPI_DECLSPEC  int PMPI_Win_get_info(MPI_Win win, MPI_Info *info_used);
OMPI_DECLSPEC  int PMPI_Win_get_name(MPI_Win win, char *win_name, int *resultlen);
OMPI_DECLSPEC  int PMPI_Win_lock(int lock_type, int rank, int mpi_assert, MPI_Win win);
OMPI_DECLSPEC  int PMPI_Win_lock_all(int mpi_assert, MPI_Win win);
OMPI_DECLSPEC  int PMPI_Win_post(MPI_Group group, int mpi_assert, MPI_Win win);
OMPI_DECLSPEC  int PMPI_Win_set_attr(MPI_Win win, int win_keyval, void *attribute_val);
OMPI_DECLSPEC  int PMPI_Win_set_errhandler(MPI_Win win, MPI_Errhandler errhandler);
OMPI_DECLSPEC  int PMPI_Win_set_info(MPI_Win win, MPI_Info info);
OMPI_DECLSPEC  int PMPI_Win_set_name(MPI_Win win, const char *win_name);
OMPI_DECLSPEC  int PMPI_Win_shared_query(MPI_Win win, int rank, MPI_Aint *size, int *disp_unit, void *baseptr);
OMPI_DECLSPEC  int PMPI_Win_start(MPI_Group group, int mpi_assert, MPI_Win win);
OMPI_DECLSPEC  int PMPI_Win_sync(MPI_Win win);
OMPI_DECLSPEC  int PMPI_Win_test(MPI_Win win, int *flag);
OMPI_DECLSPEC  int PMPI_Win_unlock(int rank, MPI_Win win);
OMPI_DECLSPEC  int PMPI_Win_unlock_all(MPI_Win win);
OMPI_DECLSPEC  int PMPI_Win_wait(MPI_Win win);
OMPI_DECLSPEC  double PMPI_Wtick(void);
OMPI_DECLSPEC  double PMPI_Wtime(void);
OMPI_DECLSPEC  int PMPI_T_init_thread (int required, int *provided);
OMPI_DECLSPEC  int PMPI_T_finalize (void);
OMPI_DECLSPEC  int PMPI_T_cvar_get_num (int *num_cvar);
OMPI_DECLSPEC  int PMPI_T_cvar_get_info (int cvar_index, char *name, int *name_len,
                                         int *verbosity, MPI_Datatype *datatype,
                                         MPI_T_enum *enumtype, char *desc,
                                         int *desc_len, int *bind, int *scope);
OMPI_DECLSPEC  int PMPI_T_cvar_get_index (const char *name, int *cvar_index);
OMPI_DECLSPEC  int PMPI_T_cvar_handle_alloc (int cvar_index, void *obj_handle,
                                            MPI_T_cvar_handle *handle, int *count);
OMPI_DECLSPEC  int PMPI_T_cvar_handle_free (MPI_T_cvar_handle *handle);
OMPI_DECLSPEC  int PMPI_T_cvar_read (MPI_T_cvar_handle handle, void *buf);
OMPI_DECLSPEC  int PMPI_T_cvar_write (MPI_T_cvar_handle handle, const void *buf);
OMPI_DECLSPEC  int PMPI_T_category_get_num(int *num_cat);
OMPI_DECLSPEC  int PMPI_T_category_get_info(int cat_index, char *name, int *name_len,
                                            char *desc, int *desc_len, int *num_cvars,
                                            int *num_pvars, int *num_categories);
OMPI_DECLSPEC  int PMPI_T_category_get_index (const char *name, int *category_index);
OMPI_DECLSPEC  int PMPI_T_category_get_cvars(int cat_index, int len, int indices[]);
OMPI_DECLSPEC  int PMPI_T_category_get_pvars(int cat_index, int len, int indices[]);
OMPI_DECLSPEC  int PMPI_T_category_get_categories(int cat_index, int len, int indices[]);
OMPI_DECLSPEC  int PMPI_T_category_changed(int *stamp);

OMPI_DECLSPEC  int PMPI_T_pvar_get_num(int *num_pvar);
OMPI_DECLSPEC  int PMPI_T_pvar_get_info(int pvar_index, char *name, int *name_len,
                                        int *verbosity, int *var_class, MPI_Datatype *datatype,
                                        MPI_T_enum *enumtype, char *desc, int *desc_len, int *bind,
                                        int *readonly, int *continuous, int *atomic);
OMPI_DECLSPEC  int PMPI_T_pvar_get_index (const char *name, int var_class, int *pvar_index);
OMPI_DECLSPEC  int PMPI_T_pvar_session_create(MPI_T_pvar_session *session);
OMPI_DECLSPEC  int PMPI_T_pvar_session_free(MPI_T_pvar_session *session);
OMPI_DECLSPEC  int PMPI_T_pvar_handle_alloc(MPI_T_pvar_session session, int pvar_index,
                                            void *obj_handle, MPI_T_pvar_handle *handle, int *count);
OMPI_DECLSPEC  int PMPI_T_pvar_handle_free(MPI_T_pvar_session session, MPI_T_pvar_handle *handle);
OMPI_DECLSPEC  int PMPI_T_pvar_start(MPI_T_pvar_session session, MPI_T_pvar_handle handle);
OMPI_DECLSPEC  int PMPI_T_pvar_stop(MPI_T_pvar_session session, MPI_T_pvar_handle handle);
OMPI_DECLSPEC  int PMPI_T_pvar_read(MPI_T_pvar_session session, MPI_T_pvar_handle handle,
                                    void *buf);
OMPI_DECLSPEC  int PMPI_T_pvar_write(MPI_T_pvar_session session, MPI_T_pvar_handle handle,
                                     const void *buf);
OMPI_DECLSPEC  int PMPI_T_pvar_reset(MPI_T_pvar_session session, MPI_T_pvar_handle handle);
OMPI_DECLSPEC  int PMPI_T_pvar_readreset(MPI_T_pvar_session session, MPI_T_pvar_handle handle,
                                         void *buf);
OMPI_DECLSPEC  int PMPI_T_enum_get_info(MPI_T_enum enumtype, int *num, char *name, int *name_len);
OMPI_DECLSPEC  int PMPI_T_enum_get_item(MPI_T_enum enumtype, int index, int *value, char *name,
                                        int *name_len);

  /*
   * Tool MPI API
   */
OMPI_DECLSPEC  int MPI_T_init_thread (int required, int *provided);
OMPI_DECLSPEC  int MPI_T_finalize (void);
OMPI_DECLSPEC  int MPI_T_cvar_get_num (int *num_cvar);
OMPI_DECLSPEC  int MPI_T_cvar_get_info (int cvar_index, char *name, int *name_len,
                                        int *verbosity, MPI_Datatype *datatype,
                                        MPI_T_enum *enumtype, char *desc,
                                        int *desc_len, int *bind, int *scope);
OMPI_DECLSPEC  int MPI_T_cvar_get_index (const char *name, int *cvar_index);
OMPI_DECLSPEC  int MPI_T_cvar_handle_alloc (int cvar_index, void *obj_handle,
                                            MPI_T_cvar_handle *handle, int *count);
OMPI_DECLSPEC  int MPI_T_cvar_handle_free (MPI_T_cvar_handle *handle);
OMPI_DECLSPEC  int MPI_T_cvar_read (MPI_T_cvar_handle handle, void *buf);
OMPI_DECLSPEC  int MPI_T_cvar_write (MPI_T_cvar_handle handle, const void *buf);
OMPI_DECLSPEC  int MPI_T_category_get_num(int *num_cat);
OMPI_DECLSPEC  int MPI_T_category_get_info(int cat_index, char *name, int *name_len,
                                           char *desc, int *desc_len, int *num_cvars,
                                           int *num_pvars, int *num_categories);
OMPI_DECLSPEC  int MPI_T_category_get_index (const char *name, int *category_index);
OMPI_DECLSPEC  int MPI_T_category_get_cvars(int cat_index, int len, int indices[]);
OMPI_DECLSPEC  int MPI_T_category_get_pvars(int cat_index, int len, int indices[]);
OMPI_DECLSPEC  int MPI_T_category_get_categories(int cat_index, int len, int indices[]);
OMPI_DECLSPEC  int MPI_T_category_changed(int *stamp);

OMPI_DECLSPEC  int MPI_T_pvar_get_num(int *num_pvar);
OMPI_DECLSPEC  int MPI_T_pvar_get_info(int pvar_index, char *name, int *name_len,
                                       int *verbosity, int *var_class, MPI_Datatype *datatype,
                                       MPI_T_enum *enumtype, char *desc, int *desc_len, int *bind,
                                       int *readonly, int *continuous, int *atomic);
OMPI_DECLSPEC  int MPI_T_pvar_get_index (const char *name, int var_class, int *pvar_index);
OMPI_DECLSPEC  int MPI_T_pvar_session_create(MPI_T_pvar_session *session);
OMPI_DECLSPEC  int MPI_T_pvar_session_free(MPI_T_pvar_session *session);
OMPI_DECLSPEC  int MPI_T_pvar_handle_alloc(MPI_T_pvar_session session, int pvar_index,
                                           void *obj_handle, MPI_T_pvar_handle *handle, int *count);
OMPI_DECLSPEC  int MPI_T_pvar_handle_free(MPI_T_pvar_session session, MPI_T_pvar_handle *handle);
OMPI_DECLSPEC  int MPI_T_pvar_start(MPI_T_pvar_session session, MPI_T_pvar_handle handle);
OMPI_DECLSPEC  int MPI_T_pvar_stop(MPI_T_pvar_session session, MPI_T_pvar_handle handle);
OMPI_DECLSPEC  int MPI_T_pvar_read(MPI_T_pvar_session session, MPI_T_pvar_handle handle,
                                   void *buf);
OMPI_DECLSPEC  int MPI_T_pvar_write(MPI_T_pvar_session session, MPI_T_pvar_handle handle,
                                    const void *buf);
OMPI_DECLSPEC  int MPI_T_pvar_reset(MPI_T_pvar_session session, MPI_T_pvar_handle handle);
OMPI_DECLSPEC  int MPI_T_pvar_readreset(MPI_T_pvar_session session, MPI_T_pvar_handle handle,
                                        void *buf);
OMPI_DECLSPEC  int MPI_T_enum_get_info(MPI_T_enum enumtype, int *num, char *name, int *name_len);
OMPI_DECLSPEC  int MPI_T_enum_get_item(MPI_T_enum enumtype, int index, int *value, char *name,
                                       int *name_len);
/*
 * Deprecated prototypes.  Usage is discouraged, as these may be
 * deleted in future versions of the MPI Standard.
 */
OMPI_DECLSPEC  int MPI_Attr_delete(MPI_Comm comm, int keyval)
            __mpi_interface_deprecated__("MPI_Attr_delete was deprecated in MPI-2.0; use MPI_Comm_delete_attr instead");
OMPI_DECLSPEC  int PMPI_Attr_delete(MPI_Comm comm, int keyval)
            __mpi_interface_deprecated__("PMPI_Attr_delete was deprecated in MPI-2.0; use PMPI_Comm_delete_attr instead");
OMPI_DECLSPEC  int MPI_Attr_get(MPI_Comm comm, int keyval, void *attribute_val, int *flag)
            __mpi_interface_deprecated__("MPI_Attr_get was deprecated in MPI-2.0; use MPI_Comm_get_attr instead");
OMPI_DECLSPEC  int PMPI_Attr_get(MPI_Comm comm, int keyval, void *attribute_val, int *flag)
            __mpi_interface_deprecated__("PMPI_Attr_get was deprecated in MPI-2.0; use PMPI_Comm_get_attr instead");
OMPI_DECLSPEC  int MPI_Attr_put(MPI_Comm comm, int keyval, void *attribute_val)
            __mpi_interface_deprecated__("MPI_Attr_put was deprecated in MPI-2.0; use MPI_Comm_set_attr instead");
OMPI_DECLSPEC  int PMPI_Attr_put(MPI_Comm comm, int keyval, void *attribute_val)
    __mpi_interface_deprecated__("PMPI_Attr_put was deprecated in MPI-2.0; use PMPI_Comm_set_attr instead");
#if MPI_VERSION >= 4
OMPI_DECLSPEC  int MPI_Info_get(MPI_Info info, const char *key, int valuelen,
                                char *value, int *flag)
            __mpi_interface_deprecated__("MPI_Info_get was deprecated in MPI-4.0; use MPI_Info_get_string instead");
OMPI_DECLSPEC  int PMPI_Info_get(MPI_Info info, const char *key, int valuelen,
                                 char *value, int *flag)
            __mpi_interface_deprecated__("PMPI_Info_get was deprecated in MPI-4.0; use PMPI_Info_get_string instead");
OMPI_DECLSPEC  int MPI_Info_get_valuelen(MPI_Info info, const char *key, int *valuelen,
                                         int *flag)
            __mpi_interface_deprecated__("MPI_Info_get_valuelen was deprecated in MPI-4.0; use MPI_Info_get_string instead");
OMPI_DECLSPEC  int PMPI_Info_get_valuelen(MPI_Info info, const char *key, int *valuelen,
                                          int *flag)
            __mpi_interface_deprecated__("PMPI_Info_get_valuelen was deprecated in MPI-4.0; use PMPI_Info_get_string instead");
#endif

/*
 * Even though MPI_Copy_function and MPI_Delete_function are
 * deprecated, we do not use the attributes marking them as such,
 * because otherwise the compiler will warn for all the functions that
 * are declared using them (e.g., MPI_Keyval_create).
 */
typedef int (MPI_Copy_function)(MPI_Comm, int, void *,
                                void *, void *, int *);
/* MPI_Copy_function was deprecated in MPI-2.0; use MPI_Comm_copy_attr_function instead. */
typedef int (MPI_Delete_function)(MPI_Comm, int, void *, void *);
/* MPI_Delete_function was deprecated in MPI-2.0; use MPI_Comm_delete_attr_function instead. */
OMPI_DECLSPEC  int MPI_Keyval_create(MPI_Copy_function *copy_fn,
                                     MPI_Delete_function *delete_fn,
                                     int *keyval, void *extra_state)
            __mpi_interface_deprecated__("MPI_Keyval_create was deprecated in MPI-2.0; use MPI_Comm_create_keyval instead.");
OMPI_DECLSPEC  int PMPI_Keyval_create(MPI_Copy_function *copy_fn,
                                      MPI_Delete_function *delete_fn,
                                      int *keyval, void *extra_state)
            __mpi_interface_deprecated__("PMPI_Keyval_create was deprecated in MPI-2.0; use PMPI_Comm_create_keyval instead.");
OMPI_DECLSPEC  int MPI_Keyval_free(int *keyval)
            __mpi_interface_deprecated__("MPI_Keyval_free was deprecated in MPI-2.0; MPI_Comm_free_keyval instead.");
OMPI_DECLSPEC  int PMPI_Keyval_free(int *keyval)
            __mpi_interface_deprecated__("PMPI_Keyval_free was deprecated in MPI-2.0; PMPI_Comm_free_keyval instead.");

#if !defined(OMPI_COMPILING_FORTRAN_WRAPPERS)
#define MPI_DUP_FN OMPI_C_MPI_DUP_FN
#endif
OMPI_DECLSPEC int OMPI_C_MPI_DUP_FN( MPI_Comm comm, int comm_keyval,
                                     void* extra_state,
                                     void* attribute_val_in,
                                     void* attribute_val_out,
                                     int* flag )
            __mpi_interface_deprecated__("MPI_DUP_FN was deprecated in MPI-2.0; use MPI_COMM_DUP_FN instead.");

#if !defined(OMPI_COMPILING_FORTRAN_WRAPPERS)
#define MPI_NULL_COPY_FN OMPI_C_MPI_NULL_COPY_FN
#endif
OMPI_DECLSPEC int OMPI_C_MPI_NULL_COPY_FN( MPI_Comm comm, int comm_keyval,
                                           void* extra_state,
                                           void* attribute_val_in,
                                           void* attribute_val_out,
                                           int* flag )
            __mpi_interface_deprecated__("MPI_NULL_COPY_FN was deprecated in MPI-2.0; use MPI_COMM_NULL_COPY_FN instead.");

#if !defined(OMPI_COMPILING_FORTRAN_WRAPPERS)
#define MPI_NULL_DELETE_FN OMPI_C_MPI_NULL_DELETE_FN
#endif
OMPI_DECLSPEC int OMPI_C_MPI_NULL_DELETE_FN( MPI_Comm comm, int comm_keyval,
                                             void* attribute_val_out,
                                             void* extra_state )
            __mpi_interface_deprecated__("MPI_NULL_DELETE_FN was deprecated in MPI-2.0; use MPI_COMM_NULL_DELETE_FN instead.");

#if (!OMPI_OMIT_MPI1_COMPAT_DECLS)
/*
 * Removed typedefs.  These typedefs are only available if Open MPI
 * was configured with --enable-mpi1-compatibility.
 *
 * These typedefs were formally removed from the MPI specification
 * and should no longer be used in MPI applications.
 *
 * Even though MPI_Handler_function is removed, we do not use the
 * attributes marking it as such, because otherwise the compiler
 * will warn for all the functions that are declared using them
 * (e.g., MPI_Errhandler_create).
 */
typedef void (MPI_Handler_function)(MPI_Comm *, int *, ...);
/* MPI_Handler_function was removed in MPI-3.0; use MPI_Comm_use_errhandler_function instead. */

/*
 * Removed prototypes.  These prototypes are only available if Open
 * MPI was configured with --enable-mpi1-compatibility.
 *
 * These functions were formally removed from the MPI specification
 * and should no longer be used in MPI applications.
 */
OMPI_DECLSPEC  int MPI_Address(void *location, MPI_Aint *address)
                   __mpi_interface_removed__(MPI_Address, MPI_Get_address);
OMPI_DECLSPEC  int PMPI_Address(void *location, MPI_Aint *address)
                   __mpi_interface_removed__(PMPI_Address, PMPI_Get_address);
OMPI_DECLSPEC  int MPI_Errhandler_create(MPI_Handler_function *function,
                                         MPI_Errhandler *errhandler)
                   __mpi_interface_removed__(MPI_Errhandler_create, MPI_Comm_create_errhandler);
OMPI_DECLSPEC  int PMPI_Errhandler_create(MPI_Handler_function *function,
                                          MPI_Errhandler *errhandler)
                   __mpi_interface_removed__(PMPI_Errhandler_create, PMPI_Comm_create_errhandler);
OMPI_DECLSPEC  int MPI_Errhandler_get(MPI_Comm comm, MPI_Errhandler *errhandler)
                   __mpi_interface_removed__(MPI_Errhandler_get, MPI_Comm_get_errhandler);
OMPI_DECLSPEC  int PMPI_Errhandler_get(MPI_Comm comm, MPI_Errhandler *errhandler)
                   __mpi_interface_removed__(PMPI_Errhandler_get, PMPI_Comm_get_errhandler);
OMPI_DECLSPEC  int MPI_Errhandler_set(MPI_Comm comm, MPI_Errhandler errhandler)
                   __mpi_interface_removed__(MPI_Errhandler_set, MPI_Comm_set_errhandler);
OMPI_DECLSPEC  int PMPI_Errhandler_set(MPI_Comm comm, MPI_Errhandler errhandler)
                   __mpi_interface_removed__(PMPI_Errhandler_set, PMPI_Comm_set_errhandler);
OMPI_DECLSPEC  int MPI_Type_extent(MPI_Datatype type, MPI_Aint *extent)
                   __mpi_interface_removed__(MPI_Type_extent, MPI_Type_get_extent);
OMPI_DECLSPEC  int PMPI_Type_extent(MPI_Datatype type, MPI_Aint *extent)
                   __mpi_interface_removed__(PMPI_Type_extent, PMPI_Type_get_extent);
OMPI_DECLSPEC  int MPI_Type_hindexed(int count, int array_of_blocklengths[],
                                     MPI_Aint array_of_displacements[],
                                     MPI_Datatype oldtype, MPI_Datatype *newtype)
                   __mpi_interface_removed__(MPI_Type_hindexed, MPI_Type_create_hindexed);
OMPI_DECLSPEC  int PMPI_Type_hindexed(int count, int array_of_blocklengths[],
                                      MPI_Aint array_of_displacements[],
                                      MPI_Datatype oldtype, MPI_Datatype *newtype)
                   __mpi_interface_removed__(PMPI_Type_hindexed, PMPI_Type_create_hindexed);
OMPI_DECLSPEC  int MPI_Type_hvector(int count, int blocklength, MPI_Aint stride,
                                    MPI_Datatype oldtype, MPI_Datatype *newtype)
                   __mpi_interface_removed__(MPI_Type_hvector, MPI_Type_create_hvector);
OMPI_DECLSPEC  int PMPI_Type_hvector(int count, int blocklength, MPI_Aint stride,
                                     MPI_Datatype oldtype, MPI_Datatype *newtype)
                   __mpi_interface_removed__(PMPI_Type_hvector, PMPI_Type_create_hvector);
OMPI_DECLSPEC  int MPI_Type_lb(MPI_Datatype type, MPI_Aint *lb)
                   __mpi_interface_removed__(MPI_Type_lb, MPI_Type_get_extent);
OMPI_DECLSPEC  int PMPI_Type_lb(MPI_Datatype type, MPI_Aint *lb)
                   __mpi_interface_removed__(PMPI_Type_lb, PMPI_Type_get_extent);
OMPI_DECLSPEC  int MPI_Type_struct(int count, int array_of_blocklengths[],
                                   MPI_Aint array_of_displacements[],
                                   MPI_Datatype array_of_types[],
                                   MPI_Datatype *newtype)
                   __mpi_interface_removed__(MPI_Type_struct, MPI_Type_create_struct);
OMPI_DECLSPEC  int PMPI_Type_struct(int count, int array_of_blocklengths[],
                                    MPI_Aint array_of_displacements[],
                                    MPI_Datatype array_of_types[],
                                    MPI_Datatype *newtype)
                   __mpi_interface_removed__(PMPI_Type_struct, PMPI_Type_create_struct);
OMPI_DECLSPEC  int MPI_Type_ub(MPI_Datatype mtype, MPI_Aint *ub)
                   __mpi_interface_removed__(MPI_Type_ub, MPI_Type_get_extent);
OMPI_DECLSPEC  int PMPI_Type_ub(MPI_Datatype mtype, MPI_Aint *ub)
                   __mpi_interface_removed__(PMPI_Type_ub, PMPI_Type_get_extent);
#endif /* !OMPI_OMIT_MPI1_COMPAT_DECLS */

#if OMPI_REMOVED_USE_STATIC_ASSERT
#define MPI_Address(...)  THIS_FUNCTION_WAS_REMOVED_IN_MPI30(MPI_Address, MPI_Get_address)
#define MPI_Errhandler_create(...)  THIS_FUNCTION_WAS_REMOVED_IN_MPI30(MPI_Errhandler_create, MPI_Comm_create_errhandler)
#define MPI_Errhandler_get(...)  THIS_FUNCTION_WAS_REMOVED_IN_MPI30(MPI_Errhandler_get, MPI_Comm_get_errhandler)
#define MPI_Errhandler_set(...)  THIS_FUNCTION_WAS_REMOVED_IN_MPI30(MPI_Errhandler_set, MPI_Comm_set_errhandler)
#define MPI_Type_extent(...)  THIS_FUNCTION_WAS_REMOVED_IN_MPI30(MPI_Type_extent, MPI_Type_get_extent)
#define MPI_Type_hindexed(...)  THIS_FUNCTION_WAS_REMOVED_IN_MPI30(MPI_Type_hindexed, MPI_Type_create_hindexed)
#define MPI_Type_hvector(...)  THIS_FUNCTION_WAS_REMOVED_IN_MPI30(MPI_Type_hvector, MPI_Type_create_hvector)
#define MPI_Type_lb(...)  THIS_FUNCTION_WAS_REMOVED_IN_MPI30(MPI_Type_lb, MPI_Type_get_extent)
#define MPI_Type_struct(...)  THIS_FUNCTION_WAS_REMOVED_IN_MPI30(MPI_Type_struct, MPI_Type_create_struct)
#define MPI_Type_ub(...)  THIS_FUNCTION_WAS_REMOVED_IN_MPI30(MPI_Type_ub, MPI_Type_get_extent)
#endif

#if defined(c_plusplus) || defined(__cplusplus)
}
#endif

#endif /* OMPI_MPI_H */
