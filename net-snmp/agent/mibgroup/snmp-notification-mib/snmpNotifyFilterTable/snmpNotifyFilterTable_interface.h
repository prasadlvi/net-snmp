/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.61 $ of : mfd-interface.m2c,v $
 *
 * $Id$
 */
/** @defgroup interface: Routines to interface to Net-SNMP
 *
 * \warning This code should not be modified, called directly,
 *          or used to interpret functionality. It is subject to
 *          change at any time.
 * 
 * @{
 */
/*
 * *********************************************************************
 * *********************************************************************
 * *********************************************************************
 * ***                                                               ***
 * ***  NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE  ***
 * ***                                                               ***
 * ***                                                               ***
 * ***       THIS FILE DOES NOT CONTAIN ANY USER EDITABLE CODE.      ***
 * ***                                                               ***
 * ***                                                               ***
 * ***       THE GENERATED CODE IS INTERNAL IMPLEMENTATION, AND      ***
 * ***                                                               ***
 * ***                                                               ***
 * ***    IS SUBJECT TO CHANGE WITHOUT WARNING IN FUTURE RELEASES.   ***
 * ***                                                               ***
 * ***                                                               ***
 * *********************************************************************
 * *********************************************************************
 * *********************************************************************
 */
#ifndef SNMPNOTIFYFILTERTABLE_INTERFACE_H
#define SNMPNOTIFYFILTERTABLE_INTERFACE_H

#ifdef __cplusplus
extern          "C" {
#endif


#include "snmpNotifyFilterTable.h"


    /*
     ********************************************************************
     * Table declarations
     */

    /*
     * PUBLIC interface initialization routine 
     */
    void           
        _snmpNotifyFilterTable_initialize_interface
        (snmpNotifyFilterTable_registration * user_ctx, u_long flags);
    void           
        _snmpNotifyFilterTable_shutdown_interface
        (snmpNotifyFilterTable_registration * user_ctx);

    snmpNotifyFilterTable_registration
        *snmpNotifyFilterTable_registration_get(void);

    snmpNotifyFilterTable_registration
        *snmpNotifyFilterTable_registration_set
        (snmpNotifyFilterTable_registration * new);

    netsnmp_container *snmpNotifyFilterTable_container_get(void);
    int             snmpNotifyFilterTable_container_size(void);

    u_int           snmpNotifyFilterTable_dirty_get(void);
    void            snmpNotifyFilterTable_dirty_set(u_int status);

    snmpNotifyFilterTable_rowreq_ctx
        *snmpNotifyFilterTable_allocate_rowreq_ctx(void *);
    void           
        snmpNotifyFilterTable_release_rowreq_ctx
        (snmpNotifyFilterTable_rowreq_ctx * rowreq_ctx);

    int             snmpNotifyFilterTable_index_to_oid(netsnmp_index *
                                                       oid_idx,
                                                       snmpNotifyFilterTable_mib_index
                                                       * mib_idx);
    int             snmpNotifyFilterTable_index_from_oid(netsnmp_index *
                                                         oid_idx,
                                                         snmpNotifyFilterTable_mib_index
                                                         * mib_idx);

    /*
     *********************************************************************
     * Persistent declarations
     */
    /*
     * persistence
     */
#define LINE_TERM_CHAR '$'

    void           
        snmpNotifyFilterTable_container_init_persistence(netsnmp_container
                                                         * container);
    int            
        snmpNotifyFilterTable_container_should_save
        (snmpNotifyFilterTable_rowreq_ctx * rowreq_ctx);


    /*
     * access to certain internals. use with caution!
     */
    void           
        snmpNotifyFilterTable_valid_columns_set(netsnmp_column_info *vc);


#ifdef __cplusplus
}
#endif
#endif                          /* SNMPNOTIFYFILTERTABLE_INTERFACE_H */
