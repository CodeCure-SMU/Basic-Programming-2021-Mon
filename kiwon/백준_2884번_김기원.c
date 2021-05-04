#include <stdio.h>

int main()
{
	int H = 0, M = 0;
	0 <= H;
	H <= 23;
	0 <= M;
	M <= 59;

	printf("현재 상근이가 설정해 놓은 알람시간 시 분 입력(공백을 이용하여 구분해서 입력하시오): ");
	scanf_s("%d %d", &H, &M);

	if (H == 0) 
	{
		if (M < 45)
		{
			H = 23; M = M + 60 - 45;
			printf("%d %d", H, M);
		}
		else if (M >= 45)
		{
			M = M - 45;
			printf("%d %d", H, M);
		}
	}
	else if (H > 0) 
	{
		if (M < 45)
		{
			H = H - 1; M = M + 60 - 45;
			printf("%d %d", H, M);
		}
		else if (M >= 45)
		{
			M = M - 45;
			printf("%d %d", H, M);
		}
	}
}