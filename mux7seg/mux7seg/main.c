/*
 * seg7_lib.c
 *
 * Created: 10/5/2025 7:17:49 AM
 * Author : Mr_Rayaneh_Kerman
 */ 

#include <avr/io.h>
#include <util/delay.h>
#include "mux7seg.c"
#define F_CPU 8000000UL // 16 MHz clock speed

int main(void)
{
	//SET OUTPUT
	DDRC = 0xFF;
	PORTC = 0x06;
	
	DDRA = 0xFF;
	PORTA = 0x01;
	
	
	_delay_ms(2000);	
	/*segment_init(2,1);
	segment_putchar('3');
//	segment_full();//
	_delay_ms(2000);	
    
	int i = 9;
	/* Replace with your application code */
    while (1) 
    {
		PORTC = 0x79;
		PORTA = 0x08;
		_delay_ms(50);
		
		PORTC = 0x19;
		PORTA = 0x04;
		_delay_ms(50);
	
		PORTC = 0x40;
		PORTA = 0x02;
		_delay_ms(50);
		
		
		PORTC = 0x12;
		PORTA = 0x01;
		_delay_ms(50);

		/*
		for(unsigned int i = 1;i<4;i++)
		{
			PORTC = 0x0F;
			_delay_ms(1000);
			
						PORTC = 0x00;
						_delay_ms(1000);
					
		}
/*		for(unsigned int i=0; i<13;i++)
		{
			segment_putchar(i);
			_delay_ms(1000);
		}
	*/	
		//segment_putInt('a');
		//_delay_ms(1000);
		//segment_off();
		//return 0;
    }
}

