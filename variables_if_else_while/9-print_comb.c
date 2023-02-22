#include <stdio.h>
/**
 * main -imprima todas las posibles combinaciones de un solo dígito
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 20; n < 45; n++)
	{
		putchar(n);
		if (n != 44)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
