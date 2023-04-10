#include "main.h"

/**
* flip_bits - counts the number of bits to be changed
* to get from one number to another
* @n: 1st number
* @m: 2nd  number
* Return: number of bits to be changed
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, value = 0;
	unsigned long int num;
	unsigned long int i = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		num = i >> j;
		if (num & 1)
			value++;
	}

	return (value);
}
