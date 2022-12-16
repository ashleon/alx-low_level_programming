#include "main.h"
#include <stdlib.h>
/**
 * positive_or_negative - determines whether a value is positive or negative
 *
 * @i: the value that is to be assesed
 *
 * Return: null
 */
int main(void)
{
	int i;

	positive_or_negative(i);
	if (i < 0)
		printf("%d",-1);
	else if ( i == 0)
		printf("d",0);
	else if (i > 0)
		printf("%d",1);
	return (0);
}
