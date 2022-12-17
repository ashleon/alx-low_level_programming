#include "main.h"
/**
 * _isdigit - checks for digits between 0 through 9
 *
 * @c: ascii value for a character
 * Return: 1 if chacter is a number between 0 and 9, else returs 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}

