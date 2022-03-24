#include <stdio.h>
#include "main.h"

/**
 * cap_string- Capitalize a string
 * @b: parameter
 * Return: b
 */

char *cap_string(char *b)
{
	int i;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == 0 )
		{
			b[i] = b[i] - 32;
		}
	}
	return (b);
}
