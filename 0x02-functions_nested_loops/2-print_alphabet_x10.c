#include "main.h"
/**
 * print_alphabet_x10 - outputs every lowercase alphabet letter 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char r;
	int n;

	n = 0;

	do {
		for (r = 'a'; r <= 'z'; r++)
			_putchar(r);
		_putchar('\n');
		n++;
	} while (n <= 9);
}

