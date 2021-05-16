#include <stdio.h>

int main (void)
{
	int a,b;
	scanf("%d", &a);
	
	int sum = 0;
	for(b=1; b<=a; ++b) {
		sum+= b;
	}
	printf("%d\n",sum);
	return 0;
}
