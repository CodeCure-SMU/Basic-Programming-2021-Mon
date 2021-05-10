#include "pch.h"
#include <stdio.h>

int main()
{
	int A, B;
	printf("정수 A를 입력해주세요.");
	scanf_s("%d", &A);
	printf("정수 B를 입력해주세요.");
	scanf_s("%d", &B);

	printf("%d\n", A + B);
	printf("%d\n", A - B);
	printf("%d\n", A * B);
	printf("%d\n", A / B);
	printf("%d", A % B);
}