#include "main.h"

/**
* create_file - Creates a file.
* @filename: A pointer to the desired file's name.
* @text_content: A pointer to a string to write a required file.
* Return: If function fails - -1.
* Otherwise - 1.
*/
int create_file(const char *filename, char *text_content)
{
	int fd, wr, l = 0;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
	for (l = 0; text_content[l];)
	len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(fd, text_content, l);

	if (fd == -1 || w == -1)
	return (-1);

	close(fd);

	return (1);
}
