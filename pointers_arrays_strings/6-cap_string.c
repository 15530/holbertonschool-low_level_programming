#include "main.h"

/**
 * is_separator - checks if a character separates words
 * @c: the character to check
 *
 * Return: 1 if c is a separator, 0 otherwise.
 */
int is_separator(char c)
{
	switch (c)
	{
	case ' ':
	case '\t':
	case '\n':
	case ',':
	case ';':
	case '.':
	case '!':
	case '?':
	case '"':
	case '(':
	case ')':
	case '{':
	case '}':
		return (1);
	default:
		return (0);
	}
}

/**
 * cap_string - capitalizes all words of a string
 * @str: pointer to the string to modify
 *
 * Return: pointer to str.
 */
char *cap_string(char *str)
{
	int i;
	int new_word;

	i = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		if (new_word && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		new_word = is_separator(str[i]);
		i++;
	}

	return (str);
}
