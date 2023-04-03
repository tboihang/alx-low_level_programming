#include "lists.h"

/**
 * listint_len - a fuction returns the number of elements
 * @h: list linked to type listint_t to ply
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
