#include "bishop.h"
#include "feranmi.h"

/**
 * str_cat - concartenates two strings
 *
 * @destin: where the string is headed - destination
 * @strsrc: string source
 *
 * Return: destin
 */

char *str_cat(char *destin, char *strsrc)
{
	int length1, length2, a;

	for (length1 = 0; destin[length1] != '\0'; length1++)
	{

	}

	for (length2 = 0; strsrc[length2] != '\0'; length2++)
	{

	}

	for (a = 0; a <= length2; a++)
	{
		destin[length1 + a] = strsrc[a];
	}

	return (destin);
}
