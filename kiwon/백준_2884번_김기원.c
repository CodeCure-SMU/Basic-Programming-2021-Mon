#include <stdio.h>

int main()
{
	int H = 0, M = 0;
	0 <= H;
	H <= 23;
	0 <= M;
	M <= 59;

	printf("���� ����̰� ������ ���� �˶��ð� �� �� �Է�(������ �̿��Ͽ� �����ؼ� �Է��Ͻÿ�): ");
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