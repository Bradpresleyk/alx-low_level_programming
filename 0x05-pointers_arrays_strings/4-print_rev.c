#include "main.h"
#include <unistd.h>
/**
 * print_rev - Function that prints a string in reverse followed by newline
 * @s: String to reverse
 */
void print_rev(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
	s++;
	length++;
	}
	while (length != 0)
	{
	_putchar(*s);
	s--;
	length--;
	}
	_putchar('\n');
}
