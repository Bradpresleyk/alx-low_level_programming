#include "main.h"
#include <unistd.h>
/**
 * _print_rev_recursion - Function that prints a string in reverse
 * @s: String to reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s == 0)
	{
	return;
	}
	else if (*s > 0)
	{
	_putchar(*s);
	_print_rev_recursion(s - 1);
	}
}
