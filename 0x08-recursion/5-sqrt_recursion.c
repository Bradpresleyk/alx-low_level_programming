#include "main.h"
#include <unistd.h>

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - Function that returns the square root of a number
 * @n: Number to find square root of
 * Return: Returns the square root of a number otherwise returns -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find square root of a number
 * @n: Number to calulate the square root of
 * @i: Iterator
 * Return: Returns the square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
	return (-1);
	}
	if (i * i == n)
	{
	return (i);
	}
	return (actual_sqrt_recursion(n, i + 1));
}
