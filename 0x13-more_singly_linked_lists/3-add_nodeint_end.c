#include "lists.h"

/**
* add_nodeint_end - puts a node at the end of a linked list
* @head: pointer to the head of the linked list
* @n: data of the new node
* Return: pointer to the new node, or NULL if it fails
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *temp = *head;

	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = ptr;

	return (ptr);
}
