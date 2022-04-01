#include <stdio.h>
#include <stdlib.h>

/**
 *main(int argc, char *argv[])
 *@argc: argument
 *@argv: argument
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%d\n", argc);
		printf(" ", argv[i]);
	}
	return (0);
}
