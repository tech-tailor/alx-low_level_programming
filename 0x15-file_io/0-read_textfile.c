#include "main.h"

/**
 * read_textfile- reads a text file
 *
 * @filename: file to read from
 * @letters: number of letters to read and print
 *
 * Return: no of written characters
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buffer;
	ssize_t bytesRead, bytesWritten;

	file = open(filename, O_RDONLY);
	if (file == -1)
	return (0);

	buffer = malloc(sizeof(char) * letters + 1);
	if (buffer == NULL)
		return (0);

	bytesRead = read(file, buffer, letters);
	if (bytesRead == -1)
		return (0);

	buffer[letters + 1] = '\0';
	close(file);

	bytesWritten =  write(STDOUT_FILENO, buffer, bytesRead);
	if (bytesWritten == -1)
		return (0);

	free(buffer);

	return (bytesRead);

}
