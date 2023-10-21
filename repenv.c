#include "feranmi.h"
#include "bishop.h"

/**
 * repenv - replace env
 *
 * @mytype: struct
 * @env_var: environment variable
 *
 * Return: pointer
**/

char *repenv(feranmi_t *mytype, char *env_var)
{
	char *e;

	(void) mytype;

	e = getenviron(env_var);
	if (e != NULL)
	{
		return (e);
	}

	return (NULL);
}
