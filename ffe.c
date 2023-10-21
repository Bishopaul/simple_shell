#include "feranmi.h"
#include "bishop.h"

/**
 * ffe - fetch
 *
 * Return: void
 */

void ffe(void)
{
	int a = 0;
	char **tmp;

	for (a = 0, tmp = environ; tmp[a] != NULL; a++)
	{
		print(tmp[a]);
		writechar('\n');
	}
}
