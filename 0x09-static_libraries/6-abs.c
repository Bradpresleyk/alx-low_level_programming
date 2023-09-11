#include <unistd.h>
#include "main.h"
/**
 * _abs - Function that computes the absolute value of an integer
 * @n: Takes an integer and returns the absolute value
 * Return: 0 (Success)
 */
int _abs(int n)
{
	if (n < 0)
	{
	return (-n);
	}
	else
	{
	return (n);
	}
}
