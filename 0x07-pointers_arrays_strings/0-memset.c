#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _memset- fills memory with constant byte
 * @s: string
 * @b: constant byte
 * @n: number of bytes
 * Return: memset result
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
