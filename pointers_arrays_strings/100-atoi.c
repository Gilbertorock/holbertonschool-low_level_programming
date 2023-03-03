#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: the value to intenger
 * Return: string intenger
 */
int _atoi(char *s)
{
	int i;
	unsigned int num;
	char *st;

	st = s;
	num = 0;
	i = 1;
	while (*st != '\0' && (st < '0' || *st > '9'))
	{
		if (*st == '-')
			sign *= -1;
		st++;
	}
	if (*st != '\0')
	{
		do {
			num = num * 10 + (*st - '0');
			st++;
		}
		while (*st >= '0' && *st <= '9');
	}
	return (num * sign);
}
