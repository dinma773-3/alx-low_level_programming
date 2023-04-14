#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: The first string to concatenate
 * @s2: The second string to concatenate
 * @n: The number of bytes to concatenate from s2 to s1
 *
 * return a pointer to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
  char *c_s;
  int s1_leng, s2_leng, i, j;

  if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	for (s1_leng = 0; s1[s1_leng] != '\0'; s1_leng++)
	  ;

	for (s2_leng = 0; s2[s2_leng] != '\0'; s2_leng++)
	  ;

	if (n >= s2_leng)
		n = s2_leng;

	c_s = malloc(sizeof(char) * (s1_leng + n + 1));

	if (c_s == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		c_s[i] = s1[i];

	for (j = 0; j < n; j++)
		c_s[i + j] = s2[j];
	c_s[i + j] = '\0';

	return (c_s);
}
