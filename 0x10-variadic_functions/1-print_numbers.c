#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - print numbers
 * @n: parameter
 * @separator: parameter
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i <= n - 1; i++)
	{
		if (separator != NULL && i < n - 1)
		{
			printf("%d%s", va_arg(ap, int), separator);
		}
		else if (separator == NULL && i < n - 1)
		{
			printf("%d", va_arg(ap, int));
		}
		else
		{
			printf("%d", va_arg(ap, int));
		}
	}
	printf("\n");
	va_end(ap);
}
