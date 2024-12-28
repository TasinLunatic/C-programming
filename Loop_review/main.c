#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* int number;
    scanf("%d",&number);


   if(number %2==0){
        printf("number is even.");
    }
    else{
        printf("number is odd.");
    }
    if(number>0){
        printf("1");
    }
    else if(number ==0){
        printf("0");
    }
    else{
        printf("-1");
    }
    int a=20,b=10;

    int max_ab=a>b? a:b;

    /* if ( a>b){
       max_ab =a;
     }
     else{
        max_ab =b;
     }
     printf("%d",max_ab);*/

     int A,B,C;
     scanf("%d %d %d",&A,&B,&C);

     int water_left=A-B;

     if(water_left>=C){
        printf("0");
     }
     else{
         C-=water_left;
         printf("%d",C);
     }

    return 0;
}


///find min and maximum
