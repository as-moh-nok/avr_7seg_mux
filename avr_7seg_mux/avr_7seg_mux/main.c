/*
 * avr_7seg_mux.c
 *
 * Created: 10/23/2025 6:53:31 AM
 * Author : Mr_Rayaneh_Kerman
 */ 

#include <avr/io.h>
#include "avr_7seg_mux.h"

/*
void test()
{
	DDRA = 0x77;
	PORTA = 0x77;
}

void test2()
{
	DDRB = 0x77;
	PORTB = 0x77;
}
*/

int main(void)
{
//	test();
//	test2();
	
	int a = mux_7segment_init(2,0,1,1);
	
/*	if(a==0)
		PORTA = 0x01;
	if(a==1)
		PORTA = 0x10;
	*/	
    int b = mux_7segment_put_int(1,3);
	
/*	if(b==0);
		PORTB = 0x01;
	if(b==1)
		PORTB = 0x10;
		
	/* Replace with your application code */
    while (1) 
    {
		
    }
}

