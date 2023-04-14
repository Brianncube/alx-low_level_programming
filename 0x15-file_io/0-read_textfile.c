#include "main.h"
#include <stdlib.h>

/**
* read_textfile- Read a text file and print it to STDOUT
* @filename: reading a text file
* @letters: letters tp be  read
* Return: w- number of bytes to be read and printed
* Retutn 0 when function fails
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd, wr, tr;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	wr = write(STDOUT_FILENO, buf, tr);

	free(buf);
	close(fd);
	return (wr);
}
