#include "main.h"
#include <unistd.h>
/**
 * factorial - Function that returns a factorial of a number
 * @n: Number input
 * Return: 0 (Success) -1 (Error)
 */
int factorial(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	if (n == 0)
	{
	return (1);
	}
	return (n * factorial(n - 1));
}
