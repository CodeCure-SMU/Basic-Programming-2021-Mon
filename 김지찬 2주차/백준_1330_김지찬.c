#include  <stdio.h>

int main() 
{
    int A, B;
    printf("A�� �Է��Ͻÿ�.");
    scanf_s("%d", &A);
    printf("B�� �Է��Ͻÿ�.");
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