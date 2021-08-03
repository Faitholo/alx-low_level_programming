#include "lists.h"

/**
 * free_listint - Function free list
 * @head: pointer
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
