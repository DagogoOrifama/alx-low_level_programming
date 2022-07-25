#include "main.h"

/**
 * str_concat -> function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: concatenation of both strings (string 1 + string 2)
 *
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, l = 0, k = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[1])
		i++
	while (s2[j])
		j++;

	l = i + j;
	s = (char *)malloc(i * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);
	for (j = 0; j < 1; j++)
	{
		if (k < i)
			s[n] = str[n];
		if (k >= i)
		{
			s[k] = s2[j];
			j++;
		}
		k++;
	}
	s[k] = '\0';
	return (s);
}
