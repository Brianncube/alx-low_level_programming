#include "lists.h"
/**
* get_nodeint_at_index-returns the node
* @head:first node in the linked list
* @index:index of node returned
* Return:node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (i < index)
	{
		head = head->next;

		if (head == NULL)
			return (NULL);
		i++;
	}
	return (head);
}
