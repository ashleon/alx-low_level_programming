#include "main.h"
/*
 * _strlen - returns the length of a string
 *
 * @s: the string
 *
 * Return:length of s
 */
int _strlen(char *s)
{
	int m;

	for (m = 0; *s != '\0'; s++)
	{
		m += 1;
	}
	return (m);
}
