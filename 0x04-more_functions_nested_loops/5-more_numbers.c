#include "main.h"

/**
 * more_numbers - print numbers
 *
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		line();
	}
}

/**
 * print_numb_1 - print numbers from 0 to 9
 *
 */
void print_numb_1(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
}


/**
 * print_numb_2 - print numbers 1, 0, 2
 *
 */

void print_numb_2(void)
{
	int tab[] = {49, 48, 49, 49, 49, 50, 49, 51, 49, 52};
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(tab[i]);
	}
}

/**
 * line - print line
 *
 */
void line(void)
{
	print_numb_1();
	print_numb_2();
	_putchar(10);
}
