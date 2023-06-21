#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints own opcodes
 * @argc: num of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
int bytes, i;
char *arr;

if (argc != 2)
{
printf("Error\n");
return (1);
}

bytes = atoi(argv[1]);

if (bytes <= 0)
{
printf("Error\n");
return (2);
}

arr = (char *)main;

for (i = 0; i < bytes; i++)
{
printf("%02hhx ", arr[i]);
}
printf("\n");

return (0);
}
