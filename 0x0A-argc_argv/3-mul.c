#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main-multiplies two numbers
 * @argc: number of argeumnets
 * @argv:arguments
 * Return:0
 */
int main(int argc, char *argv[])
{
int result;
if (argc != 3)
{
	printf("Error\n");
	return (1);
}
else
{
	result = (atoi(argv[1])) * (atoi(argv[2]));
	printf("%i\n", result);
}
return (0);
}
