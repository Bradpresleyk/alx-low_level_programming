#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: Number of letters or 0 on fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
	{
	return (0);
	}
	FILE *file = fopen(filename, "r");

	if (file == NULL)
	{
	return (0);
	}
	char *buffer = (char *)malloc(letters + 1);

	if (buffer == NULL)
	{
	fclose(file);
	return (0);
	}
	size_t bytesRead = fread(buffer, 1, letters, file);

	fclose(file);

	if (bytesRead == 0)
	{
	free(buffer);
	return (0);
	}
	buffer[bytesRead] = '\0';
	ssize_t bytesWritten = fwrite(buffer, 1, bytesRead, stdout);

	free(buffer);

	if (bytesWritten != bytesRead)
	{
	return (0);
	}
	return (bytesRead);
}
