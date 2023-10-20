#include "bishop.h"
#include "feranmi.h"

/**
 * errorHandler - Function that handles error and print error
 *
 * @mytype: struct
 *
 * Return: void
 */

void errorHandler(feranmi_t *mytype)
{
	char *a, *b, *c;
	int a_size, b_size;

	b = NULL;
	a = sellectmessages(*mytype);
	b = numstr(mytype->n_cmd);

	a_size = _strlen(mytype->argv[0]);
	b_size = _strlen(b);

	c = malloc(a_size + b_size + 3);

	c = strptr(c, mytype->argv[0]);
	c = str_cat(c, ": ");
	c = str_cat(c, b);

	a = mergewords(c, mytype->cmd, a, ": ");
	displayerror(c);

	free(a);
	free(b);
	free(c);
}
