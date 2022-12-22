#include "main.h"
/**
 * swap_int - swaps the value of two ints
 *
 * @a: An integer to swap
 * @b: Another integer to swap
 *
 * Return: null
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
