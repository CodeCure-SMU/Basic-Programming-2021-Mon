#include <stdio.h>

int main(void) {
	int i, j, n;
	printf("정수를 입력해주세요 :");
	scanf_s("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n - i; j++) {
			printf(" ");
		}
		for (j = 0; j < i*2+1 ; j++) {
			printf("*");
		}
		printf("\n");
	}
}