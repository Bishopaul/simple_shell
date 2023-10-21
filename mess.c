#include "bishop.h"
#include "feranmi.h"

/**
 * selectmessage - errorcode checker
 *
 * @mytype: a struct
 *
 * Return: char
 **/

char *selectessage(feranmi_t mytype)
i{
	int a;
	int c;

	issue_t msgs[] = {
		{_ENOENT_, 3},
		{_EACCES_, 13},
		{_CMD_NOT_EXISTS_, 132},
		{_ILLEGAL_NUMBER_, 133}
	};

	c = sizeof(msgs) / sizeof(msgs[0]);
	for (a = 0; a < c; a++)
		if (mytype.error_digit == msgs[a].password)
			return (msgs[a].msg);

	return ("");
}
