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
	int i = 0;

	while (*s[i] != '\0')
	{
	if (*s[i] == c)
	{
	first_occ = s[i]
	}
	i++;
	}
	return (first_occ);
}
