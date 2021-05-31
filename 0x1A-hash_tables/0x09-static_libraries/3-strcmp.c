#include "holberton.h"
#include <stdio.h>
/**
 *_strcmp - copy string
 *@s1: the first string
 *@s2: the second string
 *Return: 0 or difference between strings (Ascii)
 */
int _strcmp(char *s1, char *s2)
{
while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
{
s1++;
s2++;
}

if (*s1 == *s2)
{
return (0);
}
else
{
return (*s1 - *s2);
}
}
