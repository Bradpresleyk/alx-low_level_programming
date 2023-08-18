#include <unistd.h>
#include "main.h"
/**
 * print_last_digit - Function that prints the last digit of a number
 * @n: Takes a number as an arguement
 * Return: Returns last digit
 */
int print_last_digit(int n)
{
	int m = n % 10;
	if (n < 0)
	{
		n = -n;
	}
	m = n % 10;
	_putchar(m + '0');
	return m;
}
