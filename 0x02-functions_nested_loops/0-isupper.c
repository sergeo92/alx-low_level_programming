#include "main.h"
#include <ctype.h>


/**
 * _isupper - check if a character is uppercase
 *
 * @c: character to be check
 *
 * Description: check if character is uppercase
 *
 * Return: 1 if c is uppercase 0 otherwise
 */
int _isupper(int c)
{
	int value;

	value = isupper(c);
	if (value != 0)
		return (1);
	else
		return (0);
}
