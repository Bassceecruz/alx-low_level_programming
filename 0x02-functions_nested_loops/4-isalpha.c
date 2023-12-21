#include "main.h"
/**
 * _isalpha - Checks if a character is alphabetic.
 *
 * Deecription: we are using _putchar
 *
 * @c: collect the character
 *
 * Return: 1 if c is low or cap otherwise 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
