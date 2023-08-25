#include "main.h"
#include <unistd.h>
/**
 * rev_string - Function that reverses a string
 * @s: String to be reversed
 */
void rev_string(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
	length++;
	s++;
	}
	s--;
	while (length > 0)
	{
	_putchar(*s);
	s--;
	length--;
	}
}
