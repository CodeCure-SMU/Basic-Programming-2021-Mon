#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int A, B;
    printf("A�� �Է��Ͻÿ�. ");
    scanf("%d", &A);
    printf("B�� �Է��Ͻÿ�. ");
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