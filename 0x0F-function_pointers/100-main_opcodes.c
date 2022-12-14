#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry
 * @argc: arg count
 * @argv: arg vector
 * Return: int
 */
int main(int argc, char **argv)
{

	int i;
	unsigned char *pointer = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < (atoi(argv[1]) - 1); i++, pointer++)
	{
		printf("%02x ", *pointer);
	}
	printf("%02x\n", *pointer);
	return (0);
}
