#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main() {

	int num1 = 0;
	int num2 = 0;

	do {

		printf("A: ");
		scanf("%d", &num1);

		printf("B: ");
		scanf("%d", &num2);

		printf("%d\n", num1 + num2);

		if (num1 == 0 && num2 == 0) {
			printf("%d", num1 + num2);
			break;
		}
	} while (1);
	return 0;
}
