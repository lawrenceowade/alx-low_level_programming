#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - Prints the sum of args positive numbers
  * @argc: argument count
  * @argv: argument vector
  * Return: Always zero
  */


int main(int argc, char *argv[])
{
int sum = 0;
int i;

if (argc > 1)
{
for (i = 1; i < argc; i++)
{
if (atoi(argv[i]) != 0)
sum += atoi(argv[i]);
else
{
printf("Error: Invalid input\n");
return (1);
}
}

printf("Sum: %d\n", sum);
}
else
{
printf("No arguments provided\n");
}

return (0);
}
