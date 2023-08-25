#include "main.h"
#include <unistd.h>
/**
 * rev_string - Function that reverses a string
 * @s: String to be reversed
 */
void rev_string(char *s)
{
	int length = 1;

	while (length > *s)
	{
	while (*s != '\0')
	{
	length++;
	s++;
	}
	length--;
	s--;
	}
}
