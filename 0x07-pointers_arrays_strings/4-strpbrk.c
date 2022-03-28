#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: string
 * @accept: bytes in the string
 * Return: pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
