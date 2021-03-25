#include "holberton.h"
/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: pointer to string
* Return: the number in base 10
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int convbase10 = 0;
	unsigned int countb;

	if (b == NULL)
		return (0);
	for (countb = 0; b[countb] != '\0'; countb++)
	{
		if (b[countb] < '0' || b[countb] > '1')
			return (0);
		convbase10 = 2 * convbase10 + (b[countb] - '0');
	}
	return (convbase10);
}
