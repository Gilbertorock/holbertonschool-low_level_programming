#include "main.h"

/**
 * puts2 - print alternating chars of string
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int fc;

	fc = 0;
	while (str[fc] != '\0')
	{
		if (fc % 2 == 0)
			_putchar(str[fc]);
		fc++;
	}
	_putchar('\n');
}
