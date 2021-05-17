//week3 과제

//2739 구구단

#include <stdio.h>
int main(void)
{
    int  N, i;
    
    scanf("%d", &N);
    
    
    for(i=1; i>=1 && i<=9 ; i=i+1)
    {
        printf("%d * %d = %d\n", N, i, N*i);
    }

    
    return 0;
}

//2438 별 찍기

#include <stdio.h>
int main(void)

{
    
    int n, i, j;

    scanf("%d", &n);
    
    for(i=1; i<=n ; i++)
    {
        for(j=1 ; j<=i ; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
 
    
    return 0;
}


//10952

#include <stdio.h>
int main(void)
{
    int a, b, i ;
    
    
    for(i = 1 ; i>=0 ; i++)
    {
        scanf("%d %d",&a , &b );
    
        printf("%d", a+b);
        printf("\n");
        
    }

    return 0;
}

// 8393
#include <stdio.h>
int main(void)
{
    int n, sum=0;
    scanf("%d", &n);
    
    for (int i=1; i<= n; ++i)
    {
        sum += i;
    }
    printf("%d\n", sum);

    return 0;
}
