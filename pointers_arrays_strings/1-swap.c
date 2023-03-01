#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * Write a function that swaps the values of two integers.
 * This function swaps values pointed by 'a' and 'b'
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int numb = *a;
	*a = *b;
	*b = numb;
}

int main()
{
	int a, b,
	printf("Enter value of a  ");
	scanf("%d", &a);
	printf("\n Enter value of b ");
	scanf("%d", &b);
	swap(&a, &b);
	printf("\n After swapping: a = %d, b = %d", a, b);
	return (0);
}
