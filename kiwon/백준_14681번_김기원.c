#include <stdio.h>

int main()
{
	int x, y;
	-1000 <= x;
	x <= 1000;
	x != 0;
	-1000 <= y;
	y <= 1000;
	y != 0;

	printf("�� ��и����� �Ǻ��� ���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%d %d", &x, &y);

	if (x > 0 && y > 0)
		printf("1");
	else if (x < 0 && y > 0)
		printf("2");
	else if (x < 0 && y < 0)
		printf("3");
	else if (x > 0 && y < 0)
		printf("4");
}