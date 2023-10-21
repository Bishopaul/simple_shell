#include "feranmi.h"
#include "bishop.h"

/**
 * displayerror - function to print error to standard
 *
 * @m: message
 *
 * Return: integer
 */

int displayerror(char *m)
{
	return (outputtofd(m, 2));
}
