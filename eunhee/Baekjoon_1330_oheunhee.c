#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main() {

	int A, B;

	printf("�ڿ��� A�� �Է��ϼ���. ");
	scanf("%d", &A);
	printf("�ڿ��� B�� �Է��ϼ���. ");
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