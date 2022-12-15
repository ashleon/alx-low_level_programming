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
	int k,r;

	k = n % 10;
	if (k > 10)
	{
		k = k % 10;
		r = print_last_digit(k);
	}
	return (k);
}
