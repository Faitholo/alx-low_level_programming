#include "lists.h"

/**
 * print_listint - Function that prints all elements
 * @h: list
 *
 * Return: number of nodos
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next, i++;
	}
	return (i);
}
