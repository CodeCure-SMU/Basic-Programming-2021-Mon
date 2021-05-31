#include<stdio.h>
typedef struct sarr {
    char arr[80];
    int score;
}SARR;

int main(void) {
    int n;
    SARR sar[100];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", &sar[i].arr);
    }

    for (int i = 0; i < n; i++) {
        sar[i].score = 0;
        int count = 0;
        for (int j = 0; j < strlen(sar[i].arr); j++) {
            if (sar[i].arr[j] == 'O' || sar[i].arr[j] == 'o') {
                count++;
                sar[i].score += count;
            }
            else
                count = 0;
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d \n", sar[i].score);
    }
}
