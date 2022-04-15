#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	
	va_start(ap, n);

	for (i = 0; i <= n - 1; i++)
	{
		if (separator != NULL)
		{
			printf("%d%s", va_arg(ap, int), separator);
		}
		else if (separator == NULL)
		{
			printf("%d", va_arg(ap, int));
		}
		else if (i == NULL)
		{
			printf("nil");
		}
		va_end (ap);
	}
	printf("\n");
}
