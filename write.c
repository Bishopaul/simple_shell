#include "bishop.h"
#include "feranmi.h"

/**
 * writechar - Converts a char to standard
 *
 * @ch: Character to be converted
 *
 * Return: 1
 */

int writechar(char ch)
{
	return (write(1, &ch, 1));
}
