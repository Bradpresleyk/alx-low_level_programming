#include "main.h"
#include <unistd.h>
/**
 * _strchr - Function that locates a character in a string
 * @s: A pointer to the string to search
 * @c: The character to search for in said string
 * Return: Returns a pointer to the first occurance of the character
 */
char *_strchr(char *s, char c)
{
	char *first_occ = NULL;

	while (*s != '\0')
	{
	if (*s == c)
	{
	return (s);
	}
	s++;
	}
	return (NULL);
}
