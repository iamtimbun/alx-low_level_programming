
#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
*print_to_98 - prints all natural numbers from n to 98
*@n: number to be worked on
*Return: 0
*/

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n <= 98; n++)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d\n", n);
			}
		}
	}
	else
	{
		for (n = n; n >= 98; n--)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d\n", n);
			}
		}
	}
}
