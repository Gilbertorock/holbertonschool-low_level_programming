#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: input to reverse
 * Return: string and in reverse
 */
void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int n;

	while (s[counter] != '\0')
		counter++;

	for (n = 0; n < counter; n++)
	{
		fcounter--;
		rev = s[n];
		s[n] = s[counter];
		s[counter] = rev;
	}
}
