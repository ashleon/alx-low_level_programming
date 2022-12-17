#include "main.h"
/**
 * _isdigit - checks for values 0 through 9
 * @c: the value to be checked
 * 
 * Return: 1 if c is a number, else returns 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
