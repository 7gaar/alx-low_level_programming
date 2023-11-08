#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that performss simple operation
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Aloomie ❤️
 * Return: 0 SUCCESS
*/
int main(int argc, char **argv)
{
	int result, num1, num2;
	char *choice;


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	choice = argv[2];

	if (get_op_func(choice) == NULL || choice[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*choice == '/' && num2 == 0) || (*choice == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
		}
	result = get_op_func(choice)(num1, num2);
	printf("%d\n", result);
	return (0);
}
