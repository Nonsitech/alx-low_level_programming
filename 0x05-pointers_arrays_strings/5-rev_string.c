#include"main.h"

/**
 * rev_string - reverse a string
 *
 * @s: string input
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int l, i;
	char ch;
	
	/*find string length without null char*/
	for (l = 0; s[l] != '\0'; ++l)
		;

	/*swap the string by looping to half the string*/
	for (l = 0; i < l / 2; ++i)
	{
		ch = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = ch;
	}

}
