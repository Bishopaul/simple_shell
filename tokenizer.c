#include "bishop.h"
#include "feranmi.h"

/**
 * tokenizer - splits strings into different strings
 *
 * @str: string to be splitted
 * @delim: delimeter used to split the string
 *
 * Return: pointer to the new strings
 */

char **tokenizer(char *str, const char *delim)
{
	size_t old;
	size_t new;
	char **string, **temp, *token;

	old = sizeof(char *);
	string = malloc(old);

	if (string != NULL)
	{
		new = 1;
		token = strtok(str, delim);
		while (token)
		{
			if (token[0] == '#')
				break;
			temp = realloc_(string, old, (new + 1) * sizeof(char *));
			old = (new + 1) * sizeof(char *);
			if (temp == NULL)
				break;
			string = temp;
			++new;
			string[new - 2] = malloc(_strlen(token) + 1);
			if (string == NULL)
			{
				free(string);
				free(temp);
			}

			if (string[new - 2] != NULL)
			{
				strptr(string[new - 2], token);
			}
			token = strtok(NULL, delim);
			temp = NULL;
		}
		string[new - 1] = NULL;
	}
	return (string);
}
