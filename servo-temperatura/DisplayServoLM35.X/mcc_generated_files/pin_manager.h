/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC16F18875
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.36 and above
        MPLAB 	          :  MPLAB X 6.00	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set LM35 aliases
#define LM35_TRIS                 TRISAbits.TRISA0
#define LM35_LAT                  LATAbits.LATA0
#define LM35_PORT                 PORTAbits.RA0
#define LM35_WPU                  WPUAbits.WPUA0
#define LM35_OD                   ODCONAbits.ODCA0
#define LM35_ANS                  ANSELAbits.ANSA0
#define LM35_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define LM35_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define LM35_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define LM35_GetValue()           PORTAbits.RA0
#define LM35_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define LM35_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define LM35_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define LM35_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define LM35_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define LM35_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define LM35_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define LM35_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set RA7 procedures
#define RA7_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define RA7_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define RA7_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define RA7_GetValue()              PORTAbits.RA7
#define RA7_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define RA7_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define RA7_SetPullup()             do { WPUAbits.WPUA7 = 1; } while(0)
#define RA7_ResetPullup()           do { WPUAbits.WPUA7 = 0; } while(0)
#define RA7_SetAnalogMode()         do { ANSELAbits.ANSA7 = 1; } while(0)
#define RA7_SetDigitalMode()        do { ANSELAbits.ANSA7 = 0; } while(0)

// get/set DIS_U aliases
#define DIS_U_TRIS                 TRISBbits.TRISB0
#define DIS_U_LAT                  LATBbits.LATB0
#define DIS_U_PORT                 PORTBbits.RB0
#define DIS_U_WPU                  WPUBbits.WPUB0
#define DIS_U_OD                   ODCONBbits.ODCB0
#define DIS_U_ANS                  ANSELBbits.ANSB0
#define DIS_U_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define DIS_U_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define DIS_U_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define DIS_U_GetValue()           PORTBbits.RB0
#define DIS_U_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define DIS_U_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define DIS_U_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define DIS_U_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define DIS_U_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define DIS_U_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define DIS_U_SetAnalogMode()      do { ANSELBbits.ANSB0 = 1; } while(0)
#define DIS_U_SetDigitalMode()     do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set DIS_D aliases
#define DIS_D_TRIS                 TRISBbits.TRISB1
#define DIS_D_LAT                  LATBbits.LATB1
#define DIS_D_PORT                 PORTBbits.RB1
#define DIS_D_WPU                  WPUBbits.WPUB1
#define DIS_D_OD                   ODCONBbits.ODCB1
#define DIS_D_ANS                  ANSELBbits.ANSB1
#define DIS_D_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define DIS_D_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define DIS_D_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define DIS_D_GetValue()           PORTBbits.RB1
#define DIS_D_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define DIS_D_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define DIS_D_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define DIS_D_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define DIS_D_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define DIS_D_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define DIS_D_SetAnalogMode()      do { ANSELBbits.ANSB1 = 1; } while(0)
#define DIS_D_SetDigitalMode()     do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set DIS_C aliases
#define DIS_C_TRIS                 TRISBbits.TRISB2
#define DIS_C_LAT                  LATBbits.LATB2
#define DIS_C_PORT                 PORTBbits.RB2
#define DIS_C_WPU                  WPUBbits.WPUB2
#define DIS_C_OD                   ODCONBbits.ODCB2
#define DIS_C_ANS                  ANSELBbits.ANSB2
#define DIS_C_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define DIS_C_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define DIS_C_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define DIS_C_GetValue()           PORTBbits.RB2
#define DIS_C_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define DIS_C_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define DIS_C_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define DIS_C_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define DIS_C_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define DIS_C_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define DIS_C_SetAnalogMode()      do { ANSELBbits.ANSB2 = 1; } while(0)
#define DIS_C_SetDigitalMode()     do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set DIS_UM aliases
#define DIS_UM_TRIS                 TRISBbits.TRISB3
#define DIS_UM_LAT                  LATBbits.LATB3
#define DIS_UM_PORT                 PORTBbits.RB3
#define DIS_UM_WPU                  WPUBbits.WPUB3
#define DIS_UM_OD                   ODCONBbits.ODCB3
#define DIS_UM_ANS                  ANSELBbits.ANSB3
#define DIS_UM_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define DIS_UM_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define DIS_UM_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define DIS_UM_GetValue()           PORTBbits.RB3
#define DIS_UM_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define DIS_UM_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define DIS_UM_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define DIS_UM_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define DIS_UM_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define DIS_UM_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define DIS_UM_SetAnalogMode()      do { ANSELBbits.ANSB3 = 1; } while(0)
#define DIS_UM_SetDigitalMode()     do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()              PORTCbits.RC6
#define RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define RC6_SetPullup()             do { WPUCbits.WPUC6 = 1; } while(0)
#define RC6_ResetPullup()           do { WPUCbits.WPUC6 = 0; } while(0)
#define RC6_SetAnalogMode()         do { ANSELCbits.ANSC6 = 1; } while(0)
#define RC6_SetDigitalMode()        do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set RC7 procedures
#define RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RC7_GetValue()              PORTCbits.RC7
#define RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define RC7_SetPullup()             do { WPUCbits.WPUC7 = 1; } while(0)
#define RC7_ResetPullup()           do { WPUCbits.WPUC7 = 0; } while(0)
#define RC7_SetAnalogMode()         do { ANSELCbits.ANSC7 = 1; } while(0)
#define RC7_SetDigitalMode()        do { ANSELCbits.ANSC7 = 0; } while(0)

