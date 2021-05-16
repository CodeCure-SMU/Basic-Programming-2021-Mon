#include <stdio.h>

int main() {
	int cnt, i, a, b;
	scanf_s("%d", &cnt);
	for (i = 0; i < cnt; i++) 
	{
		scanf_s("%d %d", &a, &b);
		printf("Case #%d: %d + %d = %d\n", i + 1, a, b, a + b);
	}
	return 0;
}