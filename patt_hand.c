#include "feranmi.h"
#include "bishop.h"

/**
 * handle_pattern - This function handles pattern and serves as a
 * helper function
 * @mytype: struct
 * @words: a pointer to a string passed as parameter
 * Return: a pointer to a string
**/

char *handle_pattern(feranmi_t *mytype, char *words)
{
	int j;

	for (j = 0; words[j] != '\0'; j++)
	{
		if (words[j] == '$' && words[j + 1] != '\0')
		{
			words = repvalue(mytype, &j, words);
		}
	}

	return (words);
}
