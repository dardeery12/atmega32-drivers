/*
 * lm35 temprature.c
 *
 * Created: 05-Sep-19 8:45:41 PM
 * Author : dardeery
 */ 

#include <avr/io.h>
#include "lcd.h"
#include "adc.h"

int main(void)
{
	volatile int read =0;
	volatile float temp =0.0 ;
	lcd_init();
	ADC_Init();
	lcd_goto_xy(1,1);
	lcd_send_str("LM35 sensor");
	lcd_goto_xy(1,2);
    while (1) 
    {
	read =ADC_Read(0);
	temp = (read/2.034);
	lcd_send_num(temp);
	lcd_send_cmnd(0xC0);	
    }
}

