#include <stdio.h>

int main(void)
{
	int var_1 = 1;
	int var_2;

	while (var_1 < 4)
	{
		var_2 = 1;
		while (var_2 < 5)
		{
		printf("%d", var_2);
		var_2++;
		}

		printf("\n", var_1);
		var_1++;
	}

	return (0);
}
