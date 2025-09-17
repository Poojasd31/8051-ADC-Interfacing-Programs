#include<reg51.h>
#include"LCD_4bit.h"
#include"delay.h"

#define ADC_PORT P1 //ADC=PORT 1

//RD,WR AND INTR declartion for ADC 0804

sbit RD1 = P0^3;//RD
sbit WR1 = P0^4; //WR
sbit INTR = P0^5;//INTR

void main()
{
	unsigned char adc_read = 0;
	
	LCD_Initialization(); //Initialization
	LCD_Cmd(0X82); //1ST ROW
	LCD_String("ADC VALUES-"); 
	
	while(1)
	{
		//START THE CONVERSION - LOW TO HIGH
		WR1 = 0;
		delay(5);
		WR1 = 1;
		//MONITOR THE FLAG - CONVERSION IS IN PROGRESS
		while(INTR == 1);
			RD1 = 0;
			delay(5);
			adc_read = ADC_PORT ;
			RD1 = 1;
			LCD_Cmd(0XC2);
			LCD_Data((adc_read/100)+'0');//D2 PLACE DIGIT
			LCD_Data(((adc_read/10)%10)+'0'); //D1 PLACE DIGIT
			LCD_Data((adc_read%10)+'0'); //D0 place digit
	}
}
