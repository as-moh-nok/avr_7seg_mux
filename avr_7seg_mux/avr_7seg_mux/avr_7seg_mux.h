/*
 * avr_7seg_mux.h
 *
 * Created: 10/23/2025 10:22:44 AM
 *  Author: Mr_Rayaneh_Kerman
 */ 


#ifndef AVR_7SEG_MUX_H_
#define AVR_7SEG_MUX_H_



/*
 * avr_7seg_mux.c
 *
 * Created: 10/23/2025 6:55:28 AM
 *  Author: Mr_Rayaneh_Kerman
 */ 
//#include <avr/io.h>

#pragma uesd+

int _Segment_Port;
int _Sel_Port;

int mux_7segment_init(unsigned segment_port, unsigned sel_port, unsigned seg_type, unsigned seg_num)
{
	if(segment_port>4 || sel_port>2 || seg_type>2 || seg_num>2) //invalid parameter
	{
		return 1;
	}
	
	_Segment_Port=segment_port;
	
	switch(segment_port)
	{
		case 0://A
			DDRA = 0x7F;
			break;
		
		case 1://B
			DDRB = 0x07F;
			break;
		
		case 2://C
			DDRC= 0x07F;
			break;
	}
	
	_Sel_Port=  sel_port;
	
	switch(sel_port)
	{
		case 0:
			DDRA= 0x03;return 0;//for(int i=0; i<seg_num; i++) DDRA= DDRA | (1<<DDRA); return 0;
					
		case 1://B
			DDRB= 0x03;return 0;//for(int i=0; i<seg_num; i++) DDRB= DDRB | (1<<DDRB); return 0;
	}
	return 0;
	
}

void mux_7segment_put_int(unsigned first, unsigned second)
{
	
	for(int i=0; i<_Sel_Port;i++)
		{
		if(_Sel_Port ==  1)
			_Segment_Port= 0x03;
			
		if(_Sel_Port == 0)
			_Segment_Port= 0x02;	
		
		}
	
}

#pragma uesed-

#endif /* AVR_7SEG_MUX_H_ */