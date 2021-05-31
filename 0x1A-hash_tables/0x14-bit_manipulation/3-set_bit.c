#include "holberton.h"
/**
* set_bit - sets the value of a bit to 1 at a given index
* @n: pointer to number
* @index: index of the bit
* Return: 1 for success, -1 if fails
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
