#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * create_file - Function that creates a file
 * @filename: filename
 * @text_content: content written in the file
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_d;
	ssize_t lenw;

	if (filename == NULL)
	{
	return (-1);
	}
	file_d = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_d == -1)
	{
	return (-1);
	}
	if (text_content != NULL)
	{
	lenw = write(file_d, text_content, strlen(text_content));
	if (lenw == -1)
	{
	close(file_d);
	return (-1);
	}
	}
	close(file_d);
	return (1);
}