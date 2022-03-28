#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: pointer to the first occurence of the character
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
