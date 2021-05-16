#include <stdio.h>

int main() {

    int n, i, j;

    printf("º°Âï±â: ");
    scanf_s("%d", &n);

    for (i = 1; i <= n; ++i) 
    {
        for (j = 1; j <= n - i; ++j) 
        {
            printf(" ");
        }
        for (j = 1; j <= i; ++j) 
        {
            printf("*");
        }
        puts("");
    }
    return 0;
}