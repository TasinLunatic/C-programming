#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    scanf("%d %d %d",&x ,&y,&z);

    if(x==y && y==z){
        printf("No\n");
    }
    else if(x!=y && y!=z &&z!=x){
        printf("No\n");
    }
    else{
        printf("Yes");
    }
    return 0;
}
