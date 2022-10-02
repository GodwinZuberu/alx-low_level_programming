#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main -> this is a function to print its name
 * @argc: argc parameter
 * @argv: an array of a command listed
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int result = 0, num, i, j, k;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}

	for  (k = 0; k < argc; k++)
	{
		num = atoi(atoi(argv[k]));
		result += num;
	}
	printf("%d\n", result);
	return (0);
}
