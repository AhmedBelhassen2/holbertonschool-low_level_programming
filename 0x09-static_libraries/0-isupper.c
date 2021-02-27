#include "holberton.h"
/**
 * _isupper - checks oif the letter is upper or not
 * @c: integer
 * Return: 0 or 1 ( 1 if c is in uppercase )
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
