#include "feranmi.h"
#include "bishop.h"

/**
 * fileorbin - checks if a string is file or binary
 *
 * @file: checker file
 *
 * Return: if file
 */

int fileorbin(char *file)
{
	int a;
	int b;

	b = _strlen(file);

	for (a = 0; a < b; a++)
	{
		if (file[b] == '/')
		{
			return (isexecutable(file));
		}
	}
	return (-10);
}
