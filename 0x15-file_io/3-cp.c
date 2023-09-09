#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

char *make_buffer(char *file);
void close_file(int fd);
/**
 * make_buffer - creates a buffer of 1024 bytes
 * @file: name of file that is read into buff
 * Return: pointer to buff
*/
char *make_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - closes open file
 * @fd: file descriptor of open file
*/
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Main entry for program
 * @ac: count of args
 * @av: array of the args;
 * Return: an int value
*/
int main(int ac, char **av)
{
	int ftr, ftw, rd, wr;
	char *buff;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(98);
	}
	ftr = open(av[1], O_RDONLY);
	ftw = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	buff = make_buffer(av[2]);

	while ((rd = read(ftr, buff, 1024)) > 0)
	{
		if (ftr == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			free(buff);
			exit(98);
		}
		wr = write(ftw, buff, rd);

		if (ftw == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[2]);
			free(buff);
			exit(99);
		}

		ftw = open(av[2], O_WRONLY | O_APPEND);
	}
	free(buff);
	close_file(ftr);
	close_file(ftw);

	return (0);
}
