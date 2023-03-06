#include <stdio.h>

/**
 * main - print single digit numbers
 * Description: print single digit numbers
 * Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void){
	
	int i;
	
	for(i = '0'; i <= '9'; i++)
	putchar(i);
	putchar('\n');
	
	return (0);
}
/**
 * Otra solucion con Ascii
int main(void)
{
	int i;
	i = 48;

	while (i < 58)
	{
	putchar(i);
	i++;
	}

	putchar(10);

	return (0);
*/
}
