#include <stdio.h>
/*
 * main -  a program that prints the alphabet in lowercase.
 * Description: print the letters of the alphabet.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	 
	for (c = 'a'; c <= 'z'; ++c)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

