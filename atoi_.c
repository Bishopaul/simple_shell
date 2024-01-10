#include "feranmi.h"
#include "bishop.h"

/**
 * atoi_ - A function that converts strings to digits
 * @s: the string to be converted
 *
 * Return: The digit
 */

int atoi_(char *s)
{
	unsigned int t = 0;
	unsigned int z = 0;
	unsigned int a = 0;
	unsigned int b = 1;
	unsigned int c = 1;
	unsigned int d;

	while (*(s + t) != '\0')
	{
		if (z > 0 && (*(s + t) < '0' || *(s + t) > '9'))
			break;

		if (*(s + t) == '-')
			b *= -1;

		if ((*(s + t) >= '0') && (*(s + t) <= '9'))
		{
			if (z > 0)
				c *= 10;
			z++;
		}
		t++;
	}

	for (d = t - z; d < t; d++)
	{
		a = a + ((*(s + d) - 48) * c);
		c /= 10;
	}
	return (a * b);
}
