#include <stdio.h>

void intro(void) __attribute__ ((constructor));

/**
 * intro - prints a sentence before the main
 * function is executed
 */
void intro(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
