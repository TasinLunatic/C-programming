#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    scanf("%d %d",&num1,&num2);

    int Total_Addition = num1 + num2;
    printf("%d+%d =%d", num1,num2, Total_Addition);

     int num3, num4;
    scanf("%d %d",&num3,&num4);

    int Total_Substraction = num3 - num4;
    printf("%d-%d =%d", num3,num4, Total_Substraction);

     int num5, num6;
    scanf("%d %d",&num5,&num6);

    int Multiplication = num5 * num6;
    printf("%d*%d =%d\n", num5,num6, Multiplication);



    int Division = num5 / num6;
    printf("%d/%d =%d\n", num5,num6,Division);

     float Division2 = num5 / num6;
    printf("%f/%f =%f\n", num5,num6, Division2);

     int Percentage = num5 % num6;
    printf("%d %% %d =%d", num5,num6, Percentage);



    return 0;
}
