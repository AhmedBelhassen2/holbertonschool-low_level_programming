#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - Search for an integer by another function
 * @array: The array
 * @size: Size of array
 * @cmp: The function pointer to the integer
 * Return: index of the firt element 
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int num;
if (array == NULL || cmp == NULL)
return (-1);
for (num = 0; num < size; num++)
if (cmp(array[num]) != 0)
return (num);
return (-1);
if (size <= 0)
return (-1);
}
