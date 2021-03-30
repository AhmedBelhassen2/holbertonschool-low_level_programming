#include "holberton.h"
/**
* create_file - that creates a file
* @filename: the name of the file to create
* @text_content:  terminated string to write to the file
* Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
int op, wr, len = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (; text_content[len]; len++)
;
}
	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, len);
	if (op == -1 || wr == -1)
		return (-1);
	close(op);
	return (1);
}
