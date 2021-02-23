#include "holberton.h"
#include <stdio.h>
/**
 *_strchr - fill memory with constant
 *@s: character
 *@c: character
 *Return: 0
 */
char *_strchr(char *s, char c)
{
unsigned int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
return (&(s[i]));
}
}
if (c == '\0')
return(&(s[i]));
return (0);
}
