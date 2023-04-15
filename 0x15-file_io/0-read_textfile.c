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
	ssize_t fd, rd, wd;
	char *buff = malloc(sizeof(char) * letters);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	rd = read(fd, buff, letters);
	wd = write(STDOUT_FILENO, buff, rd);

	close(fd);
	free(buff);
	return (wd);
}
