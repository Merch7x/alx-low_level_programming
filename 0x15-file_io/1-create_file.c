#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: string to write to file
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, fd2;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	fd2 = write(fd, text_content, strlen(text_content));
	if (fd2 == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
