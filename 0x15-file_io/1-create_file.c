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

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fp == -1)
	{
	return (-1);
	}
	buffer = malloc(sizeof(char) * sizeof(text_content));
	w = write(fp, buffer, *text_content);
	free(buffer);
	close(fp);
	return (1);
}
