/***************************************************************************//**
* \file CY_BLE_custom_config.c
* \version 2.20
* 
* \brief
*  This file contains the source code of initialization of the config structure for
*  the Custom Service.
*
********************************************************************************
* \copyright
* Copyright 2017-2019, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "ble/cy_ble_custom.h"

#if (CY_BLE_MODE_PROFILE && defined(CY_BLE_CUSTOM))
#ifdef CY_BLE_CUSTOM_SERVER
/* If any Custom Service with custom characteristics is defined in the
* customizer's GUI, their handles will be present in this array.
*/
/* This array contains attribute handles for the defined Custom Services and their characteristics and descriptors.
   The array index definitions are located in the BLE_custom.h file. */
static const cy_stc_ble_customs_t cy_ble_customs[0x01u] = {

    /* SpO2 Measurement service */
    {
        0x0030u, /* Handle of the SpO2 Measurement service */ 
        {

            /* Custom Characteristic characteristic */
            {
                0x0032u, /* Handle of the Custom Characteristic characteristic */ 
                
                /* Array of Descriptors handles */
                {
                    0x0033u, /* Handle of the Custom Descriptor descriptor */ 
                    0x0034u, /* Handle of the Client Characteristic Configuration descriptor */ 
                }, 
            },
        }, 
    },
};


#endif /* (CY_BLE_CUSTOM_SERVER) */

#ifdef CY_BLE_CUSTOM_CLIENT


#endif /* (CY_BLE_CUSTOM_CLIENT) */

/**
* \addtogroup group_globals
* @{
*/

/** The configuration structure for the Custom Services. */
cy_stc_ble_custom_config_t cy_ble_customConfig =
{
    /* Custom Services GATT DB handles structure */
    #ifdef CY_BLE_CUSTOM_SERVER
    .customs      = cy_ble_customs,
    #endif /* (CY_BLE_CUSTOM_SERVER) */

    /* Custom Service handle */
    #ifdef CY_BLE_CUSTOM_CLIENT
    .customc  = cy_ble_customCServ,
    #endif /* (CY_BLE_CUSTOM_CLIENT) */
};

/** @} group_globals */
#endif /* (CY_BLE_MODE_PROFILE && defined(CY_BLE_CUSTOM)) */

/* [] END OF FILE */
