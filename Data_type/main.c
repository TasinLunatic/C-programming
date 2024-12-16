#include <stdio.h>
#include <stdlib.h>

int main()
{
   int marks_English =88;
    int marks_Math = 92;

    int total_marks=marks_English + marks_Math;
    printf("total=%d\n",total_marks);


    int marks_Physics;
    int marks_Chemistry;

    printf("Enter marks in Physics:");
    scanf("%d",&marks_Physics);

    printf("Enter marks in Chemistry:");
    scanf("%d",&marks_Chemistry);

    int In_total_marks = marks_Physics + marks_Chemistry;
    printf("Total marks =%d\n",In_total_marks);

    int marks_Biology;
    int marks_ICT;

    printf("Enter marks in Biology and ICT: ");
    scanf("%d %d",&marks_Biology,&marks_ICT);

     int total_marks2 = marks_Biology + marks_ICT;
     printf("Total=%d\n", total_marks2);

     int Full_marks = marks_Biology + marks_Chemistry + marks_English + marks_Math + marks_Physics + marks_ICT;
     printf ("Overall=%d ",Full_marks);

    return 0;
}
