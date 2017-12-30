///////////////////////////////////////////////////////////////////////////////
// File Name: Main.c
// Description:
//
///////////////////////////////////////////////////////////////////////////////
#include <avr/io.h>
#include <util/delay.h>

#ifndef F_CPU
#define F_CPU 1000000UL
#endif


//ascii 46 : dit (.)
//ascii 45 : dah (-)
//ascii 32 : space

int main()
{

	DDRC |= (1 << PC5);
	PORTC |= (1 << PC5);
	while (1)
	{
		PORTC ^= (1 << PC5);
		_delay_ms(500);
	}


	return 0;

}






