#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* count_words - Counts the number of words in a string.
* @str: The input string.
*
* Return: The number of words.
*/
int count_words(char *str)
{
int count = 0;
int is_word = 0;
while (*str)
{
if (*str != ' ')
{
if (!is_word)
{
is_word = 1;
count++;
}
}
else
{
is_word = 0;
}
str++;
}
return count;
}
/**
* strtow - Splits a string into words.
* @str: The input string.
*
* Return: A pointer to an array of strings (words), or NULL if it fails.
*/
char **strtow(char *str)
{
char **words;
int i, j, k;
int word_count = 0;
int word_length = 0;
int len = strlen(str);
if (str == NULL || *str == '\0')
return NULL;
word_count = count_words(str);
words = malloc((word_count + 1) * sizeof(char *));
if (words == NULL)
return NULL;
i = 0;
j = 0;
while (i < len)
{
if (str[i] != ' ')
{
word_length = 0;
k = i;
while (str[k] != ' ' && str[k] != '\0')
{
word_length++;
k++;
}
words[j] = malloc((word_length + 1) * sizeof(char));
if (words[j] == NULL)
{
for (i = 0; i < j; i++)
free(words[i]);
free(words);
return NULL;
}
for (k = 0; k < word_length; k++)
words[j][k] = str[i++];
words[j][k] = '\0';
j++;
}
else
{
i++;
}
}
words[j] = NULL;
return words;
}
/**
* print_words - Prints the words in an array of strings.
* @words: The array of strings.
*/
void print_words(char **words)
{
int i = 0;
while (words[i] != NULL)
{
printf("%s\n", words[i]);
i++;
}
}
/**
* free_words - Frees the memory allocated for the words.
* @words: The array of strings.
*/
void free_words(char **words)
{
int i = 0;
while (words[i] != NULL)
{
free(words[i]);
i++;
}
free(words);
}
int main(void)
{
char **words = NULL;
char str[] = "Hello, how are you doing today?";
words = strtow(str);
if (words == NULL)
{
printf("Failed to split the string into words.\n");
return 1;
}
print_words(words);
free_words(words);
return 0;
}
