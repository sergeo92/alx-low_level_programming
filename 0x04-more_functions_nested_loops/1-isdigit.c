#include "main.h"
#include <ctype.h>


/**
 * _isdigit - check if a character is digit
 *
 * @c: character to be check
 *
 * Description: check if character is digit
 *
 * Return: 1 if c is uppercase 0 otherwise
 */
int _isdigit(int c)
{
	int value;

	value = isdigit(c);

	if (value != 0)
		return (1);
	else
		return (0);
}
