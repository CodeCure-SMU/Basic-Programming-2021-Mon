#include <stdio.h>

int main (void) {
	int a,b,c;
	int arr[10] = {0, };
	
	scanf("%d %d %d", &a, &b, &c);
	
	int p = a*b*c;
	
	int num;
	while(p>0) {
		num = p%10;
		arr[num]++;
		p = p/10;
	}
	
	int i;
	for(i=0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}
