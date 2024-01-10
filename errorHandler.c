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
	a = selectmessage(*mytype);
	b = numstr(mytype->n_cmd);

	b_size = _strlen(b);
	a_size = _strlen(mytype->argv[0]);

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
