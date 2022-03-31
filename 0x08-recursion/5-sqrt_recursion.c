#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion(int n)- Square root of numbers
 * @n: parameter
 * Return: Square root
 */

int _sqrt_recursion(int n)
{
	if (n < 1)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (n * _sqrt_recursion(n, 0.5));
}
