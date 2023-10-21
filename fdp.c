#include "feranmi.h"
#include "bishop.h"

/**
 * writechartofd - function to write char to file d
 *
 * @c: character
 * @fd: file d
 *
 * Return: 1 on success
 */

int writechartofd(char c, int fd)
{
	return (write(fd, &c, 1));
}
