#include <unistd.h>
#include "main.h"
/**
 * print_last_digit - Function that prints the last digit of a number
 * @n: Takes a number as an arguement
 * Return: Returns last digit
 */
int print_last_digit(int n)
{
	int lastdigit;

	lastdigit = n % 10;

	if (lastdigit < 0)
	{
		lastdigit = -lastdigit;
	}
	_putchar(lastdigit + '0');
	return (lastdigit);
}
