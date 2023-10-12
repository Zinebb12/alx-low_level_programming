#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints a variable number of integers separated by a string
 * @separator: Input string between numbers
 * @n: The number of the integers to print
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list happy;
	unsigned int birthday;

	va_start(happy, n);

	for (birthday = 0; birthday < n; birthday++)
	{
		printf("%d", va_arg(happy, int));

		if (birthday != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(happy);
}

