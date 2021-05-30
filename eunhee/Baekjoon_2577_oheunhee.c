#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 최대한  해봤습니다 ㅠ...

main() {

	int A, B, C;
	int mul, len, num;
	int i,j ;
	char data[1000] = { 0, }; // mul 값 문자열로 저장
	char result[1000] = { 0, };
	// 인덱스 0에 0 개수, 인덱스 1에 1 개수 ... 저장

	printf("자연수 세 개 선택  ex) 1 2 3 : ");
	scanf("%d %d %d", &A, &B, &C);

	mul = A * B * C;

	ltoa(mul, data, 10); // 문자열로 변환

	len = strlen(data);

	for (j = 0; j <= 9; j++) {
		for (i = 0; i < len; i++) {
			if (data[i] == j) {
				num += 1;
			}
		}
		result[i] = num;
		num = 0;
	}

	printf("%s\n", result[i]);

	return 0;
}