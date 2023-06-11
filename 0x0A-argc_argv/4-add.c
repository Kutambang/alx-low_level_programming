#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - entry point
* @argc: number of command line args
* @argv: an array of command line args
* Return: 0 (Success)
*/
int main(int argc, char *argv[])
{
int i, sum = 0;
for (i = 1; i < argc; i++)
{
char *str;
long num = strtol(argv[i], &str, 10);
/* string part found */
if (*str)
{
printf("Error\n");
return (1);
}
if (num > 0)
sum += num;
}
printf("%d\n", sum);
return (0);
}
