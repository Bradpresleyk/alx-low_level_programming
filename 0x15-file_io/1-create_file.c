#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "main.c"
/**
 * create_file - Creates a file
 * @filename: name of file
 * @text_content: String to write to file
 * Return: 1 on success and 0 on failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t fp;
	int *buffer;
	ssize_t w;
	mode_t permissions = S_IRUSR | S_IWUSR;

	fp = open(filename, O_WRONLY | O_CREAT | O_EXCL);
	if (fp == -1)
	{
	return (-1);
	}
	if (fchmod(fp, permissions) == -1)
	{
	perror("Error setting file permissions");
	close(fp);
	unlink(filename);
	return (-1);
	}
	buffer = malloc(sizeof(char) * sizeof(text_content));
	w = write(fp, buffer, *text_content);
	free(buffer);
	close(fp);
	return (1);
}
