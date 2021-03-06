/*
 * $Id: acc_mod.h,v 1.3 2005/06/29 14:48:33 bogdan_iancu Exp $
 *
 * Accounting module
 *
 * Copyright (C) 2001-2003 FhG Fokus
 *
 * This file is part of openser, a free SIP server.
 *
 * openser is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version
 *
 * openser is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * History:
 * ---------
 * 2003-04-04  grand acc cleanup (jiri)
 * 2003-11-04  multidomain support for mysql introduced (jiri)
 * 2004-06-06  removed db_url, db_handle (andrei)
 * 2005-06-28  multi leg call support added (bogdan)
 */


#ifndef _ACC_MOD_H
#define _ACC_MOD_H

#include "../../db/db.h"
#include "defs.h"

/* module parameter declaration */
extern int log_level;
extern int early_media;
extern int failed_transaction_flag;

extern char *log_fmt;
extern int report_cancels;
extern int log_flag;
extern int log_missed_flag;

extern int multileg_enabled;
extern int src_avp_id;
extern int dst_avp_id;


#ifdef RAD_ACC
extern int radius_flag;
extern int radius_missed_flag;
extern void *rh;
#endif

#ifdef DIAM_ACC
extern rd_buf_t *rb;
extern int diameter_flag;
extern int diameter_missed_flag;
#endif

#ifdef SQL_ACC
extern int db_flag;
extern int db_missed_flag;
extern int db_localtime;


extern char *db_table_acc;
extern char *db_table_mc;

extern char* acc_domain_col;
extern char* acc_sip_from_col;
extern char* acc_sip_to_col;
extern char* acc_sip_status_col;
extern char* acc_sip_method_col;
extern char* acc_i_uri_col;
extern char* acc_o_uri_col;
extern char* acc_sip_callid_col;
extern char* acc_user_col;
extern char* acc_time_col;
extern char* acc_from_uri;
extern char* acc_to_uri;
extern char* acc_totag_col;
extern char* acc_fromtag_col;
extern char* acc_dst_col;
extern char* acc_src_col;


#endif /* SQL_ACC */

static inline int is_failed_acc_on(struct sip_msg *rq)
{
	return failed_transaction_flag
		&& isflagset(rq, failed_transaction_flag)==1;
}

static inline int is_log_acc_on(struct sip_msg *rq)
{
	return log_flag && isflagset(rq, log_flag)==1;
}
#ifdef SQL_ACC
static inline int is_db_acc_on(struct sip_msg *rq)
{
	return db_flag && isflagset(rq, db_flag)==1;
}
#endif
#ifdef RAD_ACC
static inline int is_rad_acc_on(struct sip_msg *rq)
{   
	return radius_flag && isflagset(rq, radius_flag)==1;
}   
#endif
#ifdef DIAM_ACC
static inline int is_diam_acc_on(struct sip_msg *rq)
{   
	return diameter_flag && isflagset(rq, diameter_flag)==1;
}   
#endif
    
static inline int is_acc_on(struct sip_msg *rq)
{   
	if (is_log_acc_on(rq)) return 1;
#ifdef SQL_ACC
	if (is_db_acc_on(rq)) return 1;
#endif
#ifdef RAD_ACC
	if (is_rad_acc_on(rq)) return 1;
#endif
#ifdef DIAM_ACC
	if (is_diam_acc_on(rq)) return 1;
#endif

	return 0;
}

static inline int is_log_mc_on(struct sip_msg *rq)
{
	return log_missed_flag && isflagset(rq, log_missed_flag)==1;
}

#ifdef SQL_ACC
static inline int is_db_mc_on(struct sip_msg *rq)
{
	return db_missed_flag && isflagset(rq, db_missed_flag)==1;
}
#endif
#ifdef RAD_ACC
static inline int is_rad_mc_on(struct sip_msg *rq)
{
	return radius_missed_flag && isflagset(rq, radius_missed_flag)==1;
}
#endif
#ifdef DIAM_ACC
static inline int is_diam_mc_on(struct sip_msg *rq)
{
	return diameter_missed_flag && isflagset(rq, diameter_missed_flag)==1;
}
#endif


static inline int is_mc_on(struct sip_msg *rq)
{
	if (is_log_mc_on(rq)) return 1;
#ifdef SQL_ACC
	if (is_db_mc_on(rq)) return 1;
#endif
#ifdef RAD_ACC
	if (is_rad_mc_on(rq)) return 1;
#endif
#ifdef DIAM_ACC
	if (is_diam_mc_on(rq)) return 1;
#endif

	return 0;
}


#endif
