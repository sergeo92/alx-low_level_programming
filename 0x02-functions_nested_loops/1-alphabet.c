#include "main.h"

/**
 * print_alphabet - Display the letters in lowercase
 *
 * Description: This fuction display the letters in lowercase
 *
 * return: void
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');

}
