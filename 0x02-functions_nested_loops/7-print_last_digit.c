#include "main.h"
/**
 * print_last_digit - returns the last digit of a number
 *
 * @n: the numbe for which we are to find the last digit
 *
 * Return: the last digit of n
 *
 */
int print_last_digit(int n)
{
	int k;

	k = n % 10;
	if (k < 0)
	{
		k *= -1;
		return (k);
	}
	else if (k > 10)
	{
		k = print_last_digit(k);
	}
	else if (k == 0)
		return (k);
	return (k);
}
