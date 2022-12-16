#include "main.h"
/**
 * positive_or_negative - determines whether a number is positive or negative
 * @i: the number which is to be checked
 * Return: null
 */
void positive_or_negative(int i)
{
	if (i < 0)
		_putchar(-1);
	else if (i > 0)
		_putchar(1);
	else
		_putchar(0);
}
