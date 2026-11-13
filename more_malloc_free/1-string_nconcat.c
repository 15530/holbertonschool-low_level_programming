#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: maximum number of bytes of s2 to use
 *
 * Return: pointer to the new string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
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

	if (n >= len2)
		n = len2;

	res = malloc((len1 + n + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		res[i] = s1[i];
	for (i = 0; i < n; i++)
		res[len1 + i] = s2[i];
	res[len1 + n] = '\0';

	return (res);
}
