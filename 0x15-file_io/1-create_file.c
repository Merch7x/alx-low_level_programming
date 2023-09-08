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
	int fd;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_CREAT, 00600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		if (write(fd, text_content, strlen(text_content)) == -1)
		{
			close(fd);
			return (-1);
		}
	}
	else
	{
		if (write(fd, "", 0) == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
