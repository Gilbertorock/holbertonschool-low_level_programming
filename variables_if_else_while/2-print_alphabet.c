#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - a program that prints the alphabet in lowercase.
 * Description: followed by a new line.
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

