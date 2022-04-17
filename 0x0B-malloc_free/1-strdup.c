#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copy string
 * @str: string
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *ptr;

	if (str == NULL)
		return (NULL);
	ptr = strdup(str);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
