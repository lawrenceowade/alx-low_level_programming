#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the multiplication of two args numbers
 * calculate - Computes the product of two numbers.
 * @n1: First number
 * @n2: Second number
 *
 * Return: The product of n1 and n2
 */

int multiply(int n1, int n2)
{
return (n1 * n2);
}

int main(int argc, char *argv[])
{
if (argc == 3)
{
int n1 = atoi(argv[1]);
int n2 = atoi(argv[2]);
int result = multiply(n1, n2);
printf("Multiplication of %d and %d is: %d\n", n1, n2, result);
}
else
{
printf("Please provide two numbers as command-line arguments.\n");
return (1);
}

return (0);
}
