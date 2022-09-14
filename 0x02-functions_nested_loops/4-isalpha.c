#include <ctype.h>
/**
 * _isalpha - check alpha  character
 *
 * @c: the letter to be check
 *
 * Description: check if alpha character
 *
 * Return: 0 or 1.
 */
int _isalpha(int c)
{
	int boolean;

	boolean = isalpha(c);
	if (boolean == 1024)
		return (1);
	else
		return (0);
}
