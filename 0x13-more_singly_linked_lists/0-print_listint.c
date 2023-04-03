#include "lists.h"

/**
 * print_listint - Write a function that prints all the elements of a listint_t list.
 * @h: list linked to type listint_t will print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		node++;
		h = h->next;
	}

	return (node);
}
