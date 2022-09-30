#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication of two numbers followed by a new line
 * @argc: number of arguments must be exactly two numbers
 * @argv: argument vector
 * Return: if the number receives two arguments 0, otherwise 1
 */

int main(int argc, char *argv[])
{
	int res1, res2;

	res1 = res2 = 0;
	if (argc == 3)
	{
		res1 = atoi(argv[1]);
		res2 = atoi(argv[2]);
		printf("%d\n", res1 * res2);
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
