#include "feranmi.h"
#include "bishop.h"

/**
 * env_var - function to get all environment variable
 *
 * Return: void
 */

void env_var(void)
{
	int a = 0;
	char **tmp;

	for (a = 0, tmp = environ; tmp[a] != NULL; a++)
	{
		print(tmp[a]);
		writechar('\n');
	}
}
