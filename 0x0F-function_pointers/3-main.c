#include "3-calc.h"

/**
 * main - Finds the result of an operation
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int (*op)(int, int);
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = get_op_func(argv[2]);

	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((op == op_div || op == op_mod) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", op(num1, num2));

	return (0);
}
