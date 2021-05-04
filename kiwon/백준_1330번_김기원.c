#include <stdio.h>

int main()
{
	int a, b;
	-10000 <= a;
	a <= 10000;
	-10000 <= b;
	a <= 10000;

	printf("비교할 두 정수를 입력하시오.(공백을 이용하여 입력하세요): ");
	scanf_s("%d %d", &a, &b);

	if (a > b)
		printf(">");
	else if (a < b)
		printf("<");
	else
		printf("==");
}