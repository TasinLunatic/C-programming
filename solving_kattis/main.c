#include <stdio.h>
#include <stdlib.h>

int main()
{
    int limit,months;
    scanf(" %d %d",&limit,&months);

    int baki=0;
    for(int m=1;m<=months;m++){
        int used;
        scanf("%d",&used);

        int month_limit=limit+baki;
        baki=month_limit-used;

        printf("limit=%d , used=%d, baki=%d\n",month_limit,used,baki);
    }
    int final_limit=limit+baki;
    printf("%d\n",final_limit);
}
