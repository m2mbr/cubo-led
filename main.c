#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB = 0xFF;
	DDRD = 0x00;
	PORTB = 0x00;
	for (;;) {
		PORTB |= (1 << PB0);
		_delay_ms(150);
		PORTB = 0x00;
		PORTB |= (1 << PB1);
		_delay_ms(150);
		PORTB = 0x00;
		PORTB |= (1 << PB2);
		_delay_ms(150);
		PORTB = 0x00;
	}
}