#include <stdio.h>
int main()
{
	int A, B;
	scanf_s("%d%d", &A, &B);
	//A와 B는 자연수
	printf("%d\n ", A + B);
	printf("%d\n ", A - B);
	printf("%d\n ", A * B);
	printf("%d\n ", A / B);
	printf("%d\n ", A % B);
	return 0;
}