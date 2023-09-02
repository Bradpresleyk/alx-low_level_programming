#include "main.h"
#include <unistd.h>
/**
 * _memcpy - Function that copies a block of memory to another
 * @dest: Destination to copy memory to
 * @src: Source to copy memory from
 * @n: number of bytes to copy
 * Return: Returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}
