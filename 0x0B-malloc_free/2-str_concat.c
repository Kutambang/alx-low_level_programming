#include <stdlib.h>
/**
* str_concat - Concatenates two strings.
* @s1: The first string.
* @s2: The second string.
*
* Return: A pointer to the concatenated string,
*         or NULL on failure.
*/
char *str_concat(char *s1, char *s2)
{
char *concatenated;
int s1_length = 0;
int s2_length = 0;
int i, j;
/* Handle NULL strings as empty strings */
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
/* Calculate the lengths of the input strings */
while (s1[s1_length] != '\0')
s1_length++;
while (s2[s2_length] != '\0')
s2_length++;
/* Allocate memory for the concatenated string */
concatenated = malloc((s1_length + s2_length + 1) * sizeof(char));
if (concatenated == NULL)
return (NULL);
/* Copy the contents of s1 to the concatenated string */
for (i = 0; i < s1_length; i++)
concatenated[i] = s1[i];
/* Copy the contents of s2 to the concatenated string */
for (j = 0; j < s2_length; j++)
concatenated[i + j] = s2[j];
/* Null-terminate the concatenated string */
concatenated[i + j] = '\0';
return (concatenated);
}
