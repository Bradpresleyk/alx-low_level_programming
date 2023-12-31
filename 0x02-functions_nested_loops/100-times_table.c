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
	for (i = 0; i <= n; i++)
	{
	for (j = 1; j <= n; j++)
	{
	int result = i * j;

	if (result < 10)
	{
	_putchar(result + '0');
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	}
	else if (result < 100)
	{
	_putchar((result / 10) + '0');
	_putchar((result % 10) + '0');
	_putchar(',');
	_putchar(' ');
	}
	else
	{
	_putchar((result / 100) + '0');
	_putchar((result / 10) % 10 + '0');
	_putchar((result % 10) + '0');
	_putchar(',');
	_putchar(' ');
	}
	_putchar('\n');
	}
}
