#include "bishop.h"
#include "feranmi.h"

/**
 * _strcmp - function that compare two strings
 *
 * @c1: first string to be compared
 * @c2: second string to be compared
 *
 * Return: string if same
 */

int _strcmp(char *c1, char *c2)
{
	int a, b = 0;

	for (a = 0; c1[a] != '\0' && b == 0; a++)
	{
		b = c1[a] - c2[a];
	}

	return (b);
}
