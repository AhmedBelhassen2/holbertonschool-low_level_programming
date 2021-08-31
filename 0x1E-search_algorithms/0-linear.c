#include "search_algos.h"
/**
 *linear_search - Write a function that searches for a value in an array of int
 *@array: C code to linearly search x in arr[]. If x
 *@value: the element
 *@size: length of th array
 *Return: -1
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return i;
		}
	}
			return -1;
}
