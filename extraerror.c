#include "feranmi.h"
#include "bishop.h"

/**
 * extraerror - prints error message with extra info
 *
 * @mytype: struct
 * @m: more info
 *
 * Return: void
 */

void extraerror(feranmi_t *mytype, char *m)
{
	char *a, *b, *c, *d;
	int a_size, b_size, m_size;

	b = NULL;
	a = selectmessage(*mytype);
	b = numstr(mytype->n_cmd);

	b_size = _strlen(b);
	a_size = _strlen(mytype->argv[0]);
	m_size = _strlen(m);

	c = malloc(a_size + b_size + 3);
	c = strptr(c, mytype->argv[0]);
	c = str_cat(c, ": ");
	c = str_cat(c, b);

	d = malloc(_strlen(a) + m_size + 3);
	d = strptr(d, a);
	d = str_cat(d, ": ");
	d = str_cat(d, m);

	a = mergewords(c, mytype->cmd, d, ": ");
	displayerror(a);

	free(a);
	free(b);
	free(c);
	free(d);
}
