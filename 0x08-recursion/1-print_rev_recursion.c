#include "main.h"
#include <unistd.h>
/**
 * _print_rev_recursion - Function that prints a string in reverse
 * @s: String to reverse
 */
void _print_rev_recursion(char *s)
{
	int length = 1;

	if (length == 0)
	{
	return;
	}
	while (*s != '\0')
	{
	s++;
	}
	_putchar(*s);
	s - length;
	_print_rev_recursion(s);
}
