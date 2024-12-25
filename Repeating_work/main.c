#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*for(int i=1, j=9; i<=j; i++,j--){
    printf("%d %d\n",i,j);
   }
   int n;
   scanf("%d",&n);

   int sum=0;

   for(int i=1; i<=n; i++){
    sum+=i;
    printf("i=%d , sum=%d\n",i,sum);
   }
   printf("Final sum=%d\n",sum);
   int n;
   scanf("%d",&n);

   printf("***************\n");

   for(int i=0;i<n-2;i++){
        printf("*             *\n");

   }
   printf("***************\n");*/

   int n;
   scanf("%d",&n);

   for(int i=n; i>=0; i--){
    printf("%d\n",i);
   }

}
/*for(starting code;continue condition;repeatation){
   statements;
}

starting code;
loop:
   continue condition;
       true:
        statement
        repeatation
       false:
         stop

***************
*             *
*             *
*             *
*             *
***************
*/
