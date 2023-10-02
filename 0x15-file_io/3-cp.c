#include "main.h"
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
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
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
	int end;

	end = close(fd);

	if (end == -1)
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
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main(int ac, char **av)
{
int file_from_fd, file_to_fd, bytes_read, bytes_written;
char *buff;

if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

file_from_fd = open(av[1], O_RDONLY);
file_to_fd = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
buff = make_buffer(av[2]);
bytes_read = read(file_from_fd, buff, 1024);

do {
if (file_from_fd == -1 || bytes_read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
free(buff);
exit(98);
}
bytes_written = write(file_to_fd, buff, bytes_read);

if (file_to_fd == -1 || bytes_written == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[2]);
free(buff);
exit(99);
}
bytes_read = read(file_from_fd, buff, 1024);
file_to_fd = open(av[2], O_WRONLY | O_APPEND);
} while (bytes_read > 0);

free(buff);
close_file(file_from_fd);
close_file(file_to_fd);

return (0);
}
