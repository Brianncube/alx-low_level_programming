#include "main.h"

/**
* get_bit - returns the value of a bit at an index in a decimal number form
* @n: number to be searched
* @index: index of a bit
* Return: value of a bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index > 63)
		return (-1);

	i = (n >> index) & 1;

	return (i);
}
