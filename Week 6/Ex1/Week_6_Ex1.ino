
void setup()
{
unsigned char* ddrd   =   (unsigned char*) 0x2A;
unsigned char* ocr0b  =   (unsigned char*) 0x48;
unsigned char* tccr0a =   (unsigned char*) 0x44;
unsigned char* tccr0b =   (unsigned char*) 0x45;  
*ddrd = 1 << 5;
*ocr0b =  127;
*tccr0a = 0b00100011;
*tccr0b = 0b00000011;
}

/*
we also can use this 
void setup()
{
DDRB = 1 << 5;
OCR1AL = 127;
TCCR1A = 0b10000011;
TCCR1B = 0b00000010;
}

 
 
 
 */
