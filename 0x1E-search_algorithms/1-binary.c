#include "search_algos.h"
/**
 *binary_search - searches for a value using the Binary search algorithm
 *@array: the array in which we will look fro the element
 *@value: the element
 *@size: the length of the array
 *Return: index
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t l = 0, r = size - 1, m;

	if (array == NULL)
		return (-1);
	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);
		m = (l + r) / 2;
		if (array[m] < value)
		{
			l = m + 1;
		}
		else if (array[m] > value)
		{
			r = m - 1;
		}
		else
		{
			return (m);
		}
	}
	return (-1);
}
