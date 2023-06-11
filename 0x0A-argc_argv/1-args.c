#include <stdio.h>

**
 * main - prints the entire arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */



void print_arguments(int argc, char *argv[])
{
int p;

for (p = 0; p < argc; p++)
{
printf("%s\n", argv[p]);
}
}

int main(int argc, char *argv[])
{
print_arguments(argc, argv);
return (0);
}

