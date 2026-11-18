#include <stdio.h>

/**
 * main - Entry point of the simple calculator
 *
 * Return: 0 on success
 */
int main(void)
{
	int choice;
	double a, b;

	printf("Simple Calculator\n");

	while (1)
	{
		printf("1) Add\n");
		printf("2) Subtract\n");
		printf("3) Multiply\n");
		printf("4) Divide\n");
		printf("0) Quit\n");
		printf("Choice: ");

		if (scanf("%d", &choice) != 1)
			break;

		if (choice == 0)
		{
			printf("Bye!\n");
			break;
		}

		if (choice < 1 || choice > 4)
		{
			printf("Invalid choice\n");
			continue;
		}

		printf("A: ");
		if (scanf("%lf", &a) != 1)
			break;
		printf("B: ");
		if (scanf("%lf", &b) != 1)
			break;

		if (choice == 1)
			printf("Result: %g\n", a + b);
		else if (choice == 2)
			printf("Result: %g\n", a - b);
		else if (choice == 3)
			printf("Result: %g\n", a * b);
		else if (b == 0)
			printf("Error: division by zero\n");
		else
			printf("Result: %g\n", a / b);
	}

	return (0);
}
