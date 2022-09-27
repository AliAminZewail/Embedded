#include"STD_TYPES.h"
#include"GPIO_DRV.h"
#include"ADC_DRV.h"
#include"SENSOR_TMP.h"
#include"RegMap.h"




uint16 SENSOR_Temp(ADC_MOD_t mod,ADC_CH_t ch,SS_t samp);
{
		
		
		uint16  x ;
		uint16  y ;
		void ADC_voidInit(mod,ch,samp);
		void ADC_voidStartConversion(mod ,samp);
		 x = ADC_uint16GetData(mod, samp);
		 y =  (uint32)(x * 3300)/(2^12) ;
		 y=y/1000;
		 
		 if(y<15)
			 y=y+10;
		 else if(y>40)
			 y=35;
		 
		 return y;

}