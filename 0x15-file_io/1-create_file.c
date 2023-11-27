#include "main.h"
/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: content
 *
 * Return: 0
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t byteswrite;
	ssize_t length;

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	length = 0;
	while (text_content[length])
	{
		length++;
	}
	byteswrite = write(fd, text_content, length);
	if (byteswrite == -1 || byteswrite != length)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
