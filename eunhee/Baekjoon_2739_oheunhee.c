#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main() {

	int num = 0;
	int i;

	printf("구구단 N단, N: ");
	scanf("%d", &num);

	for (i = 1; i < 10; i++) {
		printf("%d * %d = %d\n", num, i, num * i);
	}

	return 0;
}