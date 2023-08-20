#include <unistd.h>
#include "main.h"
/**
 * print_numbers - Function that prints numbers from 0-9
 * Return: 0 (Success)
 */
void print_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
	_putchar(n + '0');
	_putchar('\n');
	n++;
	}
}
