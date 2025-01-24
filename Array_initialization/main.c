#include <stdio.h>
#include <stdlib.h>

int main()
{
    double values[10];

    for(int i=0;i<10;i++){
        values[i]=i+1;

    }
    for(int i=0;i<10;i++){
        printf("%lf\n",values[i]);
    }
    return 0;
}
