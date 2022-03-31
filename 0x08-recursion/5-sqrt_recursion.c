#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * int _sqrt_recursion(int n)- Square root of numbers
 * @n: parameter
 * Return: Square root
 */

int _sqrt_recursion(int n)
{
	int a;

	if (n < 1)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (a = (a + n/a)/2);
}
