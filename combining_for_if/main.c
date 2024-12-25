#include <stdio.h>
#include <stdlib.h>

int main()
{
     int n=10;

     for(int i=0;i<10;i++){
        if(i%2==0){
            printf("%d is even\n",i);
        }
        else{
            printf("%d is odd\n",i);
        }
     }
    return 0;
}
