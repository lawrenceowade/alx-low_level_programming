#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */

char *_strncat(char *dest, const char *src, int n)
{
	int dest_len = 0;
	int i;


	while (dest[dest_len] != '\0')
		dest_len++;

	
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len++] = src[i];

	
	dest[dest_len] = '\0';

	return (dest);
}
