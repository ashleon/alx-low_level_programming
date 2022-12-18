#include "main.h"
/**
 *
 * more_numbers - prints 0 to 14 10 times
 *
 * Return: null
 */
void more_numbers(void)
{
	int f;
	int j;

	f = j = 0;
	while (f < 10)
	{
		while (j <= 14)
		{
			if (j >= 10)
				_putchar(j / 10 + '0');


			_putchar(j % 10 + '0');
			++j;
		}

		_putchar('\n');
		f = 0;
		f++;

	}
}

