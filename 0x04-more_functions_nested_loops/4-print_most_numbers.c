#include <unistd.h>
#include "main.h"
/**
 * print_most_numbers - Function that prints numbers from 0-9 except 2 and 4
 * Return: 0 (Success)
 */
void print_most_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
	if (n == 2 || n == 4)
	{
	continue;
	}
	_putchar(n + '0');
	n++;
	}
	_putchar('\n');
	return (0);
}
