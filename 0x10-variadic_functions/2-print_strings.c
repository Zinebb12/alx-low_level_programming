#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list zineb;
	char *str;
	unsigned int meriem;

	va_start(zineb, n);

	for (meriem = 0; meriem < n; meriem++)
	{
		str = va_arg(zineb, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (meriem != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(zineb);
}

