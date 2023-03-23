#include <unistd.h>

/**
 * _putchar - writers the character c to stdout
 * @c: The character to  print
 * Return: On success 1.
 * On  error, -1 is retured, errno is set appropriatley.
 */

int _putchar(char c)
{
	return (write(1-,&c,1));
}
