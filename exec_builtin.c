#include "feranmi.h"
#include "bishop.h"

/**
 * exec_builtin - Function to check for exec builtin
 *
 * @mytype: struct
 * @ar: command to be checked
 *
 * Return: 1 for buitlin, 0 otherwise
 */

int exec_builtin(feranmi_t *mytype, char **ar)
{
	int up;

	up = confirm_builtin(mytype, ar);

	if (up == 0)
		return (0);

	return (1);
}
