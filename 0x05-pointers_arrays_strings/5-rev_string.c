#include <string.h>
/**
 * rev_string - reverse a string
 * @s: string
 * Description: s is the string that is reverse
 * Return: Always (0)
 */
void rev_string(char *s)
{

	int i;
	int length;
	int temp;

	length = strlen(s); /* use strlen() to get the length of str string*/

	/*use for loop to iterate the string*/
	for (i = 0; i < length / 2; i++)
	{
		/* temp variable use to temporary hold the string*/
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
