#include "main.h"

/**
 * main - prints _putchar
 * Description: prints Holberton
 * Return: 0 (Success)
 */

int main(void)
{
		char *p = '_putchar';

		while (*p)
		{
			_putchar(*p);
			p++;
		}
		_putchar('\n');

		return (0);
}
