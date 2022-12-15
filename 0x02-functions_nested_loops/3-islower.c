#include "main.h"
/**
 * _islower - checks whether ascii value of a given character is within the range of lowercase letters
 *
 * Returns an int value
 */
int _islower(int c)
{
	int ascii_num,islower=1,notLower=0;

	if (ascii_num <= 122 && ascii_num >= 97)
		return (islower);
	return (notLower);
}
