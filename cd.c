#include "feranmi.h"
#include "bishop.h"

/**
 * cdr - command
 *
 * @cmd: command
 * @ar: arguments
 * @buff: buffer
 * @mytype: struct
 *
 * Return: an integer
 */

int cdr(char *cmd, char **ar, char *buff, feranmi_t *mytype)
{

	if (mytype->cur_path == 0)
		return (0);

	if (isexec(cmd) == 1)
	{
		run(cmd, ar, mytype, buff);
		return (1);
	}

	return (0);
}
