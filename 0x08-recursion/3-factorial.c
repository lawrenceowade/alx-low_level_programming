#include "main.h"

/**
 * factorial - Calculate the factorial of a number
 * @n: The number to calculate the factorial
 *
 * Return: Integer value
 */
int factorial(int n)
{
    int result = 1;
    int i;

    if (n < 0)
        return (-1);

    for (i = 1; i <= n; i++)
        result *= i;

    return result;
}

