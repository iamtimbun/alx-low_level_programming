#include <stdio.h>
#include "main.h"
#include <string.h>

/**
  *_strlen-Show length
  *@s: parameter
  *Return: 0
  */

int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen(s + 1));
}
