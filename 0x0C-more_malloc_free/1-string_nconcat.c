#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates n bytes of one string to another string
 * @s1: String to append to.
 * @s2: String to concatenate from.
 * @n: the amount of bits from s2 should be appended to s1.
 * Return: Pointer to the resulting string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0, len2 = 0;
unsigned int concatLen, i, j;
char *s;

while (s1 && s1[len1])
len1++;

while (s2 && s2[len2])
len2++;

concatLen = (n < len2) ? (len1 + n) : (len1 + len2);
s = malloc(sizeof(char) * (concatLen + 1));

if (!s)
return (NULL);

for (i = 0; i < len1; i++)
s[i] = s1[i];

j = 0;
while (n < len2 && i < concatLen)
s[i++] = s2[j++];

while (n >= len2 && i < concatLen)
s[i++] = s2[j++];

s[i] = '\0';

return (s);
}
