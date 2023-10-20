#include "feranmi.h"
#include "bishop.h"

/**
 * realloc_ - Reallocates memory from an old pointer to a new one
 *
 * @point: pointer allocated to the old memory
 * @old: size of the old pointer memory
 * @new: size of the new pointer memory
 *
 * Return: A void
 */

void *realloc_(void *point, size_t old, size_t new)
{
	char *a;
	size_t b, maximum = new;
	char *olpoint = point;

	if (point == NULL)
	{
		a = malloc(new);
		return (a);
	}
	else if (new == 0)
	{
		free(point);
		return (NULL);
	}
	else if (new == old)
	{
		return (point);
	}

	a = malloc(new);
	if (a == NULL)
	{
		return (NULL);
	}
	if (new > old)
	{
		maximum = old;
	}

	for (b = 0; b < maximum; b++)
	{
		a[b] = olpoint[b];
	}
	free(point);

	return (a);
}
