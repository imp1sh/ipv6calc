/*
 * Project    : ipv6calc
 * File       : libipv6calc.h
 * Version    : $Id: libipv6calc.h,v 1.1 2002/03/18 19:59:24 peter Exp $
 * Copyright  : 2001-2002 by Peter Bieringer <pb (at) bieringer.de>
 *
 * Information:
 *  Header file for libipv6calc.c
 */ 

#define NI_MAXHOST	1024

/* prototypes */
extern void string_to_upcase(char *string);
extern void string_to_lowcase(char *string);
extern void string_to_reverse(char *string);
extern int libipv6calc_autodetectinput(const char *string);