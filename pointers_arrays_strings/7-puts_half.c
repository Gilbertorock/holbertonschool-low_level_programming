#include "main.h"

/**
 * puts_half - print half of a string
 * @str: string
 * Return: always 0.
 */

void puts_half(char *str)
{
	int p, h, a;

	a = 0;

	for (p = 0; str[p] != '\0'; p++)
		a++;

	h = (a / 2);

	if ((a % 2) == 1)
		n = ((a + 1) / 2);

	for (p = h; str[p] != '\0'; p++)
		_putchar(str[p]);
	_putchar('\n')
}
