#include "main.h"
/**
 * _isupper - determines whether a character is lowercase or uppercase
 *
 * @c: the ascii value of the character
 * Return: 1 if uppercase, 0 if lowercase
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (0);
}
