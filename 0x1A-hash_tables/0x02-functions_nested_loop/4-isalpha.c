#include "holberton.h"
/**
 * _isalpha - returns 1 if  the number is positve else it will return 0
 * @c: show alphabet character
 * Return: 1 or 0 success
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
