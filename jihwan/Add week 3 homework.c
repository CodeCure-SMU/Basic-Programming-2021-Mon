/* bakejoon 2739
#include <stdio.h>
int main(void) 
{
	int a = 0, i = 0;

	printf("1부터 9사이의 값 입력: ");
	scanf_s("%d", &a);

	for (i = 1; i <= 9; i++)
		printf("%d * %d = %d\n", a, i, a * i);
}
*/
/* bakejoon 2438
#include <stdio.h>
int main(void)
{
	int a = 0, i = 0, j = 0;

	printf("정수 입력 : ");
	scanf_s("%d", &a);

	for (i = 1; i <= a; i++)
	{
		for (j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}
}
*/
// bakejoon 10952
#include <stdio.h>
int main(void)
{
	int a = 0, b = 0, i = 0;

	while(1)
	{
		printf("정수 2개 입력 : ");
		scanf_s("%d %d", &a, &b);
		getchar();

		if (a == 0 && b == 0)
			break;

		printf("%d\n", a + b);
	}
}
