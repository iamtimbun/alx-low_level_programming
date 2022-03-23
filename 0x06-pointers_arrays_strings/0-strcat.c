#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * char *_strcat- Join two strings
 * Return: 0
 * @dest: destination
 * @src: source
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
