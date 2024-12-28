#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum;
    for(int i=2,j=1;j<=10;i+=3,j++){
        sum+=i;
        printf("j=%d :Add new %d: sum= %d\n",j,i,sum);

    }
    printf("Sum:%d",sum);
    return 0;
}

//2+5+8+11+14+.....(1st 10 pod er jogfol)//
