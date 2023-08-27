#include "main.h"
#include <unistd.h>
/**
 * *_strcat - Function that concatenates two strings
 * @dest: The destination string
 * @src: The string to concatenate to the destination string
 * Return: Returns a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *original_dest = dest;

	while (*dest != '\0')
	{
	dest++;
	}

	while (*src != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	}
	*dest = '\0';
	return (original_dest);
}
