#include "feranmi.h"
#include "bishop.h"

/**
 * numstr - Function that converts digits to string
 *
 * @num: number to be converted
 *
 * Return: Number converted to the string
 */

char *numstr(int num)
{
	char *str;
	int dig;
	int a;

	dig = numb(num);
	str = malloc(dig * sizeof(char) + 1);
	if (str == NULL)
		return (NULL);
	if (num == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	str[dig] = '\0';

	for (a = dig - 1; num != 0; num /= 10, a--)
	{
		str[a] = (num % 10) + '0';
	}
	return (str);
}
