#include <stdio.h>
#include "main.h"

/**
 * string_toupper- Uppercase converter
 * @b : parameter
 * Return: s
 */

char *string_toupper(char *b)
{
	int i;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] >= 'a' && b[i] <= 'z')
		{
		b[i] = b[i] - 32;
		}
	}
return (b);
}
