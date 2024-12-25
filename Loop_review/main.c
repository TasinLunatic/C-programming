#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* int n=10;

     for(int i=0;i<10;i++){
         if(i%2==0){
            printf("%d is even\n",i);
        }
        else{
            printf("%d is odd\n",i);
        }
     }*/

     int height,width;
     scanf("%d %d",&height,&width);

     for (int i=0;i<=width;i++){
        printf("*");
     }
     printf("\n");

     for(int i=0;i<height-2;i++){
        printf("*");
        for(int j=0;j<width-2;j++ ){
            printf(" ");
        }
        printf("*");
        printf("\n");
     }
     for(int i=0;i<=width;i++){
        printf("*");
     }


    return 0;
}
