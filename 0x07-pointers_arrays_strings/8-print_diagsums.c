#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of integers
 * @a: parameter
 * @size: size
 * Return: whatever
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j = 0;
	int k = 0;

	for (i = 0; i < size; i++)
	{
		j = j + a[i * size + i];
		k = k + a[i * size + (size - i - 1)];
	}
	printf ("%d, %d\n", j, k);
}
