#include "main.h"
#include <unistd.h>
/**
 * *_strstr - Function that searches for a substring inside a string
 * @haystack: String to search
 * @needle: String to search for
 * Return: 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
	char *one = haystack;
	char *two = needle;

	while (*one == *two && *two != '\0')
	{
	one++;
	two++;
	}
	if (*two == '\0')
	return (haystack);
	}
	return (NULL);
}
