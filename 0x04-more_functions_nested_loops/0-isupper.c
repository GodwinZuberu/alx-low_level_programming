#include "main.h"

/**
* _isupper - checks if a character is upper case or not
* @c : caracter to be tested
* Return: 1 whether is , 0 otherwise
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
