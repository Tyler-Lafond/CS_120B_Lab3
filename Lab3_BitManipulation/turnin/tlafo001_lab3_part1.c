/*	Author: tlafo001
 *  Partner(s) Name: 
 *	Lab Section: 022
 *	Assignment: Lab # 3  Exercise # 1
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
	DDRB = 0x00; PORTB = 0xFF;
	DDRC = 0xFF; PORTC = 0x00;
    /* Insert your solution below */
	unsigned char tempA;
	unsigned char tempB;
	unsigned char count;

    while (1) {
	tempA = PINA;
	tempB = PINB;
	count = 0x00;

	while(tempA != 0x00)
	{
		count += tempA & 0x01;
		tempA = tempA >> 1;
	}
	while(tempB != 0x00)
	{
		count += tempB & 0x01;
		tempB = tempB >> 1;
	}

	PORTC = count;
    }
    return 1;
}
