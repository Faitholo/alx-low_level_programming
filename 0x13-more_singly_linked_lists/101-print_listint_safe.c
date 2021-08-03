#include "lists.h"

/**
 * print_listint_safe - Listas enlazadas
 * @head: Dado desde main
 *
 * Return: i
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	const listint_t *temp, *node;

	node = head;
	while (node != NULL)
	{
		printf("[%p] %d\n", (void *)node, node->n);
		temp = node;
		node = node->next;
		i++;
		if (temp <= node)
		{
			printf("-> [%p] %d\n", (void *)node, node->n);
			break;
		}
	}
	return (i);
}
