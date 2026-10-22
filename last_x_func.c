#include "last_x_func.h"

int find_last_x(FILE *f, double x)
{
	double current = 0.;
	int current_index = 0;
	int last_match_index = 0;

	while (fscanf(f, "%lf", &current) == 1)
	{
		current_index++;
		if (fabs(current - x) < eps)
		{
			last_match_index = current_index;
		}
	}

	if (current_index == 0)
	{
		printf("File is empty\n");
		return 0;
	}

	return last_match_index;
}