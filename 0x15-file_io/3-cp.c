void check_IO_stat(int stat, int fd, char *filename, char mode);
/**
 * main - copies the content of one file to another
 * @argc: Argument count
 * @argv: Arguments passed
 * Return: 1 on success, otherwise exit
 */
int main(int argc, char *argv[])
{

	while ((n_read = read(src, buffer, sizeof(buffer))) > 0)
	{
	if (n_read == -1)
	{
	check_IO_stat(-1, -1, argv[1], 'O');
	}

	wrote = write(dest, buffer, n_read);
	if (wrote == -1)
	{
	check_IO_stat(-1, -1, argv[2], 'W');
	}
	}
	close_src = close(src);
	check_IO_stat(close_src, src, NULL, 'C');

	close_dest = close(dest);
	check_IO_stat(close_dest, dest, NULL, 'c');

	return (0);
}
/**
 * check_IO_stat - checks if a file can be opened or closed
 * @stat: file descriptor of file to be opened
 * @filename: name of file
 * @mode: closing or opening
 * @fd: file descriptor
 * Return: void
 */
void check_IO_stat(int stat, int fd, char *filename, char mode)
{
	if (mode == 'C' && stat == -1)
	{
	perror("Error closing file");
	if (fd != -1)
		close(fd);
	exit(100);
	}
	else if (mode == 'O' && stat == -1)
	{
	perror("Error reading from file");
	if (fd != -1)
		close(fd);
	exit(98);
	}
	else if (mode == 'W' && stat == -1)
	{
	perror("Error writing to file");
	if (fd != -1)
		close(fd);
	exit(99);
	}
}
