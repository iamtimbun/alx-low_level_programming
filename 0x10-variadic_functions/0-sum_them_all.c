#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sum all
 * @n: parameter
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	sum = 0;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			sum += va_arg(ap, int);
		}
	}
	va_end(ap);
	return (sum);
}
