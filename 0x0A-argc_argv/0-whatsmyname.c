#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: number of the arguments
 * @argv: array ofthe  arguments
 *
 * Return: Always 0 (Successful)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

