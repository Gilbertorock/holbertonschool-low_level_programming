#include "main.h"

/**
 * print_diagonal -  a function that draws a diagonal line on the terminal
 * @n: input number of times '\' should be printed
 * Return: a diagonal
 */
void print_diagonal(int n)
{
	int dg, es;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (dg = 1; dg <= n; dg++)
		{
			for (es = 1; es < dg; es++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
