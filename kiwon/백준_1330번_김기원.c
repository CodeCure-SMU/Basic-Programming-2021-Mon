#include <stdio.h>

int main()
{
	int a, b;
	-10000 <= a;
	a <= 10000;
	-10000 <= b;
	a <= 10000;

	printf("���� �� ������ �Է��Ͻÿ�.(������ �̿��Ͽ� �Է��ϼ���): ");
	scanf_s("%d %d", &a, &b);

	if (a > b)
		printf(">");
	else if (a < b)
		printf("<");
	else
		printf("==");
}