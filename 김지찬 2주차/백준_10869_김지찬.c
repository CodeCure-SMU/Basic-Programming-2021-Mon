#include <stdio.h>
int main()
{
	int A, B;
	scanf_s("%d%d", &A, &B);
	//A�� B�� �ڿ���
	printf("%d\n ", A + B);
	printf("%d\n ", A - B);
	printf("%d\n ", A * B);
	printf("%d\n ", A / B);
	printf("%d\n ", A % B);
	return 0;
}