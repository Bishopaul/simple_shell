#include "bishop.h"
#include "feranmi.h"

/**
 * letter - search for letters in a given digit string
 *
 * @str: string to check
 *
 * Return: 1, if strings are found, 0 if not
 */

int letter(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (numeric(str[a]) == 0)
			return (1);
	}

	return (0);
}
