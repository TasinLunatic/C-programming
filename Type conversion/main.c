#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number=10;
    double realnumber=number;

    printf("number=%d , realnumber=%lf\n",number,realnumber);

    double number1=10.14;

    printf("realnumber1=%lf\n",number1);
    printf("number1=%d\n",(int)number1);

    int num2,num3;
    num2=9;
    num3=2;

    double vagfol=(double)num2/(double)num3;
    printf("%d/%d=%lf\n",num2,num3,vagfol);

    /** write a program to find the perimeter and area of a circle
       The program will ask user for a radius and print the area and perimeter

       sample interaction:
       Enter a radius=1
       Perimeter=6.28
       Area=3.14
   **/


    printf("Enter radius:");
    double radius;
    scanf("%lf",&radius);

    const double PI=3.1416;

    double perimeter=2*PI*radius;

    printf("perimeter=%lf\n",perimeter);

    double area=PI*radius*radius; //after% we can add.any num to take how many digit takes after point //

    printf("Area=%lf\n",area);


    return 0;
}
