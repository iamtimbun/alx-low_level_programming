#include <stdlib.h>
#include <stdio.h>

/**
 * main(int argc, char *argv[])- main function
 * @argc: argument
 * @argv: argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int mul = 1;
	int i;

	for (i = 1; i < argc; i++)
	{
		mul = mul * atoi(argv[i]);
		if (argc < 1)
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", mul);
	return (0);
}
