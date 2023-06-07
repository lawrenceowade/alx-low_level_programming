#include "main.h"

/**
 * _pow_recursion - Returns the value of n raised to the power of m
 * @n: value to raise
 * @m: power
 *
 * Return: result of the power
 */
int _pow_recursion(int n, int m)
{
return ((m < 0) ? -1 : (m == 0) ? 1 : n * _pow_recursion(n, m - 1));
}
