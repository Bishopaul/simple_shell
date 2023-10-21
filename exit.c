#include "bishop.h"
#include "feranmi.h"

/**
 * exitt - fucntion to exit shell
 *
 * @mytype: struct
 * @ar: arguments
 *
 * Return: void
 */

void exitt(feranmi_t *mytype, char **ar)
{
	int s = 1;
	int sd;

	if (ar[1] != NULL)
		s = managenumbers(mytype, ar[1]);

	if (s == 0)
		return;

	sd = mytype->code_stat;

	releasepointermem((void *) ar);
	releasememory((void *) mytype->buff);
	releasememory((void *) mytype->env);
	releasememory((void *) mytype);

	exit(sd);
}
