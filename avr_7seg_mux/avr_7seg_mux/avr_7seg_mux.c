/*
 * avr_7seg_mux.c
 *
 * Created: 10/23/2025 6:55:28 AM
 *  Author: Mr_Rayaneh_Kerman
 */ 
#include <avr/io.h>

#pragma uesd+
int _Sel_Line;


int mux_7segment_init(unsigned segment_port, unsigned sel_port, unsigned seg_type, unsigned seg_num)
{
	if(segment_port>4 || sel_port>2 || seg_type>2 || seg_num>2) //invalid parameter
	{
		return 1;
	}
	
	switch(segment_port)
	{
		case 0://A
			for(int i=0; i<seg_num; i++)
				DDRA= DDRA | (1<<DDRA);
			#define seg_Port PORTA
		
		case 1://B
			for(int i=0; i<seg_num; i++)
				DDRB= DDRB | (1<<DDRB);
			#define seg_Port PORTB			
		
	}
	
	switch(sel_port)
	{
		case 0:
			for(int i=0; i<seg_num; i++)
				DDRA= DDRA | (1<<DDRA);
			#define _Sel_Line PORTA
			
		case 1://B
			for(int i=0; i<seg_num; i++)
				DDRB= DDRB | (1<<DDRB);
			#define _Sel_Line PORTB			
	}
	return 0;
	
}

void mux_7segment_put_int(unsigned first, unsigned second)
{
	for(int i=0; i<_Sel_Line;i++)
	if(_Sel_Line ==  1)
		seg_Port= 0x03;

	
}
#pragma uesed-