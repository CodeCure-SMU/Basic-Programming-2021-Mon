#include <stdio.h>

int main(void) {
	int t;

	scanf("%d", &t);

	int a, b;
	
	for (int i = 1; i <= t; i++) {
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d + %d = %d\n", i, a, b, a + b);
	}
	
	return 0;
}