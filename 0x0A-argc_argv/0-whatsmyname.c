#include <stdio.h>

/**
* main -  print its name
*
*@argc: - print name
*
*@argv: - print name
*
* Return: succes
*/

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
