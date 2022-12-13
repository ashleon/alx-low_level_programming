#include <stdio.h>
/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return always 0.
 *
 */
int main(void)
{
	int m;
	char l;
	for (m = 0; m < 10; m++)
		putchar((num % 10) + '0');
	for (l = 'a'; l  <= 'f'; l++)
		putchar(l);
	putchar('\n');
	return (0);
}
