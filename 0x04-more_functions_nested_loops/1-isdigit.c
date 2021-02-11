#include "holberton.h"
/**
 * _isdigit - checks if c is digit between 0 and 9 or not
 * @c: integer
 * Return: 0 or 1 ( 1 if c isdigit )
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
