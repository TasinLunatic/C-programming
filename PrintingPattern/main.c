#include <stdio.h>
#include <stdlib.h>

int main()
{
     int n=7;
     int cur=1;

     for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",cur);
            cur++;
        }
        printf("\n");
     }

    return 0;
}
