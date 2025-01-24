#include <stdio.h>
#include <stdlib.h>

int main()
{
   int mark[10];

   for(int i=0;i<10;i++){
    printf("Student %d mark:",i);
    scanf("%d" ,&mark[i]);
   }
   for(int i=0;i<10;i++){
    printf("student %d got %d marks\n",i+1,mark[i]);

   }
    return 0;
}
