#include "main.h"
#include <unistd.h>
/**
 * _pow_recursion - Function that raises x to the power of y
 * @x: value to raise
 * @y: Power
 * Return: 0 (Success) -1 (Error)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (-1);
	}
	if (y == 0)
	{
	return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
