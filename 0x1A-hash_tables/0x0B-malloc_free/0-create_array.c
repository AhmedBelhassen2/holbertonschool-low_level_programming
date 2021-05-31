#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @c: charachter to initialize the array
 * @size: the size of the array
 *
 * Return: null if size = 0
 */
char *create_array(unsigned int size, char c)
{
char *n;
unsigned int j = 0;
n = malloc(sizeof(char) * size);
if (size == 0)
return (NULL);
if (n == NULL)
return (0);
for (j = 0; j < size; j++)
n[j] = c;
return (n);
}
