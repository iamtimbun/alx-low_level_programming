#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
  *_isupper- uppercase
  *@c: parameter
  *_isupper - check the uppercase
  *Return: various things
  */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{return (0);
	}
}
