#include <stdlib.h>
#include <stdio.h>
/**
 * count_word - Helper function to count the number of words in a string
 * @s: The input string
 * Return: The number of words
 */
int count_word(char *s)
{
	int flag = 0;
	int w = 0;
	int c;

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
 * split_string - Split a string into words
 * @str: The input string
 * @words: The number of words
 * Return: A pointer to an array of strings (Success) or NULL (Error)
 */
char **split_string(char *str, int words)
{
	int k = 0;
	int start = 0;
	int i;
	int t = 0;
	int j;
	int len;
	char **matrix = (char **)malloc(sizeof(char *) * (words + 1));

	if (matrix == NULL)
	{
	return (NULL);
	}
	for (i = 0, len = 0; str[i] != '\0'; i++)
	{
	if (str[i] == ' ' || str[i] == '\0')
	{
	if (i > start)
	{
	char *tmp = (char *)malloc(sizeof(char) * (i - start + 1));

	if (tmp == NULL)
	{
	return (NULL);
	}
	for (j = start; j < i; j++)
	{
	tmp[t] = str[j];
	t++;
	}
	tmp[t] = '\0';
	matrix[k] = tmp;
	k++;
	}
	start = i + 1;
	}
	}
	matrix[k] = NULL;
	return (matrix);
}

int main(void)
{
	char *str = "This is a test string";
	int words = count_word(str);

	char **result = split_string(str, words);

	if (result)
	{
	for (int i = 0; result[i] != NULL; i++)
	{
	printf("%s\n", result[i]);
	free(result[i]);
	}
	free(result);
	}
	else
	{
	printf("Failed to split the string.\n");
	}
	return (0);
}
