#include  <stdio.h>

int main() 
{
    int A, B;
    printf("A를 입력하시오.");
    scanf_s("%d", &A);
    printf("B를 입력하시오.");
    scanf_s("%d", &B);

    if (A > B) {
        printf(">");
    }
    else  if (A < B) {
        printf("<");
    }
    else {
        printf("=");
    }

    return 0;
}