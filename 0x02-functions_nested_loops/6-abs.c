#include <unistd.h>
#include "main.h"
/**
 * int _abs - Function that computes the absolute value of an integer
 * Return: 0 (Success)
 */
int _abs(int n)
{
	if(n < 0)
	{
		return -n;
	}
	else
	{
		return n;
	}
}
