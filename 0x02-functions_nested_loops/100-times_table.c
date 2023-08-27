#include "main.h"
#include <unistd.h>
/**
 * print_times_table - Function that prints the times table up to 15
 * @n: tables table integer to be printed
 */
void print_times_table(int n)
{
	int i, j;

	i = 0;
	j = 0;

	if (n > 15 || n < 0)
	{
	_putchar(" ");
	}
	else
	{
	while (i < n)
	{
	while (j < n)
	{
	_putchar(i * j);
	j++;
	}
	i++;
	}
	}
}
