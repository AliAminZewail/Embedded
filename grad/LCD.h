/*
 * LCD.h
 *
 *  Created on: Nov 25, 2019
 *      Author: ali zewail
 */

/*
 * LCD.h
 *
 *  Created on: Sep 6, 2019
 *      Author: ali zewail
 */

#ifndef LCD_H_
#define LCD_H_

typedef enum
{
    OKAY,
    NOKAY
}LCD_status;


            #define LCD_DATA_PORTA (*((volatile uint32*)0x400583C0))
            #define LCD_DATA_PORTB (*((volatile uint32*)0x400593C0))
            #define LCD_DATA_PORTC (*((volatile uint32*)0x400063C0))
            #define LCD_DATA_PORTD (*((volatile uint32*)0x4005B3C0))
            #define LCD_DATA_PORTE (*((volatile uint32*)0x4005C3C0))
            #define LCD_DATA_PORTF (*((volatile uint32*)0x4005D3C0))




LCD_status LCD_init(void);

LCD_status LCD_Write_Nibble(uint8 data,uint8 control);

LCD_status LCD_Send_Command(uint8 cmnd);

LCD_status LCD_Send_Char(uint8 data);


void _delay_ms(uint32 n);

void _delay_us(uint32 n);

#endif /* LCD_H_ */
