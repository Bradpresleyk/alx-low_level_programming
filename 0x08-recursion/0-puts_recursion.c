#include "main.h"
#include <unistd.h>
/**
 * _puts_recursion - Function that prints a string followed by a newline
 * @s: The string to be printed
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	 _putchar('\n');
	 return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
