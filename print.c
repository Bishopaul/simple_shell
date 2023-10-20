#include "bishop.h"
#include "feranmi.h"

/**
 * print - print to standard output
 *
 * @m: message to print out
 *
 * Return: void
 */

int print(char *m)
{
	return (outputToFD(m, 1));
}
