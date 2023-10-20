#include "bishop.h"
#include "feranmi.h"

/**
 * main - Main program that runs a basic shell
 *
 * @ac: argument count
 * @av: arguments
 *
 * Return: 0 on success
 */

int main(int ac, char **av)
{
	int stat;
	feranmi_t *mytype;

	mytype = malloc(sizeof(feranmi_t));
	if (mytype == NULL)
	{
		perror(av[0]);
		exit(1);
	}

	mytype->pid = getpid();
	mytype->code_stat = 0;
	mytype->n_cmd = 0;
	mytype->argc = ac;
	mytype->argv = av;
	mytype->it_mode = isatty(0) == 1;
	beg(mytype);

	stat = mytype->code_stat;

	free(mytype);

	return (stat);
}
