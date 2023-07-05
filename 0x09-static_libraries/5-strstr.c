#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 
 */

char *_strstr(const char *haystack, const char *needle)
{
	while (*haystack != '\0')
	{
		const char *h = haystack;
		const char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (char *)haystack;

		haystack++;
	}

	return (NULL);
}
