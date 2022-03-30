#include <stdio.h>
#include "main.h"

/**
 * factorial - factorial function
 * @n: integer
 * Return: factorial
 */

int factorial(int n)
{
	if (n < 0)
	return (-1);
	else if (n <= 1)
	return (1);
	return (n * factorial(n - 1));
}
