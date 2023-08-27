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
	_putchar('\n');
	}
	else
	{
	while (i < n)
	{
	while (j < n)
	{
	int result = j * i;

	j++;

	if (result < 10)
	{
	_putchar(result + '0');
	}
	else
	{
	_putchar((10 % result) + '0');
	_putchar((10 / result) + '0');
	}
	i++;
	}
	}
}
