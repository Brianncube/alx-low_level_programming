#include "lists.h"
/**
* insert_nodeint_at_index - inserts new node in a linked list
* @head: pointer to the first node
* @idx: index the we will indent the new node
* @n: data in the new node
* Return:pointer of new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	unsigned int i = 0;
	listint_t *tmp = *head;
	listint_t *ptr = malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);

	if (!ptr)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}
	while (i < (idx - 1))
	{
		tmp = tmp->next;

		if (tmp == NULL)
		{
			free(ptr);
			return (NULL);
		}
		i++;
	}
	ptr->next = tmp->next;
	tmp->next = ptr;

	return (ptr);
}
