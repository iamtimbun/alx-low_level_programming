#include <stdio.h>
#include <stdlib.h>

/**
 *main(int argc, char *argv[])- main
 *@argc: argument
 *@argv: argument
 *Return: 0
 */

int main(int argc, char *argv[] __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
