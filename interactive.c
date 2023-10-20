#include "feranmi.h"
#include "bishop.h"

/**
 * interactive - represents loop in interactive prompt
 *
 * @mytype: gen info struct
 *
 * Return: Buffer or NULL
 */

void interactive(feranmi_t *mytype)
{
	char *buffer, **args, *env_path;

	signal(SIGINT, sighand);
	while (1)
	{
		getinput(mytype);

		env_path = getenv("PATH");
		iscurrpath(env_path, mytype);

		mytype->env = env_path;
		buffer = readprompt();
		if (buffer == NULL)
		{
			print(mytype->it_mode == 1 ? "exit\n" : "");
			free(env_path);
			break;
		}
		mytype->n_cmd++;
		if (buffer[0] != '\n')
		{
			args = tokenizer(buffer, "\t\n");

			mytype->thearguments = args;
			mytype->buff = buffer;
			pattanal(mytype, args);
			evaluate(args, mytype, buffer);

			releasepointermem((void *) args);
		}
		releasememory((void *) buffer);
		releasememory((void *) env_path);
	}
}
