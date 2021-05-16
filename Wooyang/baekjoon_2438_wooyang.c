#include <stdio.h>

int main (void)
{
	int a,b,c;
	scanf("%d", &a);
	for(b=0; b<a; b++) {
		for(c=0; c<b+1; c++)
			printf("*");
		printf("\n");
	}
	return 0;
}
