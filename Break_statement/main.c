#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

int main()
{
    while(true){
        int input;
        scanf("%d ",&input);


        if(input!=0 && input!=1){
            printf("Invalid\n");
            break;
        }
    }
    return 0;
}
