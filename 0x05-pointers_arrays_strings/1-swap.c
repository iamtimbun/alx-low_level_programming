#include <stdio.h>
#include "main.h"
/**
  *swap_int- Swap Numbers
  *
  *@a: parameter
  *@b: parameter
  *Return: 0
  */
void swap_int(int *a, int *b)
{
	int e;

	e = *a;
	*a = *b;
	*b = e;
}
