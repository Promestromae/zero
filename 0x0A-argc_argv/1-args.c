#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it
 * @argc: number of arguments passed
 * @argv: array of pointers to the string
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
