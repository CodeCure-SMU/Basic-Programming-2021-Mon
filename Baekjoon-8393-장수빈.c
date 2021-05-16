#include <stdio.h>

int main(void)
{
	int n, cnt, hap = 0;

	scanf("%d", &n);

	for (cnt = 1; cnt <= n; cnt++)
	{
		hap += cnt;
	}
	printf("%d", hap);

	return 0;
}