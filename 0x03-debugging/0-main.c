#include "main.h"
/**
 * positive_or_negative - determines whether a value is positive or negative
 *
 * @i: the value that is to be assesed
 *
 * Return: null
 */
void positive_or_negative(int i)
{
	if (i < 0)
		_putchar(-1);
	else if ( i == 0)
		_putchar(0);
	else if (i > 0)
		_putchar(1);
}
