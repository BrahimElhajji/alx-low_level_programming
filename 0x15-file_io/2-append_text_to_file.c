#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: the name of file
 * @text_content: the file content (text)
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t len = 0, text_len = 0;
	char *p;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
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
