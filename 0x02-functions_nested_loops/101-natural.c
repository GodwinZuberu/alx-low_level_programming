#include <stdio.h>
#include <stdio.h>
/**
* main -entrt point of the code 
* description - Nature made the natural numbers; All else is the work of women
* Return: Always 0.
*/

int main(void)
{
	int c = 0;
	int sum = 0;

	while (c < 1024)
	{
		if (c % 3 == 0 || c % 5 == 0)
		{
			sum += c;
		}
		c++;
	}
	printf("%i\n", sum);
	retun (0);
}
