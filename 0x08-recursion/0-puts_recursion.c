#include "main.h"
#include <unistd.h>
/**
 * _puts_recursion - Function that prints a string followed by a newline
 * @s: pointer to string to print
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
