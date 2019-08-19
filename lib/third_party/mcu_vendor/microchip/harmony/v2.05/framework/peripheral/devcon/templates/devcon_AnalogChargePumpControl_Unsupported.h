/*******************************************************************************
  DEVCON Peripheral Library Template Implementation

  File Name:
    devcon_AnalogChargePumpControl_Unsupported.h

  Summary:
    DEVCON PLIB Template Implementation

  Description:
    This header file contains template implementations
    For Feature : AnalogChargePumpControl
    and its Variant : Unsupported
    For following APIs :
        PLIB_DEVCON_AnalogIOChargePumpEnable
        PLIB_DEVCON_AnalogIOChargePumpDisable
        PLIB_DEVCON_ExistsAnalogChargePumpControl

*******************************************************************************/

//DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2013-2014 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
*******************************************************************************/

//DOM-IGNORE-END

#ifndef _DEVCON_ANALOGCHARGEPUMPCONTROL_UNSUPPORTED_H
#define _DEVCON_ANALOGCHARGEPUMPCONTROL_UNSUPPORTED_H

//******************************************************************************
/* Function :  DEVCON_AnalogIOChargePumpEnable_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_DEVCON_AnalogIOChargePumpEnable 

  Description:
    This template implements the Unsupported variant of the PLIB_DEVCON_AnalogIOChargePumpEnable function.
*/

PLIB_TEMPLATE void DEVCON_AnalogIOChargePumpEnable_Unsupported( DEVCON_MODULE_ID index )
{
    PLIB_ASSERT(false, "The device selected does not implement PLIB_DEVCON_AnalogIOChargePumpEnable");
}


//******************************************************************************
/* Function :  DEVCON_AnalogIOChargePumpDisable_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_DEVCON_AnalogIOChargePumpDisable 

  Description:
    This template implements the Unsupported variant of the PLIB_DEVCON_AnalogIOChargePumpDisable function.
*/

PLIB_TEMPLATE void DEVCON_AnalogIOChargePumpDisable_Unsupported( DEVCON_MODULE_ID index )
{
    PLIB_ASSERT(false, "The device selected does not implement PLIB_DEVCON_AnalogIOChargePumpDisable");
}


//******************************************************************************
/* Function :  DEVCON_ExistsAnalogChargePumpControl_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_DEVCON_ExistsAnalogChargePumpControl

  Description:
    This template implements the Unsupported variant of the PLIB_DEVCON_ExistsAnalogChargePumpControl function.
*/

PLIB_TEMPLATE bool DEVCON_ExistsAnalogChargePumpControl_Unsupported( DEVCON_MODULE_ID index )
{
    return false;
}


#endif /*_DEVCON_ANALOGCHARGEPUMPCONTROL_UNSUPPORTED_H*/

/******************************************************************************
 End of File
*/

