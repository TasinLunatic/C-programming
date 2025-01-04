#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    while(a!=0){
        int rem=b%a;
        b=a;
        a=rem;
        printf("%d %d\n",a,b);
    }
    printf("GCD=%d\n",b);
    return 0;
}

/*  a  b  remainder  (Question)
    30 42   12
    12 30   6
    6   12  0
    0    6

*/
