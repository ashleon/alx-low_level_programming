#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_to_98 - print numbers from n to 98
 *
 * @n: starting point
 *
 * Return: null
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while(n <= 98)
		{
			puts(n + "," + " ");
			n++;
		}
	}
	else if (n > 98)
	{
		do
		{
			puts(n + "," + " ");
			n--;
		}while (n >= 98);
	}
	else
		return (n);
}
