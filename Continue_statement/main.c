#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=0;i<=10;i++){
        if(i%3 ==0)               continue;
            printf("%d ----->",i);
        for(int j=0;j<=10;j++){
            printf("%d",i*j);
        }
        printf("\n");
    }
    return 0;
}
