#include <stdio.h>

int main() {

    int n;

    printf("1���� N���� ���: ");
    scanf_s("%d", &n);
    for (int i = 1; i <= n; ++i) 
    {
        printf("%d\n", i);
    }
    return 0;
}