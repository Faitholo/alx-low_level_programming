#include "lists.h"

/**
 * get_nodeint_at_index - Function return nth of the list
 * @head: head nodos
 * @index: index of the nodo
 * Return: list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new = head;
	unsigned int i;

	if (!head)
		return (0);
	for (i = 0; new; i++)
	{
		if (i == index)
			return (new);
		new = new->next;
	}
	return (NULL);
}
