#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strstr - function that locates a substring
 * @haystack: string
 * @needle: substring
 * Return: Pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
