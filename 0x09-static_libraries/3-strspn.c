#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 
 */

unsigned int _strspn(const char *s, const char *accept)
{
	unsigned int count = 0;

	while (*s && strchr(accept, *s))
	{
		count++;
		s++;
	}

	return (count);
}
