#include"holberton.h"
/**
 * puts2 - Prints a string followed by a new line to stdout
 * @str: The string to be printed
 */
void puts2(char *str)

{
int i, y;

for (i = 0; str[i] != '\0'; i++)
{
      
}
i = i - 1;
for (y = 0; y <= i ;y = y + 2)
_putchar(str[y]);
_putchar('\n');
}
