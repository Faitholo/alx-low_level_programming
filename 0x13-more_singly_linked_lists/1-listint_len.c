#include "lists.h"

/**
 * listint_len - Function return len
 * @h: pointer
 *
 * Return: size_t leng of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
		h = h->next, i++;
	return (i);
}
