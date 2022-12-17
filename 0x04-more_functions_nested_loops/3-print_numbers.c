#include "main.h"
/**
 * print_numbers - outputs 0 through 9
 *
 * Return: null
 */
void print_numbers(void)
{
	int i;

	while (i <= 9) 
	{
		_putchar(i + '0');
		++i;
	}

	_putchar('\n');
}
