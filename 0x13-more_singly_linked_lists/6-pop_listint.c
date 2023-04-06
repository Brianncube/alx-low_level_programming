#include "lists.h"
/**
* pop_listint-deletes head node of list
* @head:pointer to head of list
* Return:data that was deleted
*/
int pop_listint(listint_t **head)
{
	int x;
	listint_t *tmp = *head;

	if (*head == NULL || !head)
		return (0);

	x = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (x);
}
