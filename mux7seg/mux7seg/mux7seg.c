
#pragma used+

unsigned int sevsegment_PORT;
unsigned int sevsegment_Type;

//PORT : 0 ->A , 1 ->B, 2-> C, 3 -> D
//_sevsegment_Type : 0 -> CA , 1->CC
int segment_init(unsigned int _PORT, unsigned int _TYPE)
{
	//return 1 as invalid port or type
	if(_PORT>3)	return 1;		
	if(_TYPE>2) return 1;

	
	sevsegment_PORT = _PORT; 
	sevsegment_Type = _TYPE;
	
	switch(_PORT)
	{	
		//case 0 : DDRA = 0X7F; return 0;		//un used for atmega325
		case 1 : DDRB = 0X7F; return 0;
		case 2 : DDRC = 0X7F; return 0;
		case 3 : DDRD = 0X7F; return 0;		
	}
	
	return 0;
}


int segment_putchar(char input)
{
	if(sevsegment_Type == 0 )		// -> CA
	{
		switch(sevsegment_PORT)
		{
			/*case 0: //0->
			{
			 // if(input == '0')PORTA=0x40;
			  if(input == '1')PORTA=0x79;
			  if(input == '2')PORTA=0x24;
			  if(input == '3')PORTA=0x30;
			  if(input == '4')PORTA=0x19;
			  if(input == '5')PORTA=0x12;
			  if(input == '6')PORTA=0x04;
			  if(input == '7')PORTA=0x78;
			  if(input == '8')PORTA=0x00;
			  if(input == '9')PORTA=0x10;
			  if(input == 'A')PORTA=0x08;
			  if(input == 'B')PORTA=0x78;
			  break;
			}*/
			case 1:
			{
			  if(input == '0')PORTB=0x40;
			  if(input == '1')PORTB=0x79;
			  if(input == '2')PORTB=0x24;
			  if(input == '3')PORTB=0x30;
			  if(input == '4')PORTB=0x19;
			  if(input == '5')PORTB=0x12;
			  if(input == '6')PORTB=0x04;
			  if(input == '7')PORTB=0x78;
			  if(input == '8')PORTB=0x00;
			  if(input == '9')PORTB=0x10;
			  if(input == 'A')PORTB=0x08;
			  if(input == 'B')PORTB=0x78;	
			  break;			
			}
			case 2:
			{
			  if(input == '0')PORTC=0x40;
			  if(input == '1')PORTC=0x79;
			  if(input == '2')PORTC=0x24;
			  if(input == '3')PORTC=0x30;
			  if(input == '4')PORTC=0x19;
			  if(input == '5')PORTC=0x12;
			  if(input == '6')PORTC=0x04;
			  if(input == '7')PORTC=0x78;
			  if(input == '8')PORTC=0x00;
			  if(input == '9')PORTC=0x10;
			  if(input == 'A')PORTC=0x08;
			  if(input == 'B')PORTC=0x78;				
			  break;
			}
			case 3:
			{
			  if(input == '0')PORTD=0x40;
			  if(input == '1')PORTD=0x79;
			  if(input == '2')PORTD=0x24;
			  if(input == '3')PORTD=0x30;
			  if(input == '4')PORTD=0x19;
			  if(input == '5')PORTD=0x12;
			  if(input == '6')PORTD=0x04;
			  if(input == '7')PORTD=0x78;
			  if(input == '8')PORTD=0x00;
			  if(input == '9')PORTD=0x10;
			  if(input == 'A')PORTD=0x08;
			  if(input == 'B')PORTD=0x78;
			  break;				
			}	
		}
		if(sevsegment_Type == 1)  // -> CC
		{
			switch(sevsegment_PORT)
			{
				/*case 0: // 0->A
				{
				  if(input == '0')PORTA=0x3F;
				  if(input == '1')PORTA=0x06;
				  if(input == '2')PORTA=0x5B;
				  if(input == '3')PORTA=0x4F;
				  if(input == '4')PORTA=0x66;
				  if(input == '5')PORTA=0x6D;
				  if(input == '6')PORTA=0x7D;
				  if(input == '7')PORTA=0x07;
				  if(input == '8')PORTA=0x7F;
				  if(input == '9')PORTA=0x6F;
				  if(input == 'A')PORTA=0x77;
				  if(input == 'B')PORTA=0x7C;
				  break;					
				}*/
				case 1: // 1->B
				{
				  if(input == '0')PORTB=0x3F;
				  if(input == '1')PORTB=0x06;
				  if(input == '2')PORTB=0x5B;
				  if(input == '3')PORTB=0x4F;
				  if(input == '4')PORTB=0x66;
				  if(input == '5')PORTB=0x6D;
				  if(input == '6')PORTB=0x7D;
				  if(input == '7')PORTB=0x07;
				  if(input == '8')PORTB=0x7F;
				  if(input == '9')PORTB=0x6F;
				  if(input == 'A')PORTB=0x77;
				  if(input == 'B')PORTB=0x7C;
				  break;					
				}
				case 2: // 2->C
				{
				  if(input == '0')PORTC=0x3F;
				  if(input == '1')PORTC=0x06;
				  if(input == '2')PORTC=0x5B;
				  if(input == '3')PORTC=0x4F;
				  if(input == '4')PORTC=0x66;
				  if(input == '5')PORTC=0x6D;
				  if(input == '6')PORTC=0x7D;
				  if(input == '7')PORTC=0x07;
				  if(input == '8')PORTC=0x7F;
				  if(input == '9')PORTC=0x6F;
				  if(input == 'A')PORTC=0x77;
				  if(input == 'B')PORTC=0x7C;
				  break;					
				}
				case 3: // 3->D
				{
				  if(input == '0')PORTD=0x3F;
				  if(input == '1')PORTD=0x06;
				  if(input == '2')PORTD=0x5B;
				  if(input == '3')PORTD=0x4F;
				  if(input == '4')PORTD=0x66;
				  if(input == '5')PORTD=0x6D;
				  if(input == '6')PORTD=0x7D;
				  if(input == '7')PORTD=0x07;
				  if(input == '8')PORTD=0x7F;
				  if(input == '9')PORTD=0x6F;
				  if(input == 'A')PORTD=0x77;
				  if(input == 'B')PORTD=0x7C;
				  break;					
				}
			}
		}
	}
	

	return 0;
	
}

int segment_full()
{
	switch(sevsegment_PORT)
	{
		/*
		case 'B': PORTB = 0xFF; return 0;
		case 'C': PORTC = 0xFF; return 0;
		case 'D': PORTB = 0xFF; return 0;
		*/
		case 'B': PORTB = 0x00; return 0;
		case 'C': PORTC = 0x00; return 0;
		case 'D': PORTD = 0x00; return 0;
	}
}

int segment_off()
{
		switch(sevsegment_PORT)
	{
		case 'B': PORTB = 0; return 0;
		case 'C': PORTC = 0; return 0;
		case 'D': PORTD = 0; return 0;
	}
}


#pragma used- 