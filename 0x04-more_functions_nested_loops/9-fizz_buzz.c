#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - checks for multiples of 3 and 5 from 0 through 100
 *
 * Return: 0
 */
int main(void)
{
	int j;

	j = 1;

	for (j; j <= 100; j++)
	{
		if((j % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((j % 5) == 0)
		{
			printf("Buzz");
		}
		else if ((j % 3) == 0 && (j % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else
			printf("%d ",n);
	}
	return (0);
}

