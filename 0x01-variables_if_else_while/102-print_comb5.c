#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int ch;
	int gh;

	for (ch = 0; ch < 100; ch++)
	{
		for (gh = 0; gh < 100; gh++)
		{
			if (ch < gh)
			{
				putchar (((ch / 10) % 10) + '0');
				putchar (ch % 10 + '0');
				putchar (' ');
				putchar (((gh / 10) % 10) + '0');
				putchar (gh % 10 + '0');
				if (ch != 98)
				{
					putchar (',');
					putchar (' ');
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
