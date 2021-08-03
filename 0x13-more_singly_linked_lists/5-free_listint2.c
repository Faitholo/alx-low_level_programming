#include "lists.h"

/**
 * free_listint2 - Funtions that free a list head = NULL
 *
 * @head: pointer
 *
 *Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!head)
		return;
	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}
