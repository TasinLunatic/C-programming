#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100]="Hello Emma";
    int sz=sizeof(str)/sizeof(str[0]);
    printf("%d\n",sz);

    int idx=0,len=0;
    while(str[idx] !='\0'){
        idx++;

    }
    printf("Length=%d",idx);
    return 0;
}
