#include"LCD_4bit.h"
#include"delay.h"


//LCD COMMAND Function
void LCD_Cmd(char cmd )
{
	RS = 0; //Command Register
	RW = 0; //Write Operation
	LCD_Port = (cmd & 0XF0); //For Upper Nibble -> It will do masking of command address
	EN = 1;
	delay(2);
	EN = 0;
	
	LCD_Port = ((cmd << 4) & 0xF0);  //For Lower Nibble
	EN = 1;
	delay(2);
	EN = 0;
}
	
void LCD_Data(char Data)
{
	RS = 1; //Data Register
	RW = 0; //Write Operation
	LCD_Port = (Data & 0xF0); //Data is sending Upper nibble to LCD Port
	EN = 1;
	delay(2);
	EN = 0;
	
	LCD_Port = ((Data << 4) & 0xF0); // Send lower nibble
	EN = 1;
	delay(2);
	EN = 0;
}

void LCD_Initialization()
{
	delay(5);
	LCD_Cmd(0x02);
	LCD_Cmd(0X28); // Initialization of 16X2 LCD in 4 bitmode
	LCD_Cmd(0X0C); // Display On, Cursor Off
	LCD_Cmd(0X06); // Auto Increment cursor
	LCD_Cmd(0X01); //Clear Display
}
	
void LCD_String(char *str)
{
	while(*str)
	{
		LCD_Data(*str++);
	}
}