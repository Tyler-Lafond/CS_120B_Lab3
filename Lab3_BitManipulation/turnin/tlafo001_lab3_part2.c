/*	Author: tlafo001
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab # 3  Exercise # 2
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
	DDRA = 0x00; PORTA = 0xFF;
	DDRC = 0xFF; PORTC = 0x00;
    /* Insert your solution below */
	unsigned char tempA;

    while (1) {
	tempA = PINA;

	if ((tempA & 0x0F) > 12)
	{
		PORTC = 0x3F;
	}
	else if ((tempA & 0x0F) > 9)
	{
		PORTC = 0x3E;
	}
	else if ((tempA & 0x0F) > 6)
	{
		PORTC = 0x3C;
	}
	else if ((tempA & 0x0F) > 4)
	{
		PORTC = 0x38;
	}
	else if ((tempA & 0x0F) > 2)
	{
		PORTC = 0x70;
	}
	else if ((tempA & 0x0F) > 0)
	{
		PORTC = 0x60;
	}
	else
	{
		PORTC = 0x40;
	}
    }
    return 1;
}
