#include <stdio.h>

int main(void)
{
	int N, cnt, star;

	scanf("%d", &N);

	for (cnt = 1; cnt <= N; cnt++)
	{
		for (star = 1; star <= cnt; star++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;

}