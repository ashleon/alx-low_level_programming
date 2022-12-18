#include "main.h"
/**
 * print_square - prints a squarw of #s
 *
 * @size: the size of the sqaure
 *
 * Return: null
 */
void print_square(int size)
{
	int i, j;


	if( size > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
