#include  <stdio.h>

int  main(void) 
{
    int Year;
    printf("������ �Է��Ͻÿ�.");
    scanf_s("%d", &Year);


    if (Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0) {
        printf("1");
    }
    else {
        printf("0");
    }

    return 0;
}