#include "feranmi.h"
#include "bishop.h"

/**
 * repvalue - Function that helps with replacing a pattern value
 *
 * @mytype: struct
 * @id: takes care of position
 * @str: string
 *
 * Return: a pointer
**/

char *repvalue(feranmi_t *mytype, int *id, char *str)
{
	char *param;
	int j, old_str, new_str;

	j = *id;
	j++;

	param = replacee(mytype, id, str + j);
	if (param == NULL)
	{
		str = strptr(str, "");

		return (str);
		;
	}

	old_str = _strlen(str);
	new_str = _strlen(param) + 1;
	str = realloc_(str, old_str, new_str);
	str = strptr(str, param);

	releasememory(param);
	*id = j;

	return (str);
}
