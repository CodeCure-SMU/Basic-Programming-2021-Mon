#include "pch.h"
#include <stdio.h>

int main()
{
	int a, N=0;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &N);

	for (a = 1; a <= 9; a++)
	{
		printf("%d*%d=%d\n", N, a, (a * N));
	}

}