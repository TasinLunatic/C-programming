#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);

    int fibonacci[n];
    fibonacci[0]=0;
    fibonacci[1]=1;

    for(int i=2;i<n;i++){
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    }
    for(int i=0;i<n;i++){
        printf("%d -> %d\n",i+1,fibonacci[i]);
    }
    return 0;
}

/**
Fibonacci[0]
0,1,1,2,3,5,8,13,21
*/
