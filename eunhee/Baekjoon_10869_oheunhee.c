#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main() {

	int A, B;

	printf("자연수 A를 입력하세요. ");
	scanf("%d", &A);
	printf("자연수 B를 입력하세요. ");
	scanf("%d", &B);

	printf("%d \n", A + B);
	printf("%d \n", A - B);
	printf("%d \n", A * B);
	printf("%d \n", A / B);
	printf("%d", A % B);

	return 0;

}