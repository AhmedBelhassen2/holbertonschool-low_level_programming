#include "holberton"
#include <stdio.h>
/**
* malloc_checked - Allocates memory
* @b: values
* Return: A pointer
*/
void *malloc_checked(unsigned int b)
{
void *p;

p = malloc(b)
if (p == NULL)
exit(98);
return (p);
}
