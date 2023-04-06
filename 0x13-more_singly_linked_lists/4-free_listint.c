#include "lists.h"

/**
* free_listint - opens a free space for a linked list
* @head: listint_t list to be freed
*/
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
