#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
* create_buffer - Destributes 1024 bytes to a buffer.
* @file: The name of the file buffer where the characters are stored
* Return: A pointer to the allocated buffer.
*/
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
* close_file - file descriptors are closed
* @fd: The file descriptor closed.
*/
void close_file(int fd)
{
	int i;

	i = close(fd);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cant close fd %d\n", fd);
		exit(100);
	}
}

/**
* main - Copies a file's content from one file to another.
* @argc: Number of arguments for the program.
* @argv: An array of pointers to the arguments.
* Return: 0 on success.
* Description: If the argument count is wrong - exit code 97.
* If file_from cannot be read - exit code 98.
* If file_to cannot be created - exit code 99.
* If file_to or file_from cannot be closed - exit code 100.
*/

