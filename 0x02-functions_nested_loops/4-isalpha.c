#include "main.h"
/**
 * _isalpha: checks whether a character is aplhabetic
 *
 * @c: is the ascii value
 *
 * Return: 1 if true 
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
