#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - Prints all the elements of a linked list
 * @h: A Pointer the first node of the linked list
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
	printf("%d", h->n);
	h = h->next;
	count++;
	}
	return (count);
}

int main (
