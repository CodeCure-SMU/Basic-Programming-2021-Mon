#include "pch.h"
#include <stdio.h>

int main()
{
	int num[9], count = 0, max, i;

	for (i = 1; i < 10; i++)
	{
		scanf_s("%d", &num[i]);
	}
	max = num[0];

	for (i = 1; i < 10; i++)
	{
		if (num[i + 1] > max)
		{
			count = i + 1;
			max = num[i + 1];
		}
	}
	printf("%d\n%d", max, count);

	return 0;

}