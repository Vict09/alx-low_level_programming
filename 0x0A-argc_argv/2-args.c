#include <stdio>
#include "main.h"
/**
 * main - prints the name if the program
 * @argc: count argument
 * @argv: argument
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int count = 0;

	if (argc > 0)
	{
		while (coint < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
