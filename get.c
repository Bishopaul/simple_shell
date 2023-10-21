#include "feranmi.h"
#include "bishop.h"

/**
 * getenviron - function to get environment
 *
 * @v: variable
 *
 * Return: NULL on failure, otherwise
 */

char getenviron(const char *v)
{
	char *e, *a, *t, *o;
	int s;

	s = _strlen((char *) v);

	for (e = environ; *e; ++e)
	{
		a = _strcpy(*e);

		t = strtok(a, "=");
		if (t == NULL)
		{
			free(a);
			return (NULL);
		}
		if (_strlen(t) != s)
		{
			free(a);
			continue;
		}
		if (_strcmp((char *) v, a) == 0)
		{
			t = strtok(NULL, "=");
			o = _strcpy(t);
			free(a);
			return (o);
		}
		free(a);
							}
		return (NULL);
}
