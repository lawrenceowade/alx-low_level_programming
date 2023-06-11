#include <stdio.h>
#include <stdlib.h>
#include "main.h"
 /**
  * main - Prints the multiplication of two args numbers
  * @argc: argument count
  * @argv: argument vector
  * Return: Always zero
  */

int main(int argc, char *argv[])
{
int num1, num2, result;

if (argc != 3)
{
printf("Error: Please provide two numbers.\n");
return (1);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 *num2;

printf("Result: %d\n", result);

return (0);
}

