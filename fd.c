#include "feranmi.h"
#include "bishop.h"

/**
 * outputtofd - function that prints string to file d
 *
 * @m: message
 * fd: file d
 *
 * Return: int on success
 */

int outputtofd(char *m, int fd)
{
	int buff;

	buff = _strlen(m);
	return (write(fd, m, buff));
}
