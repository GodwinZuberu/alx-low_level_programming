#include "main.h"

/**
 * print_rev - rints a string in reverse
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	for (i = i; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
