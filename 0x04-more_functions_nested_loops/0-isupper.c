#include "main.h"
/**
 * _isupper - checks whether the ascii value is for an uppercase letter
 *
 * @c: charcter to be checked out
 *
 * Return: 1 if character is upper case, else retuns 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
