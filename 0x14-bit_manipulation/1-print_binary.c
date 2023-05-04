#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
unsigned long int mask = 1ul << (sizeof(unsigned long int) * 8 - 1);
while (mask > 0)
{
if (n & mask)
{
putchar('1');
}
else
{
putchar('0');
}
mask >>= 1;
}
}

