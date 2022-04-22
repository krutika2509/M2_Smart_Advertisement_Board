/*
 * main.c
 * Created and developed by: krutika
 *  Author: KRUTIKA
 */ 

#include <xc.h>            
#define F_CPU 16000000     //Telling controller crystal frequency attached 
#include <avr/io.h>        //Header to enable data flow control in pins
#include <util/delay.h>    //Header to enable delay function in program
 
int main(void)
{
	DDRB=0xFF;             //Putting port B as output pin
	unsigned char z;       //Free variable z
	while(1)
	{
		
		for(z=0;z<300;z++) //Initialization, condition and update
		{
			PORTB=z;       //If condition is true than portB=Z
			_delay_ms(100);
		}
	}
	return 0;              //exit
}
