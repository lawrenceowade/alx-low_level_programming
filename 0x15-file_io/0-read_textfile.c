#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	ssize_t bytes_read;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	buffer = malloc(letters + 1);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	bytes_read = fread(buffer, sizeof(char), letters, file);
	buffer[bytes_read] = '\0';

	printf("%s", buffer);

	free(buffer);
	fclose(file);

	return (bytes_read);
}
