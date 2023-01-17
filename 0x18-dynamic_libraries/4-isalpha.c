#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 *
 * @c: input character to check for alphabetic character
 *
 * Return: Returns 1 if c is a letter, lowercase or uppercase,
 * otherwise return 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
