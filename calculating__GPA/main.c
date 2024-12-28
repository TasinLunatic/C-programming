#include <stdio.h>
#include <stdbool.h>

int main()
{
    int number_of_subjects;
    scanf("%d",&number_of_subjects);
    bool failed=false;

    int total_grade_point=0;

   for(int i=1;i<=number_of_subjects;i++){

        printf("Enter Marks:");

     int number,gradepoint;
    scanf("%d",&number);


    if (number>=80){
        printf("Grade=A+ \n");
        gradepoint=5.00;
    }
    else if(number>=70){
        printf("Grade=A \n");
         gradepoint=4.00;
    }
    else if(number>=60){
        printf("Grade=A- \n");
         gradepoint=3.50;
    }
    else if(number>=50){
        printf("Grade=B \n");
         gradepoint=3.00;
    }
    else if(number>=40){
        printf("Grade=C \n");
         gradepoint=3.50;
    }
    else{
        printf("Grade=F \n");
         gradepoint=0.00;
         failed=true;
    }

    total_grade_point +=gradepoint;

    printf("Gradepoint =%d\n",gradepoint);

   }
   if(failed){
    printf("You have failed. GPA:0.00");
   }
   else{
      double Total_GPA=(double) total_grade_point / number_of_subjects;
    printf("GPA= %lf",Total_GPA);

   }

    return 0;
}
