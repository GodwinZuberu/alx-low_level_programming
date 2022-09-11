#include <stdio.h>
/*
* main - Inventing is a combination of brains and materials. The more brains you use, the less material you need
*
* Description: using the main function
* Inventing is a combination of brains and materials. The more brains you use, the less material you need
*
* * Return: 0
*
*/

int main(void)
{
	int n1 = 0, n2;
	while (n2 <= 9)
	{
		n2 = 0;
		while (n2 <= 9)
		{
			if (n1 != n2 && n1 < n2)
			{
				putchar(n1 + 48);
				putchar(n2 + 48);

				if (n1 + n2 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++n2;
		}
		++n1;
	}
	putchar('\n');
	return (0);
}
