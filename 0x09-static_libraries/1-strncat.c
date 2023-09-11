#include "main.h"
#include <unistd.h>
/**
 * *_strncat - Function that concatenates two strings
 * @dest: Destination string to be concatenated to
 * @src: String being concatenated to dest
 * @n: integer in bytes
 * Return: Returns a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *original_dest = dest;

	while (*dest != '\0')
	dest++;
	}
	while (*src != '\0' && n > 0)
	{
	*dest = *src;
	dest++;
	src++;
	n--;
	}
	return (original_dest);
}
