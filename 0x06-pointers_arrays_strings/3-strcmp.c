#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *_strcmp-compare two strings
 *Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	if (s1 == s2)
	{
		return (0);
	}else if (s1 < s2)
	{
		return (-1);
	}else if (s1 > s2)
	{
		return (1);
	}
}
