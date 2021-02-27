#include "holberton.h"
/**
 *_memset - fill memory with constant
 *@s: character
 *@b: character
 *@n: integer
 *Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
i = 0;
for (i = 0; i < n; i++)
s[i] = b;
return (s);
}
