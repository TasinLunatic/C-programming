#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

int main()
{
    srand(time(0));

    int hidden=rand()%100+1;

    int number_of_guesses=0;

    while(number_of_guesses<=10){
        int guess;
        scanf("%d",&guess);

        if(guess ==hidden){
            printf("You are right %d\n",guess);
            break;
        }
        else if(guess>hidden){
                printf("Guess smaller");

        }
        else{
            printf("Guess larger");
        }
        number_of_guesses++;

    }
    if(number_of_guesses==10){
        printf(" You are failed");
    }
    return 0;
}
