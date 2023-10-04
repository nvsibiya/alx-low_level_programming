#include "main.h"
#include <stdlib.h>

/**
 *create_array - array for prints a string
 *@size: number elements array
 *@c: char
 *Return: pointer
 */

char *create_array(unsigned int size, char c)
{
char *i;
unsigned int j;

if (size == 0)
{
return (NULL);
}

i = (char *) malloc(size * sizeof(c));

if (i == 0)
{
return (NULL);
}

else
{
j = 0;
while (j < size)
{
*(i + j) = c;
j++;
}

return (i);
}

}
