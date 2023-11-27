#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: text content
 *
 * Return: 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t byteswrite;
	ssize_t length;

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	length = 0;
	if (text_content[length])
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
