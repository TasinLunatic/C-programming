#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int money=0;
    int target =100;

    while(money<target){
        printf("Need more money.Enter amount:");
        int given;
        scanf("%d",&given);
        money+=given;
        printf("Current money= %d\n",money);

    }*/
    int x;
    scanf("%d",&x);     //digit:3 x:012

    int reverse=0;
    while(x>0){
            int digit =x%10;
            x/=10;
           reverse=reverse*10+digit;  //sum+=digit;
            //printf("Digit:%d, x:%d\n",digit,x);//

    }
    printf("reverse:%d",reverse);  //sum
    return 0;
}

//12345  ----> 54321 (question)
