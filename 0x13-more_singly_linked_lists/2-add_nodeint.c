#include "lists.h"

/**
* add_nodeint - puts a new node at the start of a linked list
* @head: pointer to the first node in the list
* @n: data to insert in the new node
* Return: pointer to the new node, or NULL if it fails
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (!ptr)
	return (NULL);

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
