#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * printChar - prints a char for args
 * @ap: the arg
 * Return: void
 */
void printChar(va_list ap)
{
printf("%c", va_arg(ap, int));
}

/**
 * printInt - prints an int for args
 * @ap: the arg
 * Return: void
 */
void printInt(va_list ap)
{
  printf("%d", va_arg(ap, int));
}

/**
 * printFloat - prints a float for args
 * @ap: the arg
 * Return: void
 */
void printFloat(va_list ap)
{
  printf("%f", va_arg(ap, double));
}

/**
 * printString - prints a string for args
 * @ap: the arg
 * Return: void
 */
void printString(va_list ap)
{ 
printf("%s", va_arg(ap, char*);
}
/**
 * print_all - prints all arguments
 * @format: the format
 * Return: void
 */

void print_all(const char * const format, ...)
{
int i, j;
char *sep = "";
va_list obj;

form mind[] = {
{"c", printChar},
{"i", printInt},
{"f", printFloat},
{"s", printString},
{NULL, NULL},
};
va_start(obj, format);

i = 0;
while (format && format[i])
{
j = 0;
while (mind[j].cond)
{
if (*(mind[j].cond) == format[i])
{
printf("%s", sep);
mind[j].printType(obj);
sep = ", ";
}
j++;
}
i++;
}

va_end(obj);
printf("\n");
}
