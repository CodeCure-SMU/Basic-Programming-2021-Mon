#include <stdio.h>
int score;
void game(char str[], int index){
    if(str[index] == 'O'){
        score++;
        game(str, ++index);
    }
}

int main(void)
{
    int a,i;
    scanf("%d", &a);
    for(i = 0; i < a; i++){
    score = 0;
    char str[80];
    scanf("%s", str);
    int i = 0;
    while(str[i]){
        game(str, i);
        i++;
    }
    printf("%d\n", score);
    }
    return 0;
}
