#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *_strcmp-compare two strings
 *@s1: parameter
 *@s2: parameter
 *Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	while (s1[i] == s2[i])
	{
		if(s1[i] == '\0' && s2[i] == '\0')
		break;
	i++;
}
	return s1[i] - s2[i];
}
