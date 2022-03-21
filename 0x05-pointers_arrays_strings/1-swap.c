#include <stdio.h>
#include "main.h"
/**
  *swap_int(int *a, int *b)
  *
  *Return: 0
  */
void swap_int(int *a, int *b)
{
	*a = &b;
	*b = &a;
}
