#include "main.h"
/**
 * print_sign - outputs the sign of a given number 
 *
 * @n: the number whose sign is to be checked
 *
 * Return: 1 if n is > 0, 0 if n = 0, -1 if n < 0
 */
int print_sign(int n)
{
	int isPositive = 1;
	if (n > 0)
	{
		_putchar(43);
		return (isPositive);
	}
	else if ((n = 0))
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
