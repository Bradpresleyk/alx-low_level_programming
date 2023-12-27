#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * read_textfile - Reads from file and prints to stdout
 * @filename: Name of file
 * @letters: Number of letters to read
 * Return: Number of letters or 0 if fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char ch;
	int i;

	fp = fopen(filename, "r");

	if (fp)
	{
	for (i = 0; i < letters; i++)
	{
	ch += fgetc(fp);
	}
	fclose(fp);
	return (ch);
	}
	else
	{
	return (0);
	}
}
