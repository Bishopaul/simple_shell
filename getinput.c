#include "feranmi.h"
#include "bishop.h"

/**
 * getinput - prompt to get input in simple shell program
 *
 * @mytype: gen info struct
 */

void getinput(feranmi_t *mytype)
{
	if (mytype->it_mode == 0)
	{
		return;
	}

	print("$ ");
}
