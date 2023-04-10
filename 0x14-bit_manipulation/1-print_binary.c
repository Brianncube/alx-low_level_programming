#include "main.h"

/**
* print_binary - prints a binary number equal to a decimal number
* @n: value to print in binary
*/
void print_binary(unsigned long int n)
{
	int x, value = 0;
	unsigned long int num;

	for (x = 63; x >= 0; x--)
	{
		num = n >> x;

		if (num & 1)
		{
			_putchar('1');
			value++;
		}
		else if (value)
			_putchar('0');
	}
	if (!value)
	_putchar('0');
}
