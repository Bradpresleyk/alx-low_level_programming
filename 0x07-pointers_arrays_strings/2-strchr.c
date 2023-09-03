#include "main.h"
/**
 * _strchr - Function that locates a character in a string
 * @s: A pointer to the string to search
 * @c: The character to search for in said string
 * Return: Returns a pointer to the first occurance of the character
 */
char *_strchr(char *s, char c)
{

	int i = 0;

	for (; s[i] != '\0'; i++)
	{
	if (s[i] == c)
	{
	return (&s[i]);
	}
	}
	return (NULL);
}
