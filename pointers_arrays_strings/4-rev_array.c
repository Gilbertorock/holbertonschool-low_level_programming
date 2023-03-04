#include "main.h"

/**
 * reverse_array - reversing an array
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i = 0, b, tmp;

	for (b = n - 1; b > i; b--)
	{
		tmp = a[b];
		a[b] = a[i];
		a[i] = tmp;
		i++;
	}
}

/**
 * Other solution 
void print_rev(char *s)
{
	int c = 0;
	
	while (s[c])
	c++;
	
	while (c--)
	{
	_putchar(s[c]);
	}
	
	_putchar('\n');
}
*/
