#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX stdo
 * @filename: filename
 * @letters: letters
 *
 * Return: 0 if filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytesread, byteswrite;
	char *b;

	if (!filename)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	b = malloc(sizeof(char) * letters);
	if (!b)
	{
		close(fd);
		return (0);
	}
	bytesread = read(fd, b, letters);
	if (bytesread == -1)
	{
		free(b);
		close(fd);
		return (0);
	}
	byteswrite = write(STDOUT_FILENO, b, bytesread);
	if (byteswrite == -1 || byteswrite != bytesread)
	{
		free(b);
		close(fd);
		return (0);
	}
	free(b);
	close(fd);
	return (bytesread);
}
