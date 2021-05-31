#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array.
 * @nmemb: unsigned int.
 * @size: unsigned int.
 * Return: pointers of array allocated to a memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int counter;
char *p;

if (nmemb == 0 || size == 0)
return (NULL);
p = malloc(nmemb * size);
if (p == NULL)
return (NULL);
for (counter = 0; counter < (nmemb * size); counter++)
p[counter] = 0;
return (p);
}
