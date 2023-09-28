#include "main.h"
#include <unistd.h>
/**
 * _sqrt_recursion - Function that returns the square root of a number
 * @n: Number to find square root of
 * Return: Returns the square root of a number otherwise returns -1
 */
int int _sqrt_recursion(int n)
{
	int original = n;
	int test;

	if (n <= 0)
	{
	return (-1);
	}
	if (n < 1)
	{
	return (n);
	}
	test = sqrt_recursion(n - 1);

	if (test * test > n)
	{
	return (test - 1);
	}
	return (test);
}
