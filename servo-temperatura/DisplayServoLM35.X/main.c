/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC16F18875
        Driver Version    :  2.00
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

#include "mcc_generated_files/mcc.h"
int valor_adc = 0;
int uni, dec, cen, unm;
float temp_lm35 = 0.0;
int x, tiempo;
int valor_pwm = 0;
// D0=a    ...   D6=g    D7=punto
uint8_t numeros[10] = {0b11000000, // 0
    0b11111001, // 1
    0b10100100, // 2
    0b10110000, // 3
    0b10011001, // 4
    0b10010010, // 5
    0b10000011, // 6
    0b11111000, // 7
    0b10000000, // 8
    0b10011000, // 9
};

/*
                         Main application
 */
void main(void) {
    // initialize the device
    SYSTEM_Initialize();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();
    tiempo = 0;
    // 9bits de PWM = 511
    // 20 es 0 grados
    PWM6_LoadDutyValue(15);
    __delay_ms(1000);
    PWM6_LoadDutyValue(75);
    __delay_ms(1000);

    /*for (int i=0; i<10;i++){
    DIS_U_SetHigh();
        DIS_D_SetLow();
        DIS_C_SetLow();
        DIS_UM_SetLow();
        LATD = numeros[i];
        __delay_ms(1000);
    }
     */
    ADCC_DisableContinuousConversion();
    while (1) {
        // Add your application code
        tiempo = tiempo + 20;
        // adc -> 10bits. Valor max. 1023
        valor_adc = ADCC_GetSingleConversion(LM35);
        
        //ADCC_DisableContinuousConversion()
        //temp_lm35 = ((((float) valor_adc)*5.0) / 1023.0)*100.0;
        temp_lm35 = 23.58;
        
        // -4*temp_lm35 +5*valor_pwm = 100
        //
        valor_pwm = (75.0 + 6.0 * temp_lm35) / 5.0;

// __delay_ms(4);

        if (tiempo > 40) { // cada 1000 ms = 1 seg
            printf("%0.2f\n", temp_lm35);
            PWM6_LoadDutyValue(valor_pwm);
            tiempo = 0;
        }
        //__delay_ms(500); solo para pruebas
        // temp_lm35 = 12.34
        x = temp_lm35 * 100; // 12.34 *100 = 1234
        unm = (x / 1000); // 1234/1000 = 1
        cen = (x - unm * 1000) / 100; // (1234 - 1*1000)/100 = 2
        dec = (x - unm * 1000 - cen * 100) / 10; //(1234 - 1*1000 - 2*100)/10
        uni = (x - unm * 1000 - cen * 100 - dec * 10);
        for (int i = 0; i < 15; i++) {
            DIS_U_SetHigh();
            DIS_D_SetLow();
            DIS_C_SetLow();
            DIS_UM_SetLow();
            LATD = numeros[uni];
            __delay_ms(2);

            DIS_U_SetLow();
            DIS_D_SetHigh();
            DIS_C_SetLow();
            DIS_UM_SetLow();
            LATD = numeros[dec];
            __delay_ms(2);

            DIS_U_SetLow();
            DIS_D_SetLow();
            DIS_C_SetHigh();
            DIS_UM_SetLow();
            LATD = numeros[cen];
            LATDbits.LATD7 = 0; // para prender el punto
            __delay_ms(2);

            DIS_U_SetLow();
            DIS_D_SetLow();
            DIS_C_SetLow();
            DIS_UM_SetHigh();
            LATD = numeros[unm];
            __delay_ms(2);
        }
    }
}
/**
 End of File
 */