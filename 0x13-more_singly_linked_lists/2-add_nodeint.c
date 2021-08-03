#include "lists.h"
/**
 * add_nodeint - Function adds new nodo
 * @head: pointer
 * @n: integer
 * Return: the list whit the new nodo
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));


	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
