#include "main.h"
#include <unistd.h>
/**
 * _strcmp - Function that compares two strings
 * @s1: String to be compared
 * @s2: String to be compared
 * Return: 0 (Success);
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	i = 0;
	while (s1[1] != '\0' && s2[i] != '\0')
	{
	if (s1[i] != s2[i])
	{
	return (s1[i] - s2[i]);
	}
	i++;
	}
	return (0);
}
