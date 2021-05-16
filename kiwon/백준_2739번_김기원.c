#include <stdio.h>

int main() {

    int n;

    printf("구구단을 구할 숫자를 입력하세요: ");
    scanf_s("%d", &n);

    for (int i = 1; i < 10; ++i) {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    return 0;
}