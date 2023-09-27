#include "main.h"
#include <unistd.h>
/**
 * _pow_recursion - A function that returns the value of x to the power of y
 * @x: The number to be raised to the power of y
 * @y: The power to raise x
 * Return: Returns the value of x to the power of y if y < 0 then it returns -1
 */
int _pow_recursion(int x, int y)
{
	int sum;

	if (y < 0)
	{
	return (-1);
	}
	if (y == 0)
	{
	return y;
	}
	sum =  _pow_recursion(x * 1, y - 1);
	return (sum);
}
