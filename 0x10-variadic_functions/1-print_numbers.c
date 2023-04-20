#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...) {

	va_list args;

	unsigned int i;

	va_start(args, n);

	printf("%d", va_arg(args, int));

	for (i = 1; i < n; i++) {

		if (separator != NULL) {

			printf("%s", separator);
		}

		printf("%d", va_arg(args, int));
	}

	va_end(args);

	 printf("\n");
}
