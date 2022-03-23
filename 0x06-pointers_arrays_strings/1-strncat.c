#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * char *_strncat- Concatenate two strings
 * @n: parameter
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
               int i;

               for (i = 0 ; i < n && src[i] != '\0' ; i++)
                   dest[dest_len + i] = src[i];
               dest[dest_len + i] = '\0';

               return dest;
}