// get/set IO_RD0 aliases
#define IO_RD0_TRIS                 TRISDbits.TRISD0
#define IO_RD0_LAT                  LATDbits.LATD0
#define IO_RD0_PORT                 PORTDbits.RD0
#define IO_RD0_WPU                  WPUDbits.WPUD0
#define IO_RD0_OD                   ODCONDbits.ODCD0
#define IO_RD0_ANS                  ANSELDbits.ANSD0
#define IO_RD0_SetHigh()            do { LATDbits.LATD0 = 1; } while(0)
#define IO_RD0_SetLow()             do { LATDbits.LATD0 = 0; } while(0)
#define IO_RD0_Toggle()             do { LATDbits.LATD0 = ~LATDbits.LATD0; } while(0)
#define IO_RD0_GetValue()           PORTDbits.RD0
#define IO_RD0_SetDigitalInput()    do { TRISDbits.TRISD0 = 1; } while(0)
#define IO_RD0_SetDigitalOutput()   do { TRISDbits.TRISD0 = 0; } while(0)
#define IO_RD0_SetPullup()          do { WPUDbits.WPUD0 = 1; } while(0)
#define IO_RD0_ResetPullup()        do { WPUDbits.WPUD0 = 0; } while(0)
#define IO_RD0_SetPushPull()        do { ODCONDbits.ODCD0 = 0; } while(0)
#define IO_RD0_SetOpenDrain()       do { ODCONDbits.ODCD0 = 1; } while(0)
#define IO_RD0_SetAnalogMode()      do { ANSELDbits.ANSD0 = 1; } while(0)
#define IO_RD0_SetDigitalMode()     do { ANSELDbits.ANSD0 = 0; } while(0)

// get/set IO_RD1 aliases
#define IO_RD1_TRIS                 TRISDbits.TRISD1
#define IO_RD1_LAT                  LATDbits.LATD1
#define IO_RD1_PORT                 PORTDbits.RD1
#define IO_RD1_WPU                  WPUDbits.WPUD1
#define IO_RD1_OD                   ODCONDbits.ODCD1
#define IO_RD1_ANS                  ANSELDbits.ANSD1
#define IO_RD1_SetHigh()            do { LATDbits.LATD1 = 1; } while(0)
#define IO_RD1_SetLow()             do { LATDbits.LATD1 = 0; } while(0)
#define IO_RD1_Toggle()             do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define IO_RD1_GetValue()           PORTDbits.RD1
#define IO_RD1_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define IO_RD1_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)
#define IO_RD1_SetPullup()          do { WPUDbits.WPUD1 = 1; } while(0)
#define IO_RD1_ResetPullup()        do { WPUDbits.WPUD1 = 0; } while(0)
#define IO_RD1_SetPushPull()        do { ODCONDbits.ODCD1 = 0; } while(0)
#define IO_RD1_SetOpenDrain()       do { ODCONDbits.ODCD1 = 1; } while(0)
#define IO_RD1_SetAnalogMode()      do { ANSELDbits.ANSD1 = 1; } while(0)
#define IO_RD1_SetDigitalMode()     do { ANSELDbits.ANSD1 = 0; } while(0)

