#include "main.h"

/**
 * string_nconcat - to concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: size
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pnt;
	unsigned int a = 0, b = 0, c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[a])
	{
		a++;
	}
	while (s2[b])
	{
		b++;
	}

	if (n >= b)
		n = b;

	pnt = malloc(sizeof(char) * (a + n + 1));

	if (pnt == NULL)
		return (NULL);
	for (c = 0; c < a; c++)
	{
		pnt[c] = s1[c];
	}
	for (; c < (a + n); c++)
	{
		pnt[c] = s2[c - a];
	}
	pnt[c] = '\0';
	return (pnt);
}
