#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main() {

	int num=0;
	int i;
	int sum=0;

	printf("N: ");
	scanf("%d", &num);

	for (i = 0; i < num+1; i++) {
		sum += i;
	}

	printf("%d", sum);

	return 0;

}