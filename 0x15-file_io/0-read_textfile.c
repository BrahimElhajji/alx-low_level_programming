#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX STDOUT
 * @filename: the file name
 * @letters: number of letters
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t len, chars;
	char *buffer;

	if (filename == NULL || letters == 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(buffer);
		return (0);
	}

	len = read(file, buffer, letters);
	if (len == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}

	chars = write(STDOUT_FILENO, buffer, len);
	free(buffer);
	close(file);

	if (chars != len)
		return (0);

	return (len);
}
