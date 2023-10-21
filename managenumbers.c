#include "feranmi.h"
#include "bishop.h"

/**
 * managenumbers - function to control exit
 *
 * @mytype: struct
 * @ar: Argument
 *
 * Return: 0 if negative, otherwise 1
 **/

int managenumbers(feranmi_t *mytype, char *ar)
{
	int t;

	t = atoi_(ar);

	if (t < 0 || letter(ar))
	{
		mytype->code_stat = 2;
		mytype->error_digit = 133;
		extraerror(mytype, ar);
		return (0);
	}

	if (t > 255)
	{
		mytype->code_stat = t % 256;
	}
	else
	{
		mytype->code_stat = t;
	}

	return (1);
}
