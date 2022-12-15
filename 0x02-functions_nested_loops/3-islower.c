#include "main.h"
/**
 * _islower - checks whether a character is lowercase
 *
 * @c: is the ascii value for the alphabet
 *
 * Return: 1 if @c is lowercase alphabet
 */
int _islower(int c)
{
	int islower = 1, notLower = 0;

	if (c <= 122 && c >= 97)
		return (islower);
	return (notLower);
}
