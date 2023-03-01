#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: string
 * Return: string
 */

/** Solución 1 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

/** Solución 2 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
