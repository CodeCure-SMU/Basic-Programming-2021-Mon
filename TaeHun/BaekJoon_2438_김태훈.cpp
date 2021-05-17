#include"pch.h"
#include<stdio.h>

int main()
{
	int num;
	scanf_s("%d", &num);

	for (int i = 1; i < num; i++)
	{
		for (int star = 1; star <= i; star++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}