// get/set IO_RD2 aliases
#define IO_RD2_TRIS                 TRISDbits.TRISD2
#define IO_RD2_LAT                  LATDbits.LATD2
#define IO_RD2_PORT                 PORTDbits.RD2
#define IO_RD2_WPU                  WPUDbits.WPUD2
#define IO_RD2_OD                   ODCONDbits.ODCD2
#define IO_RD2_ANS                  ANSELDbits.ANSD2
#define IO_RD2_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define IO_RD2_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define IO_RD2_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define IO_RD2_GetValue()           PORTDbits.RD2
#define IO_RD2_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define IO_RD2_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
#define IO_RD2_SetPullup()          do { WPUDbits.WPUD2 = 1; } while(0)
#define IO_RD2_ResetPullup()        do { WPUDbits.WPUD2 = 0; } while(0)
#define IO_RD2_SetPushPull()        do { ODCONDbits.ODCD2 = 0; } while(0)
#define IO_RD2_SetOpenDrain()       do { ODCONDbits.ODCD2 = 1; } while(0)
#define IO_RD2_SetAnalogMode()      do { ANSELDbits.ANSD2 = 1; } while(0)
#define IO_RD2_SetDigitalMode()     do { ANSELDbits.ANSD2 = 0; } while(0)

// get/set IO_RD3 aliases
#define IO_RD3_TRIS                 TRISDbits.TRISD3
#define IO_RD3_LAT                  LATDbits.LATD3
#define IO_RD3_PORT                 PORTDbits.RD3
#define IO_RD3_WPU                  WPUDbits.WPUD3
#define IO_RD3_OD                   ODCONDbits.ODCD3
#define IO_RD3_ANS                  ANSELDbits.ANSD3
#define IO_RD3_SetHigh()            do { LATDbits.LATD3 = 1; } while(0)
#define IO_RD3_SetLow()             do { LATDbits.LATD3 = 0; } while(0)
#define IO_RD3_Toggle()             do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define IO_RD3_GetValue()           PORTDbits.RD3
#define IO_RD3_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define IO_RD3_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)
#define IO_RD3_SetPullup()          do { WPUDbits.WPUD3 = 1; } while(0)
#define IO_RD3_ResetPullup()        do { WPUDbits.WPUD3 = 0; } while(0)
#define IO_RD3_SetPushPull()        do { ODCONDbits.ODCD3 = 0; } while(0)
#define IO_RD3_SetOpenDrain()       do { ODCONDbits.ODCD3 = 1; } while(0)
#define IO_RD3_SetAnalogMode()      do { ANSELDbits.ANSD3 = 1; } while(0)
#define IO_RD3_SetDigitalMode()     do { ANSELDbits.ANSD3 = 0; } while(0)

// get/set IO_RD4 aliases
#define IO_RD4_TRIS                 TRISDbits.TRISD4
#define IO_RD4_LAT                  LATDbits.LATD4
#define IO_RD4_PORT                 PORTDbits.RD4
#define IO_RD4_WPU                  WPUDbits.WPUD4
#define IO_RD4_OD                   ODCONDbits.ODCD4
#define IO_RD4_ANS                  ANSELDbits.ANSD4
#define IO_RD4_SetHigh()            do { LATDbits.LATD4 = 1; } while(0)
#define IO_RD4_SetLow()             do { LATDbits.LATD4 = 0; } while(0)
#define IO_RD4_Toggle()             do { LATDbits.LATD4 = ~LATDbits.LATD4; } while(0)
#define IO_RD4_GetValue()           PORTDbits.RD4
#define IO_RD4_SetDigitalInput()    do { TRISDbits.TRISD4 = 1; } while(0)
#define IO_RD4_SetDigitalOutput()   do { TRISDbits.TRISD4 = 0; } while(0)
#define IO_RD4_SetPullup()          do { WPUDbits.WPUD4 = 1; } while(0)
#define IO_RD4_ResetPullup()        do { WPUDbits.WPUD4 = 0; } while(0)
#define IO_RD4_SetPushPull()        do { ODCONDbits.ODCD4 = 0; } while(0)
#define IO_RD4_SetOpenDrain()       do { ODCONDbits.ODCD4 = 1; } while(0)
#define IO_RD4_SetAnalogMode()      do { ANSELDbits.ANSD4 = 1; } while(0)
#define IO_RD4_SetDigitalMode()     do { ANSELDbits.ANSD4 = 0; } while(0)

