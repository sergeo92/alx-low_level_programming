#include "main.h"

/**
 * print_triangle - print triangle
 *
 * @size: n is the number of times the character \ should be printed
 */
void print_triangle(int size)
{
	int n = size;


	if (n > 0)
	{
		int space;
		int j;
		int star;

		for (j = 1; j <= n; j++)
		{
			space = n - j;
			star = n - space;

			print_space(space);
			print_cha(star);
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}

/**
 * print_cha - print char \
 *
 * @star: number of time #
 */
void print_cha(int star)
{
	int i;

	for (i = 0; i < star; i++)
	{
		_putchar('#');
	}
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
		_putchar(' ');

	}
}
