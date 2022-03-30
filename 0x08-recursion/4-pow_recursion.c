#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * _pow_recursion- raises to power
 * @x: integer
 * @y: integer
 * Return: Raised power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else
		return(x * _pow_recursion(x, y-1));
}	
