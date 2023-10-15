#include <stdlib.h>
#include "main.h"
/**
 * *count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 * Return: number of words
 */
int count_word(char *s)
{
	int flag, c, w;

	flag = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
	if (s[c] == ' ')
	{
	flag = 0;
	}
	else if (flag == 0)
	{
	flag = 1;
	w++;
	}
	}
	return (w);
}
/**
 * alloc_words - allocates memory for an array of words
 * @words: number of words
 * Return: pointer to the allocated memory (Success) or NULL (Error)
 */
char **alloc_words(int words)
{
	char **matrix;

	matrix = (char **)malloc(sizeof(char *) * (words + 1));
	return (matrix);
}
/**
 * fill_words - splits the input string into words and fills the matrix
 * @str: input string
 * @matrix: pointer to the matrix of words
 */
void fill_words(char *str, char **matrix)
{
	int i, k = 0, len = 0, c = 0, start, end;

	while (*(str + len))
	{
	len++;
	}
	for (i = 0; i <= len; i++)
	{
	if (str[i] == ' ' || str[i] == '\0')
	{
	if (c)
	{
	end = i;
	matrix[k] = (char *)malloc(sizeof(char) * (c + 1));
	if (matrix[k] == NULL)
	{
	return;
	}
	char *tmp = matrix[k];

	while (start < end)
	{
	*tmp++ = str[start++];
	}
	*tmp = '\0';
	k++;
	c = 0;
	}
	}
	else if (c++ == 0)
	{
	start = i;
	}
	}
	matrix[k] = NULL;
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (Success) or NULL (Error)
 */
char **strtow(char *str)
{
	int words = count_word(str);

	if (words == 0)
	{
	return (NULL);
	}
	char **matrix = alloc_words(words);

	if (matrix == NULL)
	{
	return (NULL);
	}
	fill_words(str, matrix);
	return (matrix);
}
