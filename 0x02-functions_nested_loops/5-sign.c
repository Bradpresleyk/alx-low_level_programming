#include <unistd.h>
#include "main.h"
/**
 * print_sign(int n) - Function that prints numbers according to whether they are positive or negative
 * @n: Takes an integer value as an arguement
 * Return: 1 if positive and 0 if zero or -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return(-1);
	}
}
