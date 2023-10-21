#include "feranmi.h"
#include "bishop.h"

/**
 * check_prompt - function to run analysis on arguments passed in prompt
 *
 * @ar: arguments
 * @mytype: struct
 * @buff: buffer
 *
 * Return: void
 */

void check_prompt(char **ar, feranmi_t *mytype, char *buff)
{
	char *cmd;
	int up;


	if (*ar == NULL || ar == NULL)
		return;

	cmd = ar[0];
	mytype->cmd = cmd;

	if (confirm_builtin(mytype, ar) == 1)
		return;

	up = fileorbin(cmd);

	if (up == 0)
	{
		mytype->code_stat = 220;
		mytype->error_digit = 10;
		errorHandler(mytype);
		return;
	}
	if (up == 1)
	{
		run(cmd, ar, mytype, buff);
		return;
	}
	if (getcurrentdir(cmd, ar, buff, mytype) == 1)
		return;
	mytype->cmd_path = find_dir(cmd, mytype);
	if (mytype->cmd_path != NULL)
	{
		run(mytype->cmd_path, ar, mytype, buff);
		releasememory((void *) mytype->cmd_path);
		return;
	}
	mytype->code_stat = 221;
	mytype->error_digit = 102;
	errorHandler(mytype);
}
