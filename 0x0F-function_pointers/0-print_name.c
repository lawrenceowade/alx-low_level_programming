#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print name pointer to function
 * @name: string to add
 * @f: pointer to function
 * Return: 0
 **/

void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}

