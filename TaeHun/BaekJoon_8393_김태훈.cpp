#include "pch.h"
#include <stdio.h>

int main()
{
	int a = 0;
	int num, i;

	scanf_s("%d", &num);

	for (i = 1; i <= num; i++)
	{
		a += i;
	}

	printf("\n 1부터 %d까지의 합 : %d \n", num, a);
}