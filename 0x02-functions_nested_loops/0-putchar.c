#include <stdio.h>
/**
 * prints alphabetical letters
 *
 * Return: Always 0.
 */
void printAlphabet(void)
{
	char m;

	for (m = 'a'; m<= 'z'; m++)
		_putchar(m);
	_putchar('\n');
}
