#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int A, B;
    printf("A를 입력하시오. ");
    scanf("%d", &A);
    printf("B를 입력하시오. ");
    scanf("%d", &B);

    if (A > B) {
        printf("'>'");
    }
    else if (A < B) {
        printf("'<'");
    }
    else {
        printf("'='");
    }

    return 0;
}
