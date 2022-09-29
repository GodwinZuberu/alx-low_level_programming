#include "main.h"
/**
 * _lenght - checks the lenght of a string
 * @s: is the string
 * Return: return the lenght
 */
int _lenght(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _lenght(s + 1));
}
/**
 * checkp - checks the string
 * @i: is the index
 * @lg: is the lenght of the string
 * @s is the strin
 * Return: 1 or 0;
 */
int checkp(int i, int lg, char *s)
{
	if (lg > 0)
	{
		if (s[i] == s[lg])
		{
			return (checkp(i + 1, lg - 1, s));
		}
		else if (s[i] != s[lg])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}
/**
 * is_palindrome - checks if the string is a P
 * @s is the string
 * Return: return 1 if the string is a P
 */
int is_palindrome(char *s)
{
	return (checkp(0, _lenght(s) - 1, s));
}
