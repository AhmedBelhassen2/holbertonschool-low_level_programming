#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: 
 * @lettres: 
 * Return: 
 */
 ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t op, re, wr;
char *bfr;
if (filename == NULL)
return (0);
bfr = malloc(sizeof(char) * letters);
if (bfr == NULL)
return (0);
op = open(filename, O_RDONLY);
re = read(op, bfr, letters);
wr = write(STDOUT_FILENO, bfr, re);
if (op == -1 || re == -1 || wr == -1 || wr != re)
{
free(bfr);
return (0);
}
free(bfr);
close(op);
return (wr);
}