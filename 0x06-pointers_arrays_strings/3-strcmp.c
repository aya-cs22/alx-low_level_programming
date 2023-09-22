#include "main.h"

/**
 * _strcmp - Compare two strings
 *
 * @s1: First string
 *
 * @s2: Second string
 *
 * Return: 0 if equal, less than 1 or greater than 1
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
		i++;
	}
		return (s1[i] - s2[i]);
}
