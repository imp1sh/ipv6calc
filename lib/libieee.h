/*
 * Project    : ipv6calc
 * File       : libieee.h
 * Version    : $Id: libieee.h,v 1.1 2002/03/18 19:59:23 peter Exp $
 *
 * Information:
 *  Header file for libieee.c
 */

#include <stdint.h>

#ifndef _libieee_h

#define _libieee_h

/* Structure */
typedef struct {
	const uint32_t id;
	const char *string_owner;
	const char *shortstring_owner;
} s_ieee_oui;

#endif

/* extern static const s_ieee_oui libieee_oui[];*/

extern int libieee_get_vendor_string(char *resultstring, const uint8_t o1, const uint8_t o2, const uint8_t o3);
extern int libieee_get_short_vendor_string(char *resultstring, const uint8_t, const uint8_t o2, const uint8_t o3);
