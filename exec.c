#include "feranmi.h"
#include "bishop.h"

/**
 * isexec - function to check if a file is executable
 *
 * @n: name of file
 *
 * Return: 1 on success, otherwise -1
 */

int isexec(char *n)
{
	struct stat stats;

	if (stat(n, &stats) == 0)
	{
		if (stats.st_mode & X_OK)
			return (1);
		else
			return (-1);
	}
	return (-10);
}
