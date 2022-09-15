#include "main.h"

/**
 * print_square - print square
 *
 * @size: The number to print a line of #
 *
 * Description: Print character # to square
 *
 */
void print_square(int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		print_char(size);
	}
}

/**
 * print_char - print char
 *
 * @size: The number of time print #
 *
 * Description: Print character # to square
 *
 */
void print_char(int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		_putchar('#');
	}
	_putchar(10);
}

