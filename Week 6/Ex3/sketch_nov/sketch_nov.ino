


void setup()
{
    DDRD |= (1 << DDD6);
    // PD6 is now an output

    OCR0A = 128;
    // set PWM for 50% duty cycle


    TCCR0A |= (1 << COM0A1);
    // set none-inverting mode

    TCCR0A |= (1 << WGM01) | (1 << WGM00);
    // set fast PWM Mode

    TCCR0B |= (1 << CS01);
    // set prescaler to 8 and starts PWM


    while (1);
    {
        // we have a working Fast PWM
    }
}
