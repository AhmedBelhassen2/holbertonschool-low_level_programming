#include "holberton.h"
/**
*
*
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int convert = 0;
	unsigned int countb;
	if (b == NULL)
		return (0);
	for (countb = 0; b[countb] != '\0'; countb++)
	{
		if (b[countb] < '0' || b[countb] > '1')
			return (0);
		convert = 2 * convert + (b[countb] - '0');
	}
	return (convert);
}