// get/set IO_RD5 aliases
#define IO_RD5_TRIS                 TRISDbits.TRISD5
#define IO_RD5_LAT                  LATDbits.LATD5
#define IO_RD5_PORT                 PORTDbits.RD5
#define IO_RD5_WPU                  WPUDbits.WPUD5
#define IO_RD5_OD                   ODCONDbits.ODCD5
#define IO_RD5_ANS                  ANSELDbits.ANSD5
#define IO_RD5_SetHigh()            do { LATDbits.LATD5 = 1; } while(0)
#define IO_RD5_SetLow()             do { LATDbits.LATD5 = 0; } while(0)
#define IO_RD5_Toggle()             do { LATDbits.LATD5 = ~LATDbits.LATD5; } while(0)
#define IO_RD5_GetValue()           PORTDbits.RD5
#define IO_RD5_SetDigitalInput()    do { TRISDbits.TRISD5 = 1; } while(0)
#define IO_RD5_SetDigitalOutput()   do { TRISDbits.TRISD5 = 0; } while(0)
#define IO_RD5_SetPullup()          do { WPUDbits.WPUD5 = 1; } while(0)
#define IO_RD5_ResetPullup()        do { WPUDbits.WPUD5 = 0; } while(0)
#define IO_RD5_SetPushPull()        do { ODCONDbits.ODCD5 = 0; } while(0)
#define IO_RD5_SetOpenDrain()       do { ODCONDbits.ODCD5 = 1; } while(0)
#define IO_RD5_SetAnalogMode()      do { ANSELDbits.ANSD5 = 1; } while(0)
#define IO_RD5_SetDigitalMode()     do { ANSELDbits.ANSD5 = 0; } while(0)

// get/set IO_RD6 aliases
#define IO_RD6_TRIS                 TRISDbits.TRISD6
#define IO_RD6_LAT                  LATDbits.LATD6
#define IO_RD6_PORT                 PORTDbits.RD6
#define IO_RD6_WPU                  WPUDbits.WPUD6
#define IO_RD6_OD                   ODCONDbits.ODCD6
#define IO_RD6_ANS                  ANSELDbits.ANSD6
#define IO_RD6_SetHigh()            do { LATDbits.LATD6 = 1; } while(0)
#define IO_RD6_SetLow()             do { LATDbits.LATD6 = 0; } while(0)
#define IO_RD6_Toggle()             do { LATDbits.LATD6 = ~LATDbits.LATD6; } while(0)
#define IO_RD6_GetValue()           PORTDbits.RD6
#define IO_RD6_SetDigitalInput()    do { TRISDbits.TRISD6 = 1; } while(0)
#define IO_RD6_SetDigitalOutput()   do { TRISDbits.TRISD6 = 0; } while(0)
#define IO_RD6_SetPullup()          do { WPUDbits.WPUD6 = 1; } while(0)
#define IO_RD6_ResetPullup()        do { WPUDbits.WPUD6 = 0; } while(0)
#define IO_RD6_SetPushPull()        do { ODCONDbits.ODCD6 = 0; } while(0)
#define IO_RD6_SetOpenDrain()       do { ODCONDbits.ODCD6 = 1; } while(0)
#define IO_RD6_SetAnalogMode()      do { ANSELDbits.ANSD6 = 1; } while(0)
#define IO_RD6_SetDigitalMode()     do { ANSELDbits.ANSD6 = 0; } while(0)

// get/set IO_RD7 aliases
#define IO_RD7_TRIS                 TRISDbits.TRISD7
#define IO_RD7_LAT                  LATDbits.LATD7
#define IO_RD7_PORT                 PORTDbits.RD7
#define IO_RD7_WPU                  WPUDbits.WPUD7
#define IO_RD7_OD                   ODCONDbits.ODCD7
#define IO_RD7_ANS                  ANSELDbits.ANSD7
#define IO_RD7_SetHigh()            do { LATDbits.LATD7 = 1; } while(0)
#define IO_RD7_SetLow()             do { LATDbits.LATD7 = 0; } while(0)
#define IO_RD7_Toggle()             do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define IO_RD7_GetValue()           PORTDbits.RD7
#define IO_RD7_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define IO_RD7_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)
#define IO_RD7_SetPullup()          do { WPUDbits.WPUD7 = 1; } while(0)
#define IO_RD7_ResetPullup()        do { WPUDbits.WPUD7 = 0; } while(0)
#define IO_RD7_SetPushPull()        do { ODCONDbits.ODCD7 = 0; } while(0)
#define IO_RD7_SetOpenDrain()       do { ODCONDbits.ODCD7 = 1; } while(0)
#define IO_RD7_SetAnalogMode()      do { ANSELDbits.ANSD7 = 1; } while(0)
#define IO_RD7_SetDigitalMode()     do { ANSELDbits.ANSD7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/