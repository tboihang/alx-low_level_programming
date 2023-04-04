#include "lists.h"

/**
 * pop_listint -a function that deletes the head node of a linked list
 * @head: point to the first element in the linked list
 *
 * Return: the data inside the elements will be deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}