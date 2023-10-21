#include "bishop.h"
#include "feranmi.h"

/**
 * b_env - function that implements builtin of env
 *
 * @mytype: struct
 * @ar: arguments
 *
 * Return: void
 */

void b_env(feranmi_t *mytype, char **ar)
{
	(void) mytype;
	(void) ar;

	env_var();
}
