#include "feranmi.h"
#include "bishop.h"

/**
 * confirm_builtin - function that confirms a builtin cmd
 *
 * @mytype: struct
 * @ar: argument
 *
 * Return: 0 if NULL, otherwise 1
 */

int confirm_builtin(feranmi_t *mytype, char **ar)
{
	int a;
	int b;

	sysFunction_t builtins[] = {
		{"exit", exitt},
		{"env", b_env}
	};

	b = sizeof(builtins) / sizeof(builtins[0]);
	a = 0;
	while (a < b)
	{
		if (_strcmp(mytype->cmd, builtins[a].cmd) == 0)
		{
			builtins[a].func(mytype, ar);
			return (1);
		}
		a++;
	}
	return (0);
}
