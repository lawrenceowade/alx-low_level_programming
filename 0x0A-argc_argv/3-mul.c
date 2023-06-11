#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - Prints the multiplication
  * @argc: argument count
  * @argv: argument vector
  * Return: Always zero
  */

int main(int argc, char *argv[])
{
int result, num1, num2;

if (argc != 3)
{
printf("This is an error\n");
return (1);
}

num1 = _atoi(argv[1]);
num2 = _atoi(argv[2]);
result = num1 *num2;

printf("Result: %d\n", result);

return (0);
}
