#include "main.h"
/**
 * rev_string - a function that reverses a string
 * @s: variable to reverse
 * Return: Always 0
 */

void rev_string(char *s)
{
	char rev = s[0];
	int c = 0;
	int st;

	while (s[c] != '\0'
		c++;
	
		for (st = 0; st < c; st++)
	{
		c--;
		rev = s[st];
		s[st] = [c];
		s[c] = rev;
	}
}
