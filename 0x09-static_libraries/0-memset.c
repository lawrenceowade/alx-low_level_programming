#include "main.h"


/**
* _memset: fill a memory block with a particular value.
* @s: beginning memory address to be filled The desired value is @b.
* @n: the amount of bytes that need to be altered 
* Return: modified array with updated data for n bytes
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
}

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

