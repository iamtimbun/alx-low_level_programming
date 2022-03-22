#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *print_rev- reverse print
 *@s: string
 *
 */
void print_rev(char *s)
{
	int i = 0;
	int j = 0;
	scanf ("%s", str1);
	j = strlen (str1) - 1;
	while (i < j)
	{
		temp = str1[j];
		str1[j] = str1[i];
		str1[i] = temp;
		i++;
		j--;
	}
}
