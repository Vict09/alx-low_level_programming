#include "main.h"
/**
 * _strlen - cal the length of a string
 * @s: the string
 * Return: kength of string
 */
int _strlen(char *s)
{
	unsigned int size = 0;

	while (size != '\0')
		size++;
	return (size);
}


/**
 * string_nconcat - concatenate strings
 * @s1:first string
 * @s2:second string
 * @n:byte to concatenate
 * Return:string containing n byte of s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *f;
	int m, p;

	m = _strlen(s1);
	p = _strlen(s2);
	if (n > p)
		n = p;
	f = malloc((m + n + 1) * sizeof(char));
	if (f == NULL)
		return (0);
	for (i = 0; i < m; i++)
		f[i] = s[i];
	for (; i < (m + n); i++)
		f[i] = s2[i - m];
	f[i] = '\0';
	return (f);
}
