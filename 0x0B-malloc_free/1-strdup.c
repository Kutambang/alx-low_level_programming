#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* _strdup - duplicates a string
* @str: the string to duplicate
*
* Return: pointer to the newly duplicated string, or NULL on failure
*/
char *_strdup(char *str)
{
char *dup;
unsigned int len, i;
if (str == NULL)
return (NULL);
len = strlen(str);
dup = malloc((len + 1) * sizeof(char));
if (dup == NULL)
return (NULL);
for (i = 0; i < len; i++)
dup[i] = str[i];
dup[i] = '\0';
return (dup);
}
