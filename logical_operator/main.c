#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

int main()
{
   /* int a;
    scanf("%d",&a);

    if(a>=0 && a<=10){
        printf("Okay");
    }
    else{
        printf("Not okay");
    }

    char ch;
    scanf("%c",&ch);

    if(ch=='a'|| ch=='e'||ch=='i'|| ch=='o'||ch=='u'){
        printf("Vowel");
    }
    else{
        printf("Consonant");
    }*/
    int year;
    scanf("%d",&year);
    bool is_leap_year =(year%4==0)&&(year%100 !=0 || year%400 ==0);

    if(is_leap_year){
        printf("Leap year");
    }
    else{
        printf("Not a leap year");
    }


    return 0;
}
