#include "main.h"
/**
 *
 * print_diagonal - draws a diagonal line across (n) terminal lines.
 *
 * @n: the number of lines to print
 *
 * Return: null
 */
void print_square(int size)
{
	int i, j;

	if (n > 0)
	{
		for (j = 1; j <= n; j++)
		{
			for (i = 1; i <= j; i++)
			{
				if (i != 1)
					_putchar(' ');
				if (i == j)
				{
					_putchar('\\');
					_putchar('\n');
				}
			}
		}
	}
	else
		_putchar('\n');
}
