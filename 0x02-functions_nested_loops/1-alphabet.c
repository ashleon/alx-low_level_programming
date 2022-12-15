#include "main.h"
/**
 * prints lowercase alphabet followed by a new line
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char l;
	for (l = 'a'; l <= 'z'; l++)
		_putchar(l);
	_putchar('\n');
}
