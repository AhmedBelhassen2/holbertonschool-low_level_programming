#include "holberton.h"
/**
 * errorHandle - handles errors.
 * @src: source fd.
 * @dest: dest fd.
 * @close: close status.
 * @args: arguments.
 * Return: status.
 */
void error(int src, int dest, int close, char *args[])
{
if (src < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", args[1]);
exit(98);
}
if (dest < 0)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", args[2]);
exit(99);
}
if (close < 0 && src > 0)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", args[1]);
exit(100);
}
if (close < 0 && dest > 0)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", args[2]);
exit(100);
}
}

/**
 * main - copie the content of a file into another
 * @argc: the number of arguments
 * @argv: the pointer to argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
int re, wr, cl;
int from, to;
char bfr[1024];
if (argc != 3)

{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

from = open(argv[1], O_RDONLY);
errorHandle(from, 1, 1, argv);

to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
errorHandle(1, to, 1, argv);

re = 1024;
while (re == 1024)
{
re = read(from, bfr, 1024);
errorHandle(re, 1, 1, argv);
wr = write(to, bfr, re);
if (wr != re)
wr = -1;
errorHandle(1, wr, 1, argv);
}

cl = close(from);
errorHandle(from, 1, cl, argv);
cl = close(to);
errorHandle(1, to, cl, argv);
return (0);
}
