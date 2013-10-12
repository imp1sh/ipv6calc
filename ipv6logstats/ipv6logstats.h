/*
 * Project    : ipv6calc/ipv6logstats
 * File       : ipv6logstats.h
 * Version    : $Id: ipv6logstats.h,v 1.15 2013/10/12 09:51:04 ds6peter Exp $
 * Copyright  : 2003-2013 by Peter Bieringer <pb (at) bieringer.de>
 *
 * Information:
 *  Main header file
 */ 

/* global program related definitions */
#define PROGRAM_NAME "ipv6logstats"
#define PROGRAM_COPYRIGHT "(P) & (C) 2003-" COPYRIGHT_YEAR " by Peter Bieringer <pb (at) bieringer.de>"

#define STATS_VERSION_MAJOR	3
#define STATS_VERSION_MINOR	0

#define STATS_ALL		0x00
#define STATS_IPV4		0x01
#define STATS_IPV6		0x02
#define STATS_UNKNOWN		0x03

#define STATS_IPV4_IANA		0x12
#define STATS_IPV4_APNIC	0x13
#define STATS_IPV4_ARIN		0x14
#define STATS_IPV4_RIPE		0x15
#define STATS_IPV4_LACNIC	0x16
#define STATS_IPV4_RESERVED	0x1e
#define STATS_IPV4_UNKNOWN	0x1f

#define STATS_IPV6_6BONE	0x21
#define STATS_IPV6_IANA		0x22
#define STATS_IPV6_APNIC	0x23
#define STATS_IPV6_ARIN		0x24
#define STATS_IPV6_RIPE		0x25
#define STATS_IPV6_LACNIC	0x26
#define STATS_IPV6_RESERVED	0x2e
#define STATS_IPV6_UNKNOWN	0x2f

#define STATS_IPV6_6TO4_IANA		0x32
#define STATS_IPV6_6TO4_APNIC		0x33
#define STATS_IPV6_6TO4_ARIN		0x34
#define STATS_IPV6_6TO4_RIPE		0x35
#define STATS_IPV6_6TO4_LACNIC		0x36
#define STATS_IPV6_6TO4_RESERVED	0x3e
#define STATS_IPV6_6TO4_UNKNOWN		0x3f

#define STATS_IPV6_TEREDO_IANA		0x42
#define STATS_IPV6_TEREDO_APNIC		0x43
#define STATS_IPV6_TEREDO_ARIN		0x44
#define STATS_IPV6_TEREDO_RIPE		0x45
#define STATS_IPV6_TEREDO_LACNIC	0x46
#define STATS_IPV6_TEREDO_RESERVED	0x4e
#define STATS_IPV6_TEREDO_UNKNOWN	0x4f

#define STATS_IPV6_IID_GLOBAL		0x100
#define STATS_IPV6_IID_MANUAL		0x101
#define STATS_IPV6_IID_RANDOM		0x102
#define STATS_IPV6_IID_ISATAP		0x103
#define STATS_IPV6_IID_UNKNOWN		0x10f

#define DEBUG_ipv6logstats_summary	0x00000002l

/* labels statistic numbers */
typedef struct {
	const int	number;
	long unsigned int counter;
	const char *token;
} stat_entries;
