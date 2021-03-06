/*
 * Project    : ipv6calc
 * File       : databases/lib/libipv6calc_db_wrapper_External.h
 * Version    : $Id: libipv6calc_db_wrapper_External.h,v 1.1 2014/10/10 20:35:45 ds6peter Exp $
 * Copyright  : 2013-2013 by Peter Bieringer <pb (at) bieringer.de>
 *
 * Information:
 *  Header file for libipv6calc_db_wrapper_External.c
 */

#include "ipv6calctypes.h"

#ifndef _libipv6calc_db_wrapper_External_h

#define _libipv6calc_db_wrapper_External_h 1

// database types
#define EXTERNAL_DB_IPV4_REGISTRY				1
#define EXTERNAL_DB_IPV6_REGISTRY				2
#define EXTERNAL_DB_IPV4_COUNTRYCODE				3
#define EXTERNAL_DB_IPV6_COUNTRYCODE				4
#define EXTERNAL_DB_MAX						(4 + 1)


/*@unused@*/ static const db_file_desc libipv6calc_db_wrapper_External_db_file_desc[] = {
	{ EXTERNAL_DB_IPV4_REGISTRY   , "ipv6calc-external-ipv4-registry.db"      , "IPv4 Registry"    , IPV6CALC_DB_IPV4_TO_REGISTRY | IPV6CALC_DB_EXTERNAL_IPV4 },
	{ EXTERNAL_DB_IPV6_REGISTRY   , "ipv6calc-external-ipv6-registry.db"      , "IPv6 Registry"    , IPV6CALC_DB_IPV6_TO_REGISTRY | IPV6CALC_DB_EXTERNAL_IPV6 },
	{ EXTERNAL_DB_IPV4_COUNTRYCODE, "ipv6calc-external-ipv4-countrycode.db"   , "IPv4 CountryCode" , IPV6CALC_DB_IPV4_TO_CC       | IPV6CALC_DB_EXTERNAL_IPV4 },
	{ EXTERNAL_DB_IPV6_COUNTRYCODE, "ipv6calc-external-ipv6-countrycode.db"   , "IPv6 CountryCode" , IPV6CALC_DB_IPV6_TO_CC       | IPV6CALC_DB_EXTERNAL_IPV6 },
};

// features
extern uint32_t wrapper_features_External;

// creation time of databases
extern time_t wrapper_db_unixtime_External[MAXENTRIES_ARRAY(libipv6calc_db_wrapper_External_db_file_desc)];

typedef struct
{
        FILE *filehandle;
        uint8_t databasetype;
        uint8_t databasecolumn;
        uint8_t databaseday;
        uint8_t databasemonth;
        uint8_t databaseyear;
        uint32_t databasecount;
        uint32_t databaseaddr;
        uint32_t ipversion;
} External;


#endif

extern int         libipv6calc_db_wrapper_External_wrapper_init(void);
extern int         libipv6calc_db_wrapper_External_wrapper_cleanup(void);
extern void        libipv6calc_db_wrapper_External_wrapper_info(char* string, const size_t size);
extern void        libipv6calc_db_wrapper_External_wrapper_print_db_info(const int level_verbose, const char *prefix_string);
extern char       *libipv6calc_db_wrapper_External_wrapper_db_info_used(void);

extern int         libipv6calc_db_wrapper_External_has_features(uint32_t features);
extern time_t      libipv6calc_db_wrapper_External_db_unixtime_by_feature(uint32_t feature);


#ifdef SUPPORT_EXTERNAL

#include <db.h>

extern char external_db_dir[NI_MAXHOST];

extern int          libipv6calc_db_wrapper_External_db_avail(int type);
extern DB          *libipv6calc_db_wrapper_External_open_type(const int type, long int *db_recno_max_ptr);

extern const char  *libipv6calc_db_wrapper_External_dbdescription(int type);

// IPv4/v6 Registry Number
extern int libipv6calc_db_wrapper_External_registry_num_by_addr(const ipv6calc_ipaddr *ipaddrp);

// IPv4/v6 CountryCode 
extern int libipv6calc_db_wrapper_External_country_code_by_addr(const ipv6calc_ipaddr *ipaddrp, char *country, const size_t country_len);

#endif
