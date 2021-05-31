#include "holberton.h"
#include <stdio.h>
/**
 *_strlen_recursion - return the lenght of string
 *@s: char
 *Return: 0 or length
 */
int _strlen_recursion(char *s)
{
int i = 1;
{
if (*s == '\0')
return (0);
return (i + _strlen_recursion(s + 1));
}
}
