#include "main.h"
#include <unistd.h>
/**
 * factorial - A function that returns the factorial of a given number
 * @n: The number to return the factorial of
 * Return: Returns the factorial otherwise if n < 0 Returns -1
 */
int factorial(int n)
{
	int sum;

	if (n < 0)
	{
	return (-1);
	}
	if (n == 1)
	{
	return (1);
	}
	sum = n * factorial(n - 1);
	return (sum);

}
