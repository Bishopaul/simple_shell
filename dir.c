#include "feranmi.h"
#include "bishop.h"

/**
 * find_dir - function to find firectories
 *
 * @d: directory
 * @mytype: struct
 *
 * Return: string pointer in the directory or NULL
 */

char *find_dir(char *d, feranmi_t *mytype)
{
	char *p, *pt, *t, *delim;
	int s;

	(void) mytype;

	p = getenv("PATH");
	if (p == NULL)
		return (NULL);

	t = strtok(p, ":");

	s = _strlen(d) + 2;
	delim = malloc(s * sizeof(char));
	delim = strptr(delim, "/");
	delim = str_cat(delim, d);

	while (t != NULL)
	{
		pt = malloc(_strlen(t) + s);
		pt = strptr(pt, t);
		pt = str_cat(pt, delim);

		if (isexec(pt) == 1)
		{
			free(p);
			free(delim);
			return (pt);
		}
		t = strtok(NULL, ":");

		free(pt);
	}
	free(delim);
	free(p);

	return (NULL);
}
