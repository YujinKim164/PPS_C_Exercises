#include <stdio.h>

int main()
{
	int ar[5][4] = { 0 };
	int sum = 0, k = 0, n = 0;
	for (int j = 0; j < 5; j++)
	{
		k = 0;
		for (int i = 0; i < 4; i++)
		{
			scanf("%d", &ar[j][i]);
			k += ar[j][i];
		}
		if (k > sum)
		{
			sum = k;
			n = j;
		}
	}
	printf("%d %d", n + 1, sum);

	return 0;
}