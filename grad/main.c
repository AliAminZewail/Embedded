#include"STD_TYPES.h"
#include"GPIO_DRV.h"
#include"LCD.h"
#include"ADC_DRV.h"
#include"SENSOR_TMP.h"
#include"RegMap.h"


/**
 * main.c
 */
int main(void)
   {
	uint16 x ;
    uint16  y ;
    uint8 arr[3]={0} ;
    uint8 rest=0,i=0 ;
   /* GPIO_PIN_INIT(PA, PIN6, OUT, I_2mA);*/
    ADC_voidInit( ADC0, AIN0, SS3);
    LCD_init();
	   
	   
    while(1)
{


   
    LCD_Send_Command(1);
    LCD_Send_Char('T');
    LCD_Send_Char('e');
    LCD_Send_Char('m');
    LCD_Send_Char('p');
    LCD_Send_Char('e');
    LCD_Send_Char('r');
    LCD_Send_Char('a');
    LCD_Send_Char('t');
    LCD_Send_Char('u');
    LCD_Send_Char('r');
    LCD_Send_Char('e');
    LCD_Send_Char('=');

    y = SENSOR_Temp(ADC0,AIN0,SS3);


     while (y != 0) {
                    rest = y % 10;
                    arr[i] = rest;
                    y = y / 10;
					i++;
                   }


        //LCD_Send_Command(0x01);
        //LCD_Send_Char(arr[2]+'0');
         LCD_Send_Char(arr[0]+'0');
         LCD_Send_Char(arr[1]+'0');

            _delay_ms(1000);

}

return 0;
   }
