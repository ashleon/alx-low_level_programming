#include "main.h"
/**
 * _islower - checks whether ascii value of a given character is within the range of lowercase letters
 *
 * Returns an int value
 */
int _islower(int c)
{
	int islower=1,notLower=0;

	if (c <= 122 && c >= 97)
		return (islower);
	return (notLower);
}
