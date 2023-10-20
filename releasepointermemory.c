#include "bishop.h"
#include "feranmi.h"

/**
 * releasepointermem - function that frees a double pointer
 *
 * @point: double pointer to be freed
 *
 * Return: void
 */

void releasepointermem(void *point)
{
	void **tmp;

	for (tmp = point; *tmp != NULL; tmp++)
	{
		releasememory(*tmp);
	}
	releasememory(point);
}
