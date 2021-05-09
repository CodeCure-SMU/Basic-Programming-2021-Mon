#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main() {

	int year;

	printf("연도를 입력해 주세요. : ");
	scanf("%d", &year);

	if (year % 4 == 0 && year % 100 != 0)
		printf("1");
	else if (year % 4 == 0 && year % 400 == 0)
		printf("1");
	else
		printf("0");

	return 0;
}