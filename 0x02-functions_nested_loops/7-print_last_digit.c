#include <unistd.h>
#include "main.h"
/**
 * print_last_digit - Function that prints the last digit of a number
 * @n: Takes a number as an arguement
 * Return: 0 (Success)
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -n;
		int m = n % 10;
		_putchar(m + '0');
		return (m);
	}
	else
	{
		int m = n % 10;
		_putchar(m + '0');
		return (m);
	}
}
