#include "bishop.h"
#include "feranmi.h"

/**
 * _strlen - Function that calculates and return the length of a string
 *
 * @s: the string to be calculated
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int total = 0;

	while (s[total] != '\0')
	{
		total++;
	}

	return (total);
}
