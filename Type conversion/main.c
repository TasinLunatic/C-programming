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

    return 0;
}
