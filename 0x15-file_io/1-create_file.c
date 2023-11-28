#include "main.h"
/**
 * create_file - function that creates a file.
 * @filename: the name of file
 * @text_content: the file content (text)
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	int len = 0, text_len = 0;
	char *p;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (text_len = 0, p = text_content; *p; p++)
			text_len++;

		len = write(file, text_content, text_len);
	}

	if (close(file) == -1 || text_len != len)
		return (-1);

	return (1);
}
