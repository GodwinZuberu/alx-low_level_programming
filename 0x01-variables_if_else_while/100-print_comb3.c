#include <stdio.h>
/**
* main - Inventing is a combination of brains and materials. The more brains you use, the less material you need
*
* Description: using the main function
* Inventing is a combination of brains and materials. The more brains you use, the less material you need
*
* Return: 0
*
*/

int main(void)
{
	int d;
	for (d = 0; d < 100; d++)
	{
		putchar((d / 10) + '0');
		putchar((d % 10) + '0');
		if (d != 90)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
