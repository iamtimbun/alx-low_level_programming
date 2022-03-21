#include <stdio.h>
#include "main.h"

/**
 *print_rev- reverse print
 *@s: string
 *
 */
void print_rev(char *s)
{
	int i, len, temp;
	len = strlen(str1);

	for (i = 0; i < len/2; i++)
	{
		temp = str1[i];
		str[i] = str1[len - i - 1];
		str1[len - i - 1] = temp:
	}
}
