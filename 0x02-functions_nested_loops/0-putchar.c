#include "main.h"

/**
 * main - Entry point
 *
 * return: 0;
 */
int main(void)
{
	int tab[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(tab[i]);
	}
	_putchar(10);

	return (0);
}
