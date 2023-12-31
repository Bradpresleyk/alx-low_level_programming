#include "lists.h"
/**
 * listint_len - Returns the number of elements in a linked list
 * @h: Pointer to the first element in the list
 * Return: number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
	count++;
	h = h->next;
	}
	return (count);
}
