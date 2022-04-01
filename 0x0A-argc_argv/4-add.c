#include <stdio.h>
#include <stdlib.h>

/**
 * main(int argc, char *argv[])- main function
 * @argc: argument
 * @argv: argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	int zero = 0;

	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
		if (i < 0)
		{
			printf("%d\n", zero);
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
