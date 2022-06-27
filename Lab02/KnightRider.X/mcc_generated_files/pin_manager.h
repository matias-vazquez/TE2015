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
        Device            :  PIC18F45K50
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

// get/set KR0 aliases
#define KR0_TRIS                 TRISBbits.TRISB0
#define KR0_LAT                  LATBbits.LATB0
#define KR0_PORT                 PORTBbits.RB0
#define KR0_WPU                  WPUBbits.WPUB0
#define KR0_ANS                  ANSELBbits.ANSB0
#define KR0_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define KR0_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define KR0_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define KR0_GetValue()           PORTBbits.RB0
#define KR0_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define KR0_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define KR0_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define KR0_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define KR0_SetAnalogMode()      do { ANSELBbits.ANSB0 = 1; } while(0)
#define KR0_SetDigitalMode()     do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set KR1 aliases
#define KR1_TRIS                 TRISBbits.TRISB1
#define KR1_LAT                  LATBbits.LATB1
#define KR1_PORT                 PORTBbits.RB1
#define KR1_WPU                  WPUBbits.WPUB1
#define KR1_ANS                  ANSELBbits.ANSB1
#define KR1_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define KR1_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define KR1_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define KR1_GetValue()           PORTBbits.RB1
#define KR1_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define KR1_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define KR1_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define KR1_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define KR1_SetAnalogMode()      do { ANSELBbits.ANSB1 = 1; } while(0)
#define KR1_SetDigitalMode()     do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set KR2 aliases
#define KR2_TRIS                 TRISBbits.TRISB2
#define KR2_LAT                  LATBbits.LATB2
#define KR2_PORT                 PORTBbits.RB2
#define KR2_WPU                  WPUBbits.WPUB2
#define KR2_ANS                  ANSELBbits.ANSB2
#define KR2_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define KR2_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define KR2_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define KR2_GetValue()           PORTBbits.RB2
#define KR2_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define KR2_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define KR2_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define KR2_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define KR2_SetAnalogMode()      do { ANSELBbits.ANSB2 = 1; } while(0)
#define KR2_SetDigitalMode()     do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set KR3 aliases
#define KR3_TRIS                 TRISBbits.TRISB3
#define KR3_LAT                  LATBbits.LATB3
#define KR3_PORT                 PORTBbits.RB3
#define KR3_WPU                  WPUBbits.WPUB3
#define KR3_ANS                  ANSELBbits.ANSB3
#define KR3_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define KR3_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define KR3_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define KR3_GetValue()           PORTBbits.RB3
#define KR3_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define KR3_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define KR3_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define KR3_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define KR3_SetAnalogMode()      do { ANSELBbits.ANSB3 = 1; } while(0)
#define KR3_SetDigitalMode()     do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set KR4 aliases
#define KR4_TRIS                 TRISBbits.TRISB4
#define KR4_LAT                  LATBbits.LATB4
#define KR4_PORT                 PORTBbits.RB4
#define KR4_WPU                  WPUBbits.WPUB4
#define KR4_ANS                  ANSELBbits.ANSB4
#define KR4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define KR4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define KR4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define KR4_GetValue()           PORTBbits.RB4
#define KR4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define KR4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define KR4_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define KR4_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define KR4_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define KR4_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set KR5 aliases
#define KR5_TRIS                 TRISBbits.TRISB5
#define KR5_LAT                  LATBbits.LATB5
#define KR5_PORT                 PORTBbits.RB5
#define KR5_WPU                  WPUBbits.WPUB5
#define KR5_ANS                  ANSELBbits.ANSB5
#define KR5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define KR5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define KR5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define KR5_GetValue()           PORTBbits.RB5
#define KR5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define KR5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define KR5_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define KR5_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define KR5_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define KR5_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set KR6 aliases
#define KR6_TRIS                 TRISBbits.TRISB6
#define KR6_LAT                  LATBbits.LATB6
#define KR6_PORT                 PORTBbits.RB6
#define KR6_WPU                  WPUBbits.WPUB6
#define KR6_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define KR6_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define KR6_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define KR6_GetValue()           PORTBbits.RB6
#define KR6_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define KR6_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define KR6_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define KR6_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)

// get/set KR7 aliases
#define KR7_TRIS                 TRISBbits.TRISB7
#define KR7_LAT                  LATBbits.LATB7
#define KR7_PORT                 PORTBbits.RB7
#define KR7_WPU                  WPUBbits.WPUB7
#define KR7_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define KR7_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define KR7_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define KR7_GetValue()           PORTBbits.RB7
#define KR7_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define KR7_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define KR7_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define KR7_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)

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