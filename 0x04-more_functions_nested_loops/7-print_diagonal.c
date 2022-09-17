#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 *
 * @n: n is the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int i;

	if (i > 0)
	{
		int space;
		int j;

		space = n - 1;
		print_space(space);
		print_char();
		_putchar(10);
	}
}

/**
 * print_char - print char \
 *
 */
void print_char(void)
{
	_putchar(92);
}

/**
 * print_space - print n times space
 *
 * @n: the number of times the character space should be printed
 *
 */
void print_space(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(32);
	}
}
