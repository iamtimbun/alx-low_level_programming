#include <stdio.h>
#include "main.h"

/**
 * *rot13- replace with the thirteenth letter
 * Return: whatever
 * @b: parameter
 */

char *rot13(char *b)
{
	int i;
	int j;
	char *old = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *new = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; b[i] != '\0'; i++)
	{
		for (j = 0; j <= 52; j++)
		{
			if (b[i] == old[j])
			{
				b[i] = new[j];
				break;
			}
		}
	}
	return (b);
}
