#include "feranmi.h"
#include "bishop.h"

/**
 * replacee - function to replace
 *
 * @mytype: struct
 * @id: index parameter
 * @s:strings
 *
 * Return: pointer to string
 */

char *replacee(feranmi_t *mytype, int *id, char *s)
{
	char *tmp, sig;

	(void) id;

	sig = *s;
	if (sig != '?' && sig != '$')
	{
		tmp = repenv(mytype, s);
		return (tmp);
	}

	tmp = (sig == '$') ? numstr(mytype->pid) :
		numstr(mytype->code_stat);

	return (tmp);
}
