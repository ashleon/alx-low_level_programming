#include "main.h"
/**
 *
 * print_most_numbers - prints 0 through 9 except for 2 and 4
 *
 * Return: null
 */
void print_most_numbers(void)
{
	int i;
	
	i = 0;

	do {
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
		i++;
	} while (i <= 9);
	_putchar('\n');
}
