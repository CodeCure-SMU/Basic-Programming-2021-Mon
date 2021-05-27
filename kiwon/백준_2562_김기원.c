#include <stdio.h>
int main() {
    int arr[9], L = 0, index;
    for (int i = 0; i < 9; i++)
    {
        scanf_s("%d", &arr[i]);
        if (arr[i] > L)
        {
            L = arr[i];
            index = i;
        }
    }
    printf("%d\n%d", L, index + 1);
}