/* bakejoon 2739
#include <stdio.h>
int main(void) 
{
	int a = 0, i = 0;

	printf("1���� 9������ �� �Է�: ");
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

	printf("���� �Է� : ");
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
		printf("���� 2�� �Է� : ");
		scanf_s("%d %d", &a, &b);
		getchar();

		if (a == 0 && b == 0)
			break;

		printf("%d\n", a + b);
	}
}
