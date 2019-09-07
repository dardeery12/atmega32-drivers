/*
 * adc.c
 *
 * Created: 05-Sep-19 5:45:05 PM
 *  Author: dardeery
 */ 
#include "adc.h"
void ADC_Init()				// ADC Initialization function 
{
	DDRA = 0x00;			// Make ADC port as input 
	ADCSRA = 0x87;			// Enable ADC, with freq/128 
	ADMUX = 0x40;			// Vref: Avcc, ADC channel: 0 
}

int ADC_Read(char channel)		// ADC Read function 
{
	ADMUX = 0x40 | (channel & 0x07);// set input channel to read 
	ADCSRA |= (1<<ADSC);		// Start ADC conversion 
	while (!(ADCSRA & (1<<ADIF)));	// Wait until end of conversion 
	ADCSRA |= (1<<ADIF);		// Clear interrupt flag 
	_delay_ms(1);			// Wait a little bit 
	return ADCW;			// Return ADC word 
}