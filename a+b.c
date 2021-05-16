#include <stdio.h>

int main(void) {
	int n,d;

	printf("정수를 입력해주세요 :");
	scanf_s("%d%d", &n,&d);
	printf("%d", n+d);
}