#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	int bit_val;

	if (index > 63)
		return (-1);

	mask = 1UL << index;
	bit_val = (n & mask) ? 1 : 0;

	return (bit_val);
}
