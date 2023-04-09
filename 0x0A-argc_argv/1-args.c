#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments passed to the program
 * @argc: number of arguments
 * @argc: array of arguments
 */
int main(int argc, char * argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
