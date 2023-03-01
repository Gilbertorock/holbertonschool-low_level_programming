#include "main.h"

/**
 * main - prints a string, followed by a new line, to stdout.
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	for (char  *str = string + 6 ; *str != '\0' ; str++ )
	{
		if ( *str == '\n' )
			putchar(*str);
	}
}
