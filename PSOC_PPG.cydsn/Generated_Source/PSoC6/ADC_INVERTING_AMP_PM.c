/***************************************************************************//**
* \file     ADC_INVERTING_AMP_PM.c
* \version  3.10
*
* \brief
* Provides the initialization data structure for the ADC_INVERTING_AMP Component.
*
********************************************************************************
* \copyright
* (c) 2017-2018, Cypress Semiconductor Corporation. All rights reserved.
* This software, including source code, documentation and related
* materials ("Software"), is owned by Cypress Semiconductor
* Corporation ("Cypress") and is protected by and subject to worldwide
* patent protection (United States and foreign), United States copyright
* laws and international treaty provisions. Therefore, you may use this
* Software only as provided in the license agreement accompanying the
* software package from which you obtained this Software ("EULA").
* If no EULA applies, Cypress hereby grants you a personal, nonexclusive,
* non-transferable license to copy, modify, and compile the
* Software source code solely for use in connection with Cypress's
* integrated circuit products. Any reproduction, modification, translation,
* compilation, or representation of this Software except as specified
* above is prohibited without the express written permission of Cypress.
* Disclaimer: THIS SOFTWARE IS PROVIDED AS-IS, WITH NO
* WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING,
* BUT NOT LIMITED TO, NONINFRINGEMENT, IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
* PARTICULAR PURPOSE. Cypress reserves the right to make
* changes to the Software without notice. Cypress does not assume any
* liability arising out of the application or use of the Software or any
* product or circuit described in the Software. Cypress does not
* authorize its products for use in any products where a malfunction or
* failure of the Cypress product may reasonably be expected to result in
* significant property damage, injury or death ("High Risk Product"). By
* including Cypress's product in a High Risk Product, the manufacturer
* of such system or application assumes all risk of such use and in doing
* so agrees to indemnify Cypress against all liability.
*******************************************************************************/
#include "ADC_INVERTING_AMP.h"

static cy_stc_syspm_callback_params_t ADC_INVERTING_AMP_DeepSleepCallbackParams = {
    .base = ADC_INVERTING_AMP_SAR__HW,
};

cy_stc_syspm_callback_t ADC_INVERTING_AMP_DeepSleepCallbackStruct = {
    .callback = &Cy_SAR_DeepSleepCallback,
    .type = CY_SYSPM_DEEPSLEEP,
    .callbackParams = &ADC_INVERTING_AMP_DeepSleepCallbackParams,
};

/* [] END OF FILE */

