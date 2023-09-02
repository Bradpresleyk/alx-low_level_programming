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
	int i;
	char *original_s = s;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}
	return (original_s);
}
