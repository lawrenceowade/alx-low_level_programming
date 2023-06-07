#include "main.h"

int is_prime_number(int n);

/**
 * is_prime_number - checks if a number is prime
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
int i;
if (n <= 1)
return (0);

for (i = 2; i < n; i++)
{
if (n % i == 0)
return (0);
}

return (1);
}

