#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
  *_abs- checkthe integer
  *Return: Whatever
  *@n: parameter
  */
int _abs(int n)
{
	if (n <= 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
