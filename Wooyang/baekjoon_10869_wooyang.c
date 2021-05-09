#include <stdio.h>

int main (void)
{
	int A,B;
	printf("");
	scanf("%d %d", &A, &B);
	if(A<B)
		printf("<", A < B);
	else if(A>B)
		printf(">", A > B);
	else
		printf("==", A == B);
	return 0;
}
