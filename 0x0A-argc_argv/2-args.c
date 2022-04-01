#include <stdio.h>
#include <stdlib.h>

/**
 *main(int argc, char *argv[])- main function
 * @argc: argument
 * @argv: argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
