#include "main.h"
#include <stdlib.h>
/**
 * *create_array - Function that creates an array of chars
 * @size: Array size
 * @c: Initial value
 * Return: returns a pointer to array else Null if size 0
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	int i;

	i = 0;
	while (1)
	{
	str = malloc(sizeof(*str) * size);
	if (str == NULL)
	{
	return (NULL);
	}
	str[0] = c;
	i++;
	}
	free(str);
	return (str);
}
