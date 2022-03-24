#include <stdio.h>
#include "main.h"

/**
 * *leet- Encoding
 * @b: parameter
 * Return: 0
 */

char *leet(char *b)
{
	int i, j;
	char *old = "aAeEoOtTlL";
	char *new = "4433007711";

	for (i = 0; b[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (b[i] == old[j])
			{
				b[i] = new[j];
			}
		}
	}
	return (b);
}
