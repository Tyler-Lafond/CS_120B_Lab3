/*	Author: tlafo001
 *  Partner(s) Name: 
 *	Lab Section: 022
 *	Assignment: Lab # 3  Exercise # 5
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
	DDRB = 0xFE; PORTB = 0x01;
	DDRD = 0x00; PORTD = 0xFF;
    /* Insert your solution below */
	unsigned short weight;

    while (1) {
	weight = (PIND << 1) | (PINB & 0x01);
	printf("%d",weight);
	
	if (weight >= 70)
	{
		PORTB = 0x01 << 1;
	}
	else if (weight > 5)
	{
		PORTB = 0x01 << 2;
	}
	else
	{
		PORTB = 0x00;
	}
    }
    return 1;
}
