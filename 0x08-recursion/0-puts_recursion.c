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
	return (0);
	}
	puts_recursion(*s);
	_putchar(*s);
	_putchar('\n');
}
