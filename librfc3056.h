/*
 * Project    : ipv6calc
 * File       : librfc3056.h
 * Version    : $Id: librfc3056.h,v 1.2 2002/03/03 18:21:34 peter Exp $
 * Copyright  : 2002 by Peter Bieringer <pb (at) bieringer.de>
 *
 * Information:
 *  Header file for librfc1884.c libary
 */ 

#include "libipv6addr.h"
#include "libipv4addr.h"

/* prototypes */
int librfc3056_ipv4addr_to_ipv6to4addr(ipv6calc_ipv6addr *ipv6addrp, ipv6calc_ipv4addr *ipv4addrp);
int librfc3056_ipv6addr_to_ipv4addr(ipv6calc_ipv4addr *ipv4addrp, ipv6calc_ipv6addr *ipv6addrp, char* resultstring);
