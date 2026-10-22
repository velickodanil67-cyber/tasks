#include "avg_func.h"

int main(void)
{
	FILE *f = fopen("input_data.txt", "r");
	if (f == NULL)
	{
		printf("File error\n");
		return -1;
	}
	else
	{
		double result = average_sequence(f);
		printf("Answer: %lf\n", result);
		fclose(f);
		return 0;
	}
}