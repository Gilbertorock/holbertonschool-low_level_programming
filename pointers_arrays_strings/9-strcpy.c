#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 *
 * Return: string
 */

char *_strcpy(char *dest, char *src)

{
	int i = 0;
	int a = 0;



	while (src[i++])
		a++;



	for (i = 0; i <= a; i++)

		dest[i] = src[i];




	return (dest);

}
