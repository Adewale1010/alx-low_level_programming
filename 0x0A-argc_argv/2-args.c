#include <stdio.h>

/**
 * main - Prints all arguments it receives.
 * @argc: number of command line arguments.
 * @argv: array that contains the program commmand line arguments.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
