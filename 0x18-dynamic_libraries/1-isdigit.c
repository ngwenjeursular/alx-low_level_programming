#include "main.h"

/**
 * _isdigit - checks for a digit 1 thru 9
 * @c: character to be checked
 * Return: 1 for digit character, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
