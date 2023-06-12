#include "main.h"
#include <stdlib.h>
/**
* _strdup - duplicates a string using dynamic memory allocation
* @str: the string to duplicate
* Return: pointer to the duplicated string, or
* NULL if str is NULL or if memory allocation fails
*/
char *_strdup(char *str)
{
char *dup;
unsigned int i, length;
if (str == NULL)
return (NULL);
length = 0;
while (str[length] != '\0')
length++;
dup = malloc((length + 1) * sizeof(char));
if (dup == NULL)
return (NULL);
for (i = 0; i <= length; i++)
dup[i] = str[i];
return (dup);
}
