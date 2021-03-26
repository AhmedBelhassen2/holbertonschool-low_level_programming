#include "holberton.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j = 0;
	unsigned long int sum;

	sum = n ^ m;
	for (; sum >= 1;)
	{
		if ((sum & 1) == 1)
			j++;
		sum >>= 1;
	}
	return (j);
}
