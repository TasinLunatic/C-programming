#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

int main()
{

    int x=3,y=9;

    int comp=(x<y);
    printf("comp=%d\n",comp);

    if(comp){
        printf("comp is true\n");
    }
    else{
        printf("comp is false\n");
    }
    int i=10,j=4;

    if(i>=j){
        printf("i>=j\n");
    }

    int p=2,q=3;

    if(p<=q){
        printf("p<=q\n");
    }

    int a=3,b=4;
    bool condition=a>b;
    printf("%d\n",condition);

    if(condition){
        printf("true");
    }
    else{
        printf("false");
    }

    return 0;
}
