#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �ִ���  �غý��ϴ� ��...

main() {

	int A, B, C;
	int mul, len, num;
	int i,j ;
	char data[1000] = { 0, }; // mul �� ���ڿ��� ����
	char result[1000] = { 0, };
	// �ε��� 0�� 0 ����, �ε��� 1�� 1 ���� ... ����

	printf("�ڿ��� �� �� ����  ex) 1 2 3 : ");
	scanf("%d %d %d", &A, &B, &C);

	mul = A * B * C;

	ltoa(mul, data, 10); // ���ڿ��� ��ȯ

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