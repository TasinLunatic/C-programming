#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    if(b!=0){
        if(a%b==0){
            printf("%d is divisible by %d\n",a,b);
        }
        else{
            printf("%d is not divisible by %d\n",a,b);
        }
    }
    else{
        printf("you can not divided by 0");
    }

    int x;
    scanf("%d",&a);

    if(x>0){
        printf("Positive");
    }
    else{
        if(x==0){
            printf("Zero");
        }
        else{
            printf("Negative");
        }
    }
    return 0;
}
