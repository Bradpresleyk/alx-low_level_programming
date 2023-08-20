#include <unistd.h>
#include "main.h"
/**
 * mul - Function that multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: 0 (Success)
 */
int mul(int a, int b)
{
	int result = a * b;

	if (result >= 0)
	{
	int digit = result % 10;
	int tens = result / 10;

	if (tens != 0)
	{
	_putchar('0' + tens);
	}
	_putchar('0' + digit);
	}
	else
	{
	_putchar('-');
	result = -result;
	int digit = result % 10;
	int tens = result / 10;

	if (tens != 0)
	{
	_putchar('0' + tens);
	}
	_putchar('0' + digit);
	}
	return (result);
}
