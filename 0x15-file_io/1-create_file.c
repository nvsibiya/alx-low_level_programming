#include "main.h"

/**
 * create_file - Creates a file with specified content and permissions.
 * @filename: The name of the file to create.
 * @text_content: The text content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, status;
	size_t len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[len])
		len++;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	status = write(fd, text_content, len);
	close(fd);

	if (status == -1)
		return (-1);

	return (1);
}
