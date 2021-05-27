#include <stdio.h>
#include <string.h>

char OX[80];

int main()
{
    int King, score, sum;

    scanf_s("%d", &King);
    for (int i = 0; i < King; i++)
    {
        sum = 0;
        score = 1;
        scanf_s("%s", &OX, sizeof(OX));
        for (int j = 0; j < strlen(OX); j++)
        {
            if (OX[j] == 'O')
            {
                sum += score;
                score++;
            }
            if (OX[j] == 'X')
                score = 1;
        }
        printf("%d\n", sum);
    }
}