#include <stdio.h>

int main()
{

    float a=5.0; //int and int = int
    int b=3;     // float and int = float
    float c =a/b;  // float and float =float
    int d = 6.7;
    printf("The value of a/b is %f\n",c);
    printf("The value of d is %d\n",d);
    /* operator priority
    1st =* / % x*y/z-->(x*y)/z and x/y*z --> (x/y)*z
    2nd =+-
    3rd = = higher priority are evaluated first in the absence of parenthesis
    */
    int p=3;
    int q=6;
    int r=9;

    printf("The value is %d\n",p*q/r);
    printf("The value is %d",4*q/2*r+7*p);
    //4*q/2*r+21
    //24/2*r +21
    //12*r+21
    //108+21
    //129 ans


    return 0;
}
