#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */


int main(int argc, char *argv[])
{
int num, result;
int coins[] = {25, 10, 5, 2, 1};
int coins_count = sizeof(coins) / sizeof(coins[0]);
int i;

if (argc != 2)
{
printf("Error\n");
return (1);
}

num = atoi(argv[1]);
result = 0;

if (num < 0)
{
printf("0\n");
return (0);
}

for (i = 0; i < coins_count; i++)
{
result += num / coins[i];
num %= coins[i];
}

printf("%d\n", result);

return (0);
}
