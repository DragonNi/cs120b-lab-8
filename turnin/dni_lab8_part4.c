/*	Author: lab
 *  Partner(s) Name:Dragon Ni
 *	Lab Section:22
 *	Assignment: Lab #8  Exercise #4
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

void ADC_init() {
	ADCSRA |= (1 << ADEN) | (1 << ADSC) | (1 << ADATE);
}


int main(void) {
    /* Insert DDR and PORT initializations */
    DDRA = 0x00; PORTA = 0xFF; 
    DDRB = 0xFF; PORTB = 0x00;
    DDRD = 0xFF; PORTD = 0x00;

    //unsigned char tempD = 0x00;

    unsigned short my_short = 0;
    // unsigned short MAX = 223;
    //unsigned char my_char = 0;
    ADC_init();

    /* Insert your solution below */
   
     
    while (1) {
    my_short = ADC;
    //my_char = (char)my_short;
    //tempD = (char)(my_short >> 8);
    if(my_short > 223)
    {
	    PORTB = 0xFF;
    }
    else if (my_short > 200)
    {
	    PORTB = 0x7F;
    }
    else if (my_short > 170)
    {
	    PORTB = 0x3F;
    }
    else if (my_short > 150)
    {
	    PORTB = 0x1F;
    }
    else if (my_short > 139)
    {
	    PORTB = 0x0F;
    }
    else if (my_short > 111)
    {
	    PORTB = 0x07;
    }
    else if (my_short > 83)
    {
	    PORTB = 0x03;
    }
    else if (my_short > 55)
    {
	    PORTB = 0x01;
    }
    else {
	    PORTB = 0x00;
    }
    }

    return 1;
}
