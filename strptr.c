#include "bishop.h"
#include "feranmi.h"

/**
 * strptr - A function that points a string to a chareacter
 *
 * @str1: string one pointing to a character
 * @str2: string two pointing to a character
 *
 * Return: the character being pointed at
 */

char *strptr(char *str1, char *str2)
{
	int a;

	for (a = 0; str2[a] != '\0'; a++)
	{
		str1[a] = str2[a];
	}
	str1[a] = '\0';

	return (str1);
}
