#include "bishop.h"
#include "feranmi.h"

/**
 * _strcpy - String copier
 *
 * @s: string to be copied
 *
 * Return: character pointer to the new string
 */

char *_strcpy(char *s)
{
	char *a;
	int str, b;

	if (s == NULL)
	{
		return (NULL);
	}

	str = _strlen(s) + 1;
	a = malloc(str * sizeof(char));

	if (a == NULL)
	{
		return (NULL);
	}

	for (b = 0; b < str; b++)
	{
		a[b] = s[b];
	}

	return (a);
}
