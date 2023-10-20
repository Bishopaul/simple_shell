#include "feranmi.h"
#include "bishop.h"

/**
 * pattanal - function that collects and analyses patterns
 *
 * @mytype: struct
 * @ar: argument to be analysed
 *
 * Return: void
 */

void pattanal(feranmi_t *mytype, char **ar)
{
	int a;

	for (a = 0; ar[a] != NULL; a++)
	{
		ar[a] = handlepattern(mytype, ar[a]);
	}
}
