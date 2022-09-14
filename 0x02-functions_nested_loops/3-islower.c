#include <ctype.h>
/**
 * _islower - check lowercase charactere
 *
 * @c: the letter to be check
 *
 * Description: check if a letter is lowercase
 *
 * Return: 0 or 1.
 */
int _islower(int c)
{
	int boolean;

	boolean = islower(c);
	if (boolean == 512)
		return (1);
	else
		return (0);
}
