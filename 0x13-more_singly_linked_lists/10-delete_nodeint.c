#include "lists.h"
/**
* delete_nodeint_at_index - deletes a node at an index
* @head: head of linked list
* @index: index dleted nodes
* Return: 1 if successful or -1 if failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ptr = *head;
	listint_t *tmp = NULL;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}

	while (i < (index - 1))
	{
		ptr = ptr->next;

		if (ptr == NULL || ptr->next == NULL)
		{
			return (-1);
		}
		i++;
	}
	tmp = ptr->next;
	ptr->next = tmp->next;
	free(tmp);
	return (1);
}
