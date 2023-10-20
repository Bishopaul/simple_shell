#include "bishop.h"
#include "feranmi.h"

/**
 * sighand - a function to handle SIGINT
 *
 * @p: a parameter
 *
 * Return: void
 */

void sighand(int p)
{
	(void) p;

	signal(SIGINT, sighand);
	print("\n$ ");
	fflush(stdout);
}
