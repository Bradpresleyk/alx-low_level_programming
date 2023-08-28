#include "main.h"
/**
 * string_toupper - Function that changes all string letters to uppercase
 * @n: Pointer
 * Return: n
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
	if (n[i] >= 'a' && n[i] <= 'z')
	n[i] - n[i] - 32;

	i++;
	}
	return (n);
}
