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

	f = 0;

	for (f; f <= 10; f++)
	{
		int n;
		for (n = 0; n <= 14; n++)
		{
			if (n < 9)
			{
				_putchar((y / 10) + '0');
			}
			_putchar((y % 10) + '0');
		}
		_putchar('\n');
	}
}

