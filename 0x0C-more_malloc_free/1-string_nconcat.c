#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - Returns a pointer to a new string
 * @s1: The string
 * @s2: The string
 * @n: bytes
 * Return: Pointer to the duplicated string 
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0, j = 0, a = 0, b = 0;
char *s;
if (s1)
while (s1[i++])
a++;
if (s2)
while (s2[i++])
b++;
if (b > n)
b = n;
s = malloc(sizeof(char) * (a + b + 1));
if (s == NULL)
return (NULL);
for (i = 0; i < a; i++)
s[i] = s1[i];
for (j = 0; j < b; j++, i++)
s[i] = s2[j];
s[i] = '\0';
return (s);
}
