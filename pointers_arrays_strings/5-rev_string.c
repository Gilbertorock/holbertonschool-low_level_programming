#include "main.h"

/**
 * rev_string - reverse string
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	char rev = s[0];
	int sc = 0;
	int n;

	while (s[sc] != '\0')
		sc++;

	for (n = 0; n < sc; n++)
	{
		sc--;
		rev = s[n];
		s[n] = s[sc];
		s[sc] = rev;
	}
}
