#include <stdio.h>
#include <stdlib.h>

int main()
{
    int height;
    printf("Enter height in inches:");
    scanf("%d",&height);

    int feet,inch;
    feet=inch/12;
    inch=height%12;
    printf("Your height is %d feet,%d inch\n",feet,inch);

    int a,b;
    scanf("%d %d",&a,&b);
    printf("Enter two numbers:%d %d\n",a+b,a-b);

    float c,d;
    scanf("%f %f",&c,&d);
    printf("Enter two numbers:%1f %1f",c+d,c-d);

    return 0;
}
