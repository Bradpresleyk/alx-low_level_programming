#include "main.h"
#include <unistd.h>
/**
 * _memset - Function that fills memory with a constant byte
 * @s: Pointer
 * @b: Constant byte
 * @n: Number of bytes
 * Return: Returns a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *s_pointer = NULL;
	int i;

	for (i = 0; i < n; i++)
	{
	if (*s != '\0')
	{
	s[i] = b;
	*s_pointer = *s;
	}
	}
	return (s_pointer);
}
