#include <stdio.h>

int main() {

    int n;

    scanf_s("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum = sum + i;
    }
    printf("%d\n", sum);

    return 0;
}