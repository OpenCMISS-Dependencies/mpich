/* -*- Mode: C; c-basic-offset:4 ; indent-tabs-mode:nil ; -*- */
/*
 *  (C) 2011 by Argonne National Laboratory.
 *      See COPYRIGHT in top-level directory.
 */

#include "mpiimpl.h"

/* -- Begin Profiling Symbol Block for routine MPI_Improbe */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_Improbe = PMPI_Improbe
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_Improbe  MPI_Improbe
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_Improbe as PMPI_Improbe
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_Improbe(int source, int tag, MPI_Comm comm, int *flag, MPI_Message *message,
                MPI_Status *status) __attribute__((weak,alias("PMPI_Improbe")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_Improbe
#define MPI_Improbe PMPI_Improbe

/* any non-MPI functions go here, especially non-static ones */

#endif /* MPICH_MPI_FROM_PMPI */

#undef FUNCNAME
#define FUNCNAME MPI_Improbe
#undef FCNAME
#define FCNAME MPIU_QUOTE(FUNCNAME)
/*@
MPI_Improbe - Nonblocking matched probe.

Input Parameters:
+ source - rank of source or MPI_ANY_SOURCE (integer)
. tag - message tag or MPI_ANY_TAG (integer)
- comm - communicator (handle)

Output Parameters:
+ flag - flag (logical)
. message - returned message (handle)
- status - status object (status)

.N ThreadSafe

.N Fortran

.N Errors
@*/
int MPI_Improbe(int source, int tag, MPI_Comm comm, int *flag, MPI_Message *message, MPI_Status *status)
{
    int mpi_errno = MPI_SUCCESS;
    MPID_Request *msgp = NULL;
    MPID_Comm *comm_ptr = NULL;
    MPID_MPI_STATE_DECL(MPID_STATE_MPI_IMPROBE);

    MPIU_THREAD_CS_ENTER(ALLFUNC,);
    MPID_MPI_FUNC_ENTER(MPID_STATE_MPI_IMPROBE);

    /* Validate parameters, especially handles needing to be converted */
#   ifdef HAVE_ERROR_CHECKING
    {
        MPID_BEGIN_ERROR_CHECKS
        {
            MPIR_ERRTEST_COMM(comm, mpi_errno);

            /* TODO more checks may be appropriate */
        }
        MPID_END_ERROR_CHECKS
    }
#   endif /* HAVE_ERROR_CHECKING */

    /* Convert MPI object handles to object pointers */
    MPID_Comm_get_ptr(comm, comm_ptr);

    /* Validate parameters and objects (post conversion) */
#   ifdef HAVE_ERROR_CHECKING
    {
        MPID_BEGIN_ERROR_CHECKS
        {
            MPID_Comm_valid_ptr( comm_ptr, mpi_errno, FALSE );
            if (mpi_errno != MPI_SUCCESS) goto fn_fail;

            MPIR_ERRTEST_ARGNULL(flag, "flag", mpi_errno);
            /* TODO more checks may be appropriate (counts, in_place, buffer aliasing, etc) */
        }
        MPID_END_ERROR_CHECKS
    }
#   endif /* HAVE_ERROR_CHECKING */

    /* ... body of routine ...  */

    *message = MPI_MESSAGE_NULL;
    mpi_errno = MPID_Improbe(source, tag, comm_ptr, MPID_CONTEXT_INTRA_PT2PT, flag, &msgp, status);
    if (mpi_errno) MPIU_ERR_POP(mpi_errno);

    if (*flag) {
	if (msgp == NULL) {
	    MPIU_Assert(source == MPI_PROC_NULL);
	    *message = MPI_MESSAGE_NO_PROC;
	}
	else {
	    *message = msgp->handle;
	}
    }

    /* ... end of body of routine ... */

fn_exit:
    MPID_MPI_FUNC_EXIT(MPID_STATE_MPI_IMPROBE);
    MPIU_THREAD_CS_EXIT(ALLFUNC,);
    return mpi_errno;

fn_fail:
    /* --BEGIN ERROR HANDLING-- */
#   ifdef HAVE_ERROR_CHECKING
    {
        mpi_errno = MPIR_Err_create_code(
            mpi_errno, MPIR_ERR_RECOVERABLE, FCNAME, __LINE__, MPI_ERR_OTHER,
            "**mpi_improbe", "**mpi_improbe %d %d %C %p %p %p", source, tag, comm, flag, message, status);
    }
#   endif
    mpi_errno = MPIR_Err_return_comm(NULL, FCNAME, mpi_errno);
    goto fn_exit;
    /* --END ERROR HANDLING-- */
}
