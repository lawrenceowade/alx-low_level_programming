#include "main.h"

/**
 * Prints a string in reverse using recursion.
 * @s: The string to be printed.
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);  
	}
}

