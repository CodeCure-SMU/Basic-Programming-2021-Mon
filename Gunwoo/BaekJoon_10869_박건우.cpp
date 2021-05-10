#include <stdio.h>
int main(void)
{
	int A, B;
	scanf_s("%d %d", &A, &B);
	1 <= A;
	A <= 10000;
	1 <= B;
	B <= 10000;
	printf("%d\n", A + B);
	printf("%d\n", A - B);
	printf("%d\n", A * B);
	printf("%d\n", A / B);
	printf("%d\n", A % B);

	return 0;


}
