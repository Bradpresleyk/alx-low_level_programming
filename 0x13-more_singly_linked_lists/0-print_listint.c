#include "lists.h"
/**
 * print_listint - Prints all the elements of a linked list
 * @h: A Pointer the first node of the linked list
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
	printf("%d\n", h->n);
	count++;
	h = h->next;
	}
	return (count);
}
