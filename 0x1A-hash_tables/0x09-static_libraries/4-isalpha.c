#include "holberton.h"
/**
 * _isalpha - returns 1 if  the number is positve else it will return 0
 *
 * @c: show alphabet character
 * Return: 1 or 0 success
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
return (1);
else
return (0);
}
