#include <stdio.h>

int main()
{
	int a = 0;
	1 <= a;
	a <= 4000;
	
	printf("�������� �Ǵ��� �⵵�� �Է��ϼ���: ");
	scanf_s("%d", &a);

	if (a % 4 == 0 && (a % 100 != 0 || a % 400 == 0))
		printf("1");
	else
		printf("0");

}