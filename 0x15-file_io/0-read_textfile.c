#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: A pointer to the name of the file
 * @lettres: The number of letters
 * Return: the actual number of letters it could read and print
 */
 ssize_t read_textfile(const char *filename, size_t letters)
{
int op, re, wr;
char *bfr;
if (!filename)
return (0);
bfr = malloc(sizeof(char) * letters);
if (!bfr)
return (0);

op = open(filename, O_RDONLY);
if (op < 0)
return (0);
re = read(op, bfr, letters);
if (re < 0)
{
free(bfr);
return (0);
}
bfr[re] = '\0';
close(op);

wr = write(STDOUT_FILENO, bfr, re);
if (wr < 0)
{
free(bfr);
return (0);
}
free(bfr);
return (wr);
}