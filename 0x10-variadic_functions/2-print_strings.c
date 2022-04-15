#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>

/**
 * print_strings - print strings
 * @separator: parameter
 * @n: pointer
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *p;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		p = va_arg(ap, char *);
		if (separator != NULL && i < n - 1)
		{
			printf("%s%s", p, separator);
		}
		else if (separator == NULL && i < n - 1)
		{
			printf("%s", p);
		}
		else if (p == NULL)
		{
			p = "(nil)";
		}
		else if (i == n - 1)
		{
			printf("%s", p);
		}
	}
	va_end(ap);
	printf("\n");
}
