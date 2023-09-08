#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
/**
 * append_text_to_file - appends text to the end of the file
 * @filename: name of the file
 * @text_content: string to append
 * Return: 1 or -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd;

if (filename == NULL)
{
return (-1);
}
fd = open(filename, O_RDWR | O_APPEND);
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
return (-1);
}
close(fd);
return (1);
}
