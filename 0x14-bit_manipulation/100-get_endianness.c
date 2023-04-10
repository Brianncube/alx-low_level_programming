#include "main.h"

/**
* get_endianness - determines whether a machine is large or little endian
* Return: 0 for big, 1 for little
*/
int get_endianness(void)
{
	unsigned int x = 1;
	char *i = (char *) &x;

	return (*i);
}
