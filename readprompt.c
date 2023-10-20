#include "feranmi.h"
#include "bishop.h"

/**
 * readprompt - Uses getline to read prompt
 *
 * Return: NULL or buffer
 */

char *readprompt(void)
{
	char *buff = NULL;
	int re;
	size_t a;

	re = getline(&buff, &a, stdin);

	if (re == EOF)
	{
		releasememory((void *) buff);
		return (NULL);
	}

	return (buff);
}
