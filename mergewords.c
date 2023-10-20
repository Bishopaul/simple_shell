#include "bishop.h"
#include "feranmi.h"

/**
 * mergewords - Merge words
 *
 * @word1: first word
 * @word2: second word
 * @word3: third word
 *
 * @deli: delimeter
 *
 * Return: string
 */

char *mergewords(char *word1, char *word2, char *word3, const char *deli)
{
	int s1 = 0, s2 = 0, s3 = 0, delimsize = 0;
	char *merge;

	if (word1 != NULL)
		s1 = _strlen(word1);
	else
		word1 = "";

	if (word2 != NULL)
		s2 = _strlen(word1);
	else
		word2 = "";

	if (word3 != NULL)
		s3 = _strlen(word1);
	else
		word3 = "";

	if (deli != NULL)
		delimsize = _strlen((char *)deli);
	else
		deli = "";

	merge = malloc(s1 + delimsize + s2 + delimsize + s3 + 2);
	if (merge == NULL)
		return (NULL);

	merge = strptr(merge, word1);
	merge = str_cat(merge, ((char *)deli));
	merge = str_cat(merge, word2);
	merge = str_cat(merge, ((char *)deli));
	merge = str_cat(merge, word3);
	merge = str_cat(merge, "\n");

	return (merge);
}
