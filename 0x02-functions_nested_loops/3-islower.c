#include <stdio.h>
#include <ctype.h>
#include "main.h"
#include<stdlib.h>

/**
  *_islower - check for small case
  *@c: parameter given
  *Return: Always 0.
  */

int _islower(int c)
{
	return (c >= 'a' && c <=  'z');
}
