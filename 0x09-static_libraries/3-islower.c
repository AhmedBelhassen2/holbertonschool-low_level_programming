#include "holberton.h"
/**
 * _islower - returns the character
 *
 * @c: show alphabet character
 * Return: 1 or 0 success
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
