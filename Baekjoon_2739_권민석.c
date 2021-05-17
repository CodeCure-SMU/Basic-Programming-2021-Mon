#include <stdio.h>

int main(void)
{
	int N, cnt;

	scanf("%d", &N);

	for (cnt = 1; cnt <= 9; cnt++)
	{
		printf("%d * %d = %d\n", N, cnt, N * cnt);
	}

	return 0;
}