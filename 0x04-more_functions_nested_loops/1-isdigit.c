#include <stdio.h>
#include "main.h"
/**
  *_isdigit- check for digit
  *@c: notation
  *Return: whatever
  */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
