#include "feranmi.h"
#include "bishop.h"

/**
 * run - execute command in child
 *
 * @c: command
 * @ar: arguments
 * @mytype: struct
 * @buffer: line
 *
 * Return: void
 */

void run(char *c, char **ar, feranmi_t *mytype, char *buffer)
{
	int s;
	pid_t pid;

	pid = fork();
	if (pid == 0)
	{
		execve(c, ar, environ);
		perror("./sh");

		releasepointermem((void *) ar);

		if (mytype->cmd_path != NULL)
		{
			free(mytype->cmd_path);
			mytype->cmd_path = NULL;
		}

		free(mytype);
		free(buffer);
		exit(1);
	}
	else if (pid > 0)
	{
		waitpid(pid, &s, 0);
		if (WIFEXITED(s))
		{
			mytype->code_stat = WEXITSTATUS(s);
		}
	}
}
