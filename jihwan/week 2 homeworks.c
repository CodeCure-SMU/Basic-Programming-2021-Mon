/* baekjoon 10869�� ��Ģ����
#include <stdio.h>

int main(void)
{
	
	int a=0, b = 0;

	printf("A�� B�� �Է��ϼ��� : ");
	scanf_s("%d %d", &a, &b);

	printf("%d + %d = %d\n",a,b,a+b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);
	printf("%d %% %d = %d\n", a, b, a % b);
}
*/

/* baekjoon 1330�� �� �� ���ϱ�
#include <stdio.h>

int main(void)
{
	int a = 0, b = 0;

	printf("A�� B�� �Է��ϼ��� : ");
	scanf_s("%d %d", &a, &b);

	if (a > b)
		printf(">");
	else if (b > a)
		printf("<");
	else
		printf("==");
}
*/
#include <stdio.h>

int main(void)
{
	int year = 0;

	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &year);

	if (year % 400 == 0)
		printf("1");
	
	else if (year % 100 == 0)
		printf("0");
	
	else if (year % 4 == 0)
		printf("1");
	
	else
		printf("0");
}