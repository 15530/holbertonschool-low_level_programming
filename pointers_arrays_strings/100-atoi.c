#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string to convert
 *
 * Return: the converted integer, or 0 if there is no number.
 */
int _atoi(char *s)
{
	int i;
	int sign;
	int res;

	i = 0;
	sign = 1;
	res = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign = -sign;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				res = res * 10 - (s[i] - '0');
				i++;
			}
			break;
		}
		i++;
	}

	if (sign == 1)
		return (-res);
	return (res);
}
