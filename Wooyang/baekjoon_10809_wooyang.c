#include <stdio.h>
#include <string.h>

int main() {
    char word[101];
    int alb[26];
    scanf("%s", word);
 
    int i, idx;
    for (i = 0; i < 26; i++) {
        alb[i] = 100;
    }
 
	for (i = 0; i < strlen(word); i++) {
        idx = word[i] - 'a';
        if (alb[idx] > i)
            alb[idx] = i;
    }

    for (i = 0; i < 26; i++) {
        if (alb[i] == 100) printf("-1");
        else printf("%d ", alb[i]);
    }
    printf("\n");
 
    return 0;
}
