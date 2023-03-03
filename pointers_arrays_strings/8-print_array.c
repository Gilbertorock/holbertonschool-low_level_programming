#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array
 * @a: array name
 * @n: is the number of elements of the array to be printed
 * Return: a and n
 */

void print_array(int *a, int n)
{
	double i, c;

	i = 0;
	c = 1;
	if (n < 0)
		n = 0;
	if (n > 0)
	{
		while (a[i] != '\0' && c < n)
		{
			printf("%d, ", a[i]);
			i++;
			c++;
		}
		printf("%d\n", a[i]);
	}
}
