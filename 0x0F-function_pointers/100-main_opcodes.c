#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: return 0 on success.
 */

int main(int argc, char *argv[])
{
	int x, i;
	char *p;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	x = atoi(argv[1]);

	if (x < 0)
	{
		printf("Error\n");
		exit(2);
	}

	p = (char *)main;

	for (i = 0; i < x; i++)
	{
		if (i == x - 1)
		{
			printf("%02hhx\n", p[i]);
			break;
		}
		printf("%02hhx ", p[i]);
	}
	return (0);
}
