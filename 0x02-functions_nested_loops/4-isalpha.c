#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
  *_isalpha - check if it's an alphabet
  *@c: parameter
  *Return: Always 0.
  */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
