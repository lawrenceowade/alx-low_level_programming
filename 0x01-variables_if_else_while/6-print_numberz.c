#include <stdio.h>
/**
 * main -entry point
 * Description: print numbers
 *
 * Return: Always 0(sucess)
 */
int main(void)
{
int num;
for (num = 0; num < 10; num++)

putchar((num % 10) + '0');

putchar('\n');

return (0);
}
