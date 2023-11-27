#include "main.h"

/**
 * reat_textfile - hfjdfh
 * @filename: kfjdf
 * @letters: kfjk
 *
 * Return: fjdkfdj
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, num;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	num = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || num == -1 || num != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (num);
}
