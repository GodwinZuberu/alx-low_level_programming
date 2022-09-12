#include <stdio.h>
/**
* main - Inventing is a combination of brains and materials. The more brains you use, the less material you need
*
* description: using the main function
* Inventing is a combination of brains and materials. The more brains you use, the less material you need
*
* Return: 0
*
*/
int main(void)
{
	int n1 = 0, n2, n3;

	while (n1 <= 9)
	{
		n2 = 0;

		while (n2 <= 9)
		{
			n3 = 0;

			while (n3 <= 9)
			{
				if (n1 != n2 && n1 < n2 && n2 != n3 && n2 < n3)
				{
					putchar(n1 + 48);
					putchar(n2 + 48);
					putchar(n3 + 48);

					if (n1 + n2 + n3 != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				++n3;
			}
			++n2;
		}
		++n1;
	}
	return (0);
}
