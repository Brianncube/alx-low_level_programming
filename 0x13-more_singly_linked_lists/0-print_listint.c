#include "lists.h"

/**
* print_listint - print the elements of a linked list
* @h: linked list of type listint_t to print
* Return: nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;

		i++;
	}
	return (i);
}
