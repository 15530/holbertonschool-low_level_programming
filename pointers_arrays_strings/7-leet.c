#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: pointer to the string to encode
 *
 * Return: pointer to str.
 */
char *leet(char *str)
{
	int i;
	int j;
	char *letters = "aAeEoOtTlL";
	char *nums = "4433007711";

	i = 0;
	while (str[i] != '\0')
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = nums[j];
				break;
			}
		}
		i++;
	}

	return (str);
}
