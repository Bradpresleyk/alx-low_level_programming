#include "main.h"
#include <unistd.h>
/**
 * print_times_table - Function that prints the times table up to 15
 * @n: tables table integer to be printed
 */
void print_times_table(int n)
{
	int i, j;

	if (n > 15 || n < 0)
	{
	return;
	}
	for (i = 0; i < n; i++)
	{
	for (j = 0; j < n; j++)
	{

	int result = i * n;

	if (result < 10)
	{
	_putchar(result + '0');
	_putchar(' ');
	}
	else
	{
	_putchar((result / 10) + '0');
	_putchar((result % 10) + '0');
	_putchar(' ');
	}
	}
	_putchar('\n');
	}
}
