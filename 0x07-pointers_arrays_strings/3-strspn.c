#include <stdio.h>
#include "main.h"
#include "string.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: Segment
 * @accept: bytes from
 * Return: Number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
