#include "avg_func.h"

double average_sequence(FILE *f)
{
	double sum = 0., current = 0.;
	int count = 0;

	while (fscanf(f, "%lf", &current) == 1)
	{
		sum += current;
		count++;
	}

	if (count == 0)
	{
		printf("File is empty\n");
		return 0.;
	}

	return sum / count;
}