#include "main.h"
/**
 * _isupper - checks whether the ascii value is for an uppercase letter
 *
 * @c: ascii code
 *
 * Return: 1 if character is upper case
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
