#include "main.h"
#include <stdio.h>
/**
 * factorial - Calculate the factorial of a number
 * @n: The number to calculate the factorial
 *
 * Return: Integer value
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
int result = 1;
int i;
for (i = 1; i <= n; i++)
{
result *= i;
}
return (result);
}
}
