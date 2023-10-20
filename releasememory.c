#include "bishop.h"
#include "feranmi.h"

/**
 * releasememory - function that frees a pointer
 *
 * @point: pointer to be freed
 *
 * Return: void
 */

void releasememory(void *point)
{
	if (point != NULL)
	{
		free(point);
		point = NULL;
	}
	point = NULL;
}
