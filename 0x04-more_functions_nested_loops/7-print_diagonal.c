#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 *
 * @n: n is the number of times the character \ should be printed
 */
void print_diagonal(int n)
{


	if (n > 0)
	{
		int space;
		int j;

		space = n;
	
		for (j=0; j<space; j++)
		{
			print_space(j);
			print_cha();
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
 */
void print_cha(void)
{
	_putchar('\\');
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
