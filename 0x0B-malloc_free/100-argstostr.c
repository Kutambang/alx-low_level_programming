#include <stdlib.h>
/**
* argstostr - Concatenates all the arguments of the program.
* @ac: The argument count.
* @av: An array of strings containing the arguments.
*
* Return: A pointer to the new string, or NULL if it fails.
*/
char *argstostr(int ac, char **av)
{
int i, j, k, len;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
len = 0;
for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j] != '\0')
{
len++;
j++;
}
len++; /* Account for the newline character */
}
str = malloc(sizeof(char) * (len + 1));
if (str == NULL)
return (NULL);
k = 0;
for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j] != '\0')
{
str[k++] = av[i][j++];
}
str[k++] = '\n'; /* Add newline character */
}
str[k] = '\0'; /* Add null terminator */
return (str);
}
