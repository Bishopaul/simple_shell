#include "bishop.h"
#include "feranmi.h"

/**
 * patharray - check a paths arrangement
 *
 * @path: checker path
 * @mytype: struct
 *
 * Return: void
 */

void patharray(char *path, feranmi_t *mytype)
{
	mytype->cur_path = 0;

	if (path == NULL)
		return;

	if (path[0] == ':')
		mytype->cur_path = 1;
}
