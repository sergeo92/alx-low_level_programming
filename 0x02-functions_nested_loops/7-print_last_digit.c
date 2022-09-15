#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - print last digit
 *
 * @numb: value entry
 *
 * Description: Display th last digit of a integer number
 *
 * Return: integer value
 *
 */
int print_last_digit(int numb)
{
	int result;

	result = numb % 10;
	printf("%d", result);

	return (result);
}
