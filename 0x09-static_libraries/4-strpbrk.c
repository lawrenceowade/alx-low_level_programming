#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 
 */

char *_strpbrk(const char *s, const char *accept)
{
	while (*s)
	{
		if (strchr(accept, *s))
			return (char *)s;
		s++;
	}

	return (NULL);
