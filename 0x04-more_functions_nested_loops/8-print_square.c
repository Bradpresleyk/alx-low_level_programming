#include <unistd.h>
#include "main.h"
/**
 * print_square - Function that prints a square according to size
 * @size: Parameter that takes a size value
 */
void print_square(int size)
{
	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int i, j;

	for (i = 0; i < size; i++)
	{
	for (j = 0; j < size; j++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}
