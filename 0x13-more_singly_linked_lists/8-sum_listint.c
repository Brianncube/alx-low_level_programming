#include "lists.h"

/**
* sum_listint - calculates the sum of all the data in a list
* @head: head of the list
* Return: resulting sum
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
