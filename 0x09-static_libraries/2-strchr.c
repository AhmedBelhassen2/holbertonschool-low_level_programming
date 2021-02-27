#include "holberton.h"
/**
 *_strchr - fill memory with constant
 *@s: character
 *@c: character
 *Return: 0
 */
char *_strchr(char *s, char c)
{
while (*s++)
{
if (*s == c)
return (s);
}
return (0);
}
