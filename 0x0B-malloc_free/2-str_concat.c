#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, k = 0;
	char *combo;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[k])
		k++;

	combo = malloc(sizeof(char) * (i + k + 1));

	if (combo == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		combo[i] = s1[i];

	for (k = 0; s2[k]; k++, i++)
		combo[i] = s2[k];

	combo[i] = '\0';

	return (combo);
}
