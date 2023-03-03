#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: copy to
 * @src: copy from
 * @n: input of max bytes to be used
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int con = 0;

	while (dest[dest[con] !=  '\0')
	{
		con++;
	}
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
			dest[con + i] =src[i];
	dest[len + i] = '\0';

	return (dest);
}
