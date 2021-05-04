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

	printf("몇 사분면인지 판별할 숫자를 입력하시오: ");
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