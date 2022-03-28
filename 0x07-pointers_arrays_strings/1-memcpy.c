#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _memcpy - copy memory area
 * @dest: destination
 * @src: source
 * @n: bytes
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
