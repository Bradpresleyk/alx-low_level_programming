#include "main.h"
#include <unistd.h>
/**
 * print_times_table - Function that prints the times table up to 15
 * @n: tables table integer to be printed
 */
void print_times_table(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
	for (j = 0; j < n; j++)
	{
	if (n > 15 || n < 0)
	{
	return;
	}

	int div = (n * n) / 10;
	int modulo = (n * n) % 10;

	_putchar('0' + div);
	_putchar('0' + modulo);
	}
	}
}
