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
	int d;

	d = 0;

	for (d; d <= size - 1; d++)
	{
		int e;
		for (e = 1; e < size; e++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
