#include "main.h"
#include <unistd.h>
/**
 * _print_rev_recursion - Function that prints a string in reverse
 * @s: The string to print in reverse
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar(*s);
	return;
	}
	_print_rev_recursion(s + 1);
}
