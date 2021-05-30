#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main() {

	int i;
	int max;
	int count=0;
	int num[9];

	for (i = 1; i < 10; i++) {
		printf("숫자 9개 입력 (%d) : ", i);
		scanf("%d" , &num[i]);
	}

	max = num[0];
	
	for (i = 1; i < 10; i++) {
		if (num[i + 1] > max) {
			count = i + 1;
			max = num[i + 1];
		}
	}
	printf("%d\n%d", max, count);

	return 0;
}