/* -*- Mode: C; c-basic-offset:4 ; -*- */
/*  
 *  (C) 2001 by Argonne National Laboratory.
 *      See COPYRIGHT in top-level directory.
 *
 * This file is automatically generated by buildiface 
 * DO NOT EDIT
 */
#include "mpi_fortimpl.h"


/* Begin MPI profiling block */
#if defined(USE_WEAK_SYMBOLS) && !defined(USE_ONLY_MPI_NAMES) 
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_ATTR_PUT( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_put__( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_put( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_put_( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_ATTR_PUT = PMPI_ATTR_PUT
#pragma weak mpi_attr_put__ = PMPI_ATTR_PUT
#pragma weak mpi_attr_put_ = PMPI_ATTR_PUT
#pragma weak mpi_attr_put = PMPI_ATTR_PUT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_ATTR_PUT = pmpi_attr_put__
#pragma weak mpi_attr_put__ = pmpi_attr_put__
#pragma weak mpi_attr_put_ = pmpi_attr_put__
#pragma weak mpi_attr_put = pmpi_attr_put__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_ATTR_PUT = pmpi_attr_put_
#pragma weak mpi_attr_put__ = pmpi_attr_put_
#pragma weak mpi_attr_put_ = pmpi_attr_put_
#pragma weak mpi_attr_put = pmpi_attr_put_
#else
#pragma weak MPI_ATTR_PUT = pmpi_attr_put
#pragma weak mpi_attr_put__ = pmpi_attr_put
#pragma weak mpi_attr_put_ = pmpi_attr_put
#pragma weak mpi_attr_put = pmpi_attr_put
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_ATTR_PUT( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * );

#pragma weak MPI_ATTR_PUT = PMPI_ATTR_PUT
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_put__( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * );

#pragma weak mpi_attr_put__ = pmpi_attr_put__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_put( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * );

#pragma weak mpi_attr_put = pmpi_attr_put
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_put_( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * );

#pragma weak mpi_attr_put_ = pmpi_attr_put_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_ATTR_PUT  MPI_ATTR_PUT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_attr_put__  mpi_attr_put__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_attr_put  mpi_attr_put
#else
#pragma _HP_SECONDARY_DEF pmpi_attr_put_  mpi_attr_put_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_ATTR_PUT as PMPI_ATTR_PUT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_attr_put__ as pmpi_attr_put__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_attr_put as pmpi_attr_put
#else
#pragma _CRI duplicate mpi_attr_put_ as pmpi_attr_put_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_ATTR_PUT( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("PMPI_ATTR_PUT")));
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_put__( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("PMPI_ATTR_PUT")));
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_put_( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("PMPI_ATTR_PUT")));
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_put( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("PMPI_ATTR_PUT")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_ATTR_PUT( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("pmpi_attr_put__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_put__( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("pmpi_attr_put__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_put_( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("pmpi_attr_put__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_put( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("pmpi_attr_put__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_ATTR_PUT( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("pmpi_attr_put_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_put__( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("pmpi_attr_put_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_put_( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("pmpi_attr_put_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_put( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("pmpi_attr_put_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_ATTR_PUT( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("pmpi_attr_put")));
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_put__( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("pmpi_attr_put")));
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_put_( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("pmpi_attr_put")));
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_put( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("pmpi_attr_put")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_ATTR_PUT( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_put__( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_put( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_put_( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_attr_put__ = MPI_ATTR_PUT
#pragma weak mpi_attr_put_ = MPI_ATTR_PUT
#pragma weak mpi_attr_put = MPI_ATTR_PUT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_ATTR_PUT = mpi_attr_put__
#pragma weak mpi_attr_put_ = mpi_attr_put__
#pragma weak mpi_attr_put = mpi_attr_put__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_ATTR_PUT = mpi_attr_put_
#pragma weak mpi_attr_put__ = mpi_attr_put_
#pragma weak mpi_attr_put = mpi_attr_put_
#else
#pragma weak MPI_ATTR_PUT = mpi_attr_put
#pragma weak mpi_attr_put__ = mpi_attr_put
#pragma weak mpi_attr_put_ = mpi_attr_put
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_ATTR_PUT( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_put__( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("MPI_ATTR_PUT")));
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_put_( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("MPI_ATTR_PUT")));
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_put( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("MPI_ATTR_PUT")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_ATTR_PUT( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("mpi_attr_put__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_put__( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_put_( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("mpi_attr_put__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_put( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("mpi_attr_put__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_ATTR_PUT( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("mpi_attr_put_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_put__( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("mpi_attr_put_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_put_( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_put( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("mpi_attr_put_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_ATTR_PUT( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("mpi_attr_put")));
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_put__( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("mpi_attr_put")));
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_put_( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("mpi_attr_put")));
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_put( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_ATTR_PUT( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_attr_put__( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_attr_put_( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_attr_put( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_attr_put__ = PMPI_ATTR_PUT
#pragma weak pmpi_attr_put_ = PMPI_ATTR_PUT
#pragma weak pmpi_attr_put = PMPI_ATTR_PUT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_ATTR_PUT = pmpi_attr_put__
#pragma weak pmpi_attr_put_ = pmpi_attr_put__
#pragma weak pmpi_attr_put = pmpi_attr_put__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_ATTR_PUT = pmpi_attr_put_
#pragma weak pmpi_attr_put__ = pmpi_attr_put_
#pragma weak pmpi_attr_put = pmpi_attr_put_
#else
#pragma weak PMPI_ATTR_PUT = pmpi_attr_put
#pragma weak pmpi_attr_put__ = pmpi_attr_put
#pragma weak pmpi_attr_put_ = pmpi_attr_put
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_attr_put__( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("PMPI_ATTR_PUT")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_attr_put_( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("PMPI_ATTR_PUT")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_attr_put( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("PMPI_ATTR_PUT")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_ATTR_PUT( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("pmpi_attr_put__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_attr_put_( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("pmpi_attr_put__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_attr_put( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("pmpi_attr_put__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_ATTR_PUT( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("pmpi_attr_put_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_attr_put__( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("pmpi_attr_put_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_attr_put( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("pmpi_attr_put_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_ATTR_PUT( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("pmpi_attr_put")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_attr_put__( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("pmpi_attr_put")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_attr_put_( MPI_Fint *, MPI_Fint *, void*, MPI_Fint * ) __attribute__((weak,alias("pmpi_attr_put")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_attr_put_ PMPI_ATTR_PUT
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_attr_put_ pmpi_attr_put__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_attr_put_ pmpi_attr_put
#else
#define mpi_attr_put_ pmpi_attr_put_
#endif /* Test on name mapping */

/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Attr_put
#define MPI_Attr_put PMPI_Attr_put 

#else

#ifdef F77_NAME_UPPER
#define mpi_attr_put_ MPI_ATTR_PUT
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_attr_put_ mpi_attr_put__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_attr_put_ mpi_attr_put
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_attr_put_ ( MPI_Fint *v1, MPI_Fint *v2, void*v3, MPI_Fint *ierr ){
   *ierr = MPIR_CommSetAttr( (MPI_Comm)(*v1), (int)*v2, (void *)((MPIR_Pint)*(MPI_Fint *)v3), MPIR_ATTR_INT );
}