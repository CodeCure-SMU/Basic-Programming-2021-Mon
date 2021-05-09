#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main() {

	int A, B;

	printf("자연수 A를 입력하세요. ");
	scanf("%d", &A);
	printf("자연수 B를 입력하세요. ");
	scanf("%d", &B);

	if (A > B) {
		printf(">");
	}
	else if (A == B) {
		printf("=");
	}

	else if (A < B) {
		printf("<");
	}

	return 0;


}