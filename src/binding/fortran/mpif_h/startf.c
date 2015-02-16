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
extern FORT_DLL_SPEC void FORT_CALL MPI_START( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_start__( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_start( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_start_( MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_START = PMPI_START
#pragma weak mpi_start__ = PMPI_START
#pragma weak mpi_start_ = PMPI_START
#pragma weak mpi_start = PMPI_START
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_START = pmpi_start__
#pragma weak mpi_start__ = pmpi_start__
#pragma weak mpi_start_ = pmpi_start__
#pragma weak mpi_start = pmpi_start__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_START = pmpi_start_
#pragma weak mpi_start__ = pmpi_start_
#pragma weak mpi_start_ = pmpi_start_
#pragma weak mpi_start = pmpi_start_
#else
#pragma weak MPI_START = pmpi_start
#pragma weak mpi_start__ = pmpi_start
#pragma weak mpi_start_ = pmpi_start
#pragma weak mpi_start = pmpi_start
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_START( MPI_Fint *, MPI_Fint * );

#pragma weak MPI_START = PMPI_START
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_start__( MPI_Fint *, MPI_Fint * );

#pragma weak mpi_start__ = pmpi_start__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_start( MPI_Fint *, MPI_Fint * );

#pragma weak mpi_start = pmpi_start
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_start_( MPI_Fint *, MPI_Fint * );

#pragma weak mpi_start_ = pmpi_start_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_START  MPI_START
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_start__  mpi_start__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_start  mpi_start
#else
#pragma _HP_SECONDARY_DEF pmpi_start_  mpi_start_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_START as PMPI_START
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_start__ as pmpi_start__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_start as pmpi_start
#else
#pragma _CRI duplicate mpi_start_ as pmpi_start_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_START( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_START")));
extern FORT_DLL_SPEC void FORT_CALL mpi_start__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_START")));
extern FORT_DLL_SPEC void FORT_CALL mpi_start_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_START")));
extern FORT_DLL_SPEC void FORT_CALL mpi_start( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_START")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_START( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_start__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_start__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_start__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_start_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_start__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_start( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_start__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_START( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_start_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_start__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_start_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_start_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_start_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_start( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_start_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_START( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_start")));
extern FORT_DLL_SPEC void FORT_CALL mpi_start__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_start")));
extern FORT_DLL_SPEC void FORT_CALL mpi_start_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_start")));
extern FORT_DLL_SPEC void FORT_CALL mpi_start( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_start")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_START( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_start__( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_start( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_start_( MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_start__ = MPI_START
#pragma weak mpi_start_ = MPI_START
#pragma weak mpi_start = MPI_START
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_START = mpi_start__
#pragma weak mpi_start_ = mpi_start__
#pragma weak mpi_start = mpi_start__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_START = mpi_start_
#pragma weak mpi_start__ = mpi_start_
#pragma weak mpi_start = mpi_start_
#else
#pragma weak MPI_START = mpi_start
#pragma weak mpi_start__ = mpi_start
#pragma weak mpi_start_ = mpi_start
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_START( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_start__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_START")));
extern FORT_DLL_SPEC void FORT_CALL mpi_start_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_START")));
extern FORT_DLL_SPEC void FORT_CALL mpi_start( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_START")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_START( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_start__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_start__( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_start_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_start__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_start( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_start__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_START( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_start_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_start__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_start_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_start_( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_start( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_start_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_START( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_start")));
extern FORT_DLL_SPEC void FORT_CALL mpi_start__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_start")));
extern FORT_DLL_SPEC void FORT_CALL mpi_start_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_start")));
extern FORT_DLL_SPEC void FORT_CALL mpi_start( MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_START( MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_start__( MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_start_( MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_start( MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_start__ = PMPI_START
#pragma weak pmpi_start_ = PMPI_START
#pragma weak pmpi_start = PMPI_START
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_START = pmpi_start__
#pragma weak pmpi_start_ = pmpi_start__
#pragma weak pmpi_start = pmpi_start__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_START = pmpi_start_
#pragma weak pmpi_start__ = pmpi_start_
#pragma weak pmpi_start = pmpi_start_
#else
#pragma weak PMPI_START = pmpi_start
#pragma weak pmpi_start__ = pmpi_start
#pragma weak pmpi_start_ = pmpi_start
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_start__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_START")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_start_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_START")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_start( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_START")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_START( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_start__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_start_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_start__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_start( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_start__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_START( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_start_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_start__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_start_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_start( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_start_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_START( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_start")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_start__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_start")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_start_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_start")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_start_ PMPI_START
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_start_ pmpi_start__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_start_ pmpi_start
#else
#define mpi_start_ pmpi_start_
#endif /* Test on name mapping */

/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Start
#define MPI_Start PMPI_Start 

#else

#ifdef F77_NAME_UPPER
#define mpi_start_ MPI_START
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_start_ mpi_start__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_start_ mpi_start
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_start_ ( MPI_Fint *v1, MPI_Fint *ierr ){
    *ierr = MPI_Start( (MPI_Request *)(v1) );
}