/* baekjoon 10869번 사칙연산
#include <stdio.h>

int main(void)
{
	
	int a=0, b = 0;

	printf("A와 B를 입력하세요 : ");
	scanf_s("%d %d", &a, &b);

	printf("%d + %d = %d\n",a,b,a+b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);
	printf("%d %% %d = %d\n", a, b, a % b);
}
*/

/* baekjoon 1330번 두 수 비교하기
#include <stdio.h>

int main(void)
{
	int a = 0, b = 0;

	printf("A와 B를 입력하세요 : ");
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

	printf("연도를 입력하세요 : ");
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