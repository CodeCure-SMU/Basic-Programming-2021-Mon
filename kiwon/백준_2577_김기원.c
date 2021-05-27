#include <stdio.h>

int main() {
	int i, a, j, total = 1;
	int arr[10];

	for (i = 0; i < 10; i++) {
		arr[i] = 0;
	}

	for (i = 0; i < 3; i++) {
		scanf_s("%d", &a);
		total *= a;
	}

	for (i = 0; total > 0; i++) {
		a = total % 10;
		arr[a] += 1;
		total = total / 10;
	}

	for (i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
}