#include <stdio.h>

/*
 * main - prints the lowercase alphabet in reverse
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void) /*no description found for function main*/
{
	char abc;

	for (abc = 'z'; abc >= 'a'; abc--)
	{
		putchar(abc);
	}
	putchar('\n');
	return (0);
}
