#include<stdio.h>
#include"holberton.h"

/**
 * rev_string - Prints a string followed by a new line to stdout
 * @s: The string to be printed
 */
void rev_string(char *s)
{
int l = 0;
int i;
char *begin_ptr, *end_ptr, ch;
begin_ptr = s;
end_ptr = s;
while (s[l] != '\0')
{
l++;
}
for (i = 0; i < l - 1; i++)
{
end_ptr++;
}
for (i = 0; i < l / 2; i++)
{

ch = *end_ptr;
*end_ptr = *begin_ptr;
*begin_ptr = ch;

begin_ptr++;
end_ptr--;
}
}

