#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings into newly allocated memory
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to the new string, or NULL if allocation fails.
 */
char *str_concat(char *s1, char *s2)
{
	char *res;
	unsigned int len1;
	unsigned int len2;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (s1[len1] != '\0')
		len1++;

	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	res = malloc((len1 + len2 + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		res[i] = s1[i];
	for (i = 0; i <= len2; i++)
		res[len1 + i] = s2[i];

	return (res);
}
