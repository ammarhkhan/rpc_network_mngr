/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "network_mngr.h"

bool_t
xdr_system_statistics (XDR *xdrs, system_statistics *objp)
{
	register int32_t *buf;

	 if (!xdr_pointer (xdrs, (char **)&objp->date, sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_double (xdrs, &objp->cpu_usage))
		 return FALSE;
	 if (!xdr_double (xdrs, &objp->mem_usage))
		 return FALSE;
	 if (!xdr_double (xdrs, &objp->load_procs_per_min))
		 return FALSE;
	return TRUE;
}
