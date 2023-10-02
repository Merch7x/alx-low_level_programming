#include "main.h"
/**
 * read_textfile - reads a file and prints it to stdout
 * @filename: pointer to file
 * @letters: buffer to read
 * Return: actual number of letters it read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, fd2, fd3;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		return (0);
	}

	fd2 = read(fd, buff, letters);
	if (fd2 == -1 || fd2 == EOF)
	{
		return (0);
	}
	fd3 = write(STDOUT_FILENO, buff, fd2);
	if (fd3 == -1 || fd3 != fd2)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(fd);
	return (fd3);
}
