#include "last_x_func.h"

int main(void)
{
	double x = 0.;
	FILE *f = fopen("input_data.txt", "r");
	if (f == NULL)
	{
		printf("File error\n");
		return -1;
	}

	printf("Enter number X: ");
	if (scanf("%lf", &x) != 1)
	{
		printf("Input error\n");
		fclose(f);
		return -2;
	}

	int result = find_last_x(f, x);
	if (result == 0)
	{
		printf("Number X was not found in sequence\n");
	}
	else
	{
		printf("Answer (last position of X): %d\n", result);
	}

	fclose(f);
	return 0;
